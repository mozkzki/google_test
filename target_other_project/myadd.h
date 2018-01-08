/* Copyright 2017 yukkun007 */
#pragma once

namespace sample {

// test codeを別プロジェクトとする場合、exportが必要
#ifdef DLL_EXPORTS
#ifdef __cplusplus
extern "C" {
#endif
    int __declspec(dllexport) __stdcall myadd(const int a, const int b);
#ifdef __cplusplus
}
#endif
#else
#ifdef __cplusplus
extern "C" {
#endif
    int __declspec(dllimport) __stdcall myadd(const int a, const int b);
#ifdef __cplusplus
}
#endif
#endif

}  // namespace sample
