/* Copyright 2017 yukkun007 */
#include "target_other_project/myadd.h"

namespace sample {

// test codeを別プロジェクトとする場合、exportが必要
int __declspec(dllexport) __stdcall myadd(const int a, const int b) {
    return a + b;
}

}
