/* Copyright 2017 mozkzki */
#pragma once

#include <queue>

namespace sample {

template <typename E>
class Queue {
 public:
     Queue();
     void Enqueue(const E& element);
     E Dequeue();
     size_t size() const;
 private:
     std::queue<E> elements_;
};

}  // namespace sample
