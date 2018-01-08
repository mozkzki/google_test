/* Copyright 2017 yukkun007 */
#include <windows.h>
#include "gtest/gtest.h"

#ifdef _DEBUG
#pragma comment(lib, "gtestd.lib")
#pragma comment(lib, "gtest_maind.lib")
#else
#pragma comment(lib, "gtest.lib")
#pragma comment(lib, "gtest_main.lib")
#endif

int main(int argc, char **argv) {
    // VC++のバグのためDLL内に書いたテストはそのままだと実行されない
    // 参考:http://opencv.jp/googletestdocs/primer.html
    LoadLibrary(L"target_same_project");
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();

    return 0;
}
