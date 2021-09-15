/* Copyright 2017 mozkzki */
#pragma once
#pragma warning(disable:4251)  // 有用でない警告をdisable

#include <queue>

#ifdef DLL_EXPORTS
#define DLL_EXPORT  __declspec(dllexport)
#else
#define DLL_EXPORT  __declspec(dllimport)
#endif

namespace sample {

// test codeを別プロジェクトとする場合、exportが必要
// だが、template classは(ヘッダに実装しない限り)exportできない
// 参考：https://qiita.com/Chironian/items/462a3bdf271d5f0b00b6
template <typename E>
class DLL_EXPORT Queue {
 public:
     Queue();
     void Enqueue(const E& element);
     E Dequeue();
     size_t size() const;
 private:
    std::queue<E> elements_;
};

// 下記のような通常クラスはexportされるが、
// tenplate classはdllexportをつけてもexportされない(dependency walkerで確認)
class DLL_EXPORT Normal {
 public:
     Normal();
     void get();
};

}  // namespace sample
