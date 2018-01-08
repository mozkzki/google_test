/* Copyright 2017 yukkun007 */
#include "target_same_project/queue.h"
#include "gtest/gtest.h"

#ifdef _DEBUG
#pragma comment(lib, "gtestd.lib")
#pragma comment(lib, "gtest_maind.lib")
#else
#pragma comment(lib, "gtest.lib")
#pragma comment(lib, "gtest_main.lib")
#endif

namespace sample {

class QueueTest : public ::testing::Test {
 public:
    virtual void SetUp() {
        q1_.Enqueue(1);
        q2_.Enqueue(2);
        q2_.Enqueue(2);
        q3_.Enqueue(3);
        q3_.Enqueue(3);
        q3_.Enqueue(3);
    }

    virtual void TearDown() {
    }

    Queue<int> q0_;
    Queue<int> q1_;
    Queue<int> q2_;
    Queue<int> q3_;
};

TEST_F(QueueTest, IsEmptyInitially) {
    EXPECT_EQ(0, q0_.size());
    EXPECT_EQ(1, q1_.size());
    EXPECT_EQ(2, q2_.size());
    EXPECT_EQ(3, q3_.size());
}

}  // namespace sample
