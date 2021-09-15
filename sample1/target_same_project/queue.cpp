/* Copyright 2017 mozkzki */
#include "target_same_project/queue.h"
#include <queue>

namespace sample {

template <typename E>
Queue<E>::Queue() {
}

template <typename E>
void Queue<E>::Enqueue(const E& element) {
    this->elements_.push(element);
}

template <typename E>
E Queue<E>::Dequeue() {
    E element = this->elements_.front();
    this->elements_.pop();
    return element;
}

template <typename E>
size_t Queue<E>::size() const {
    return this->elements_.size();
}

// コンパイラ(VC++)の制限のため、明示的実体化が必要
// 参考:http://d.hatena.ne.jp/kasei_san/20070517/p1
template class Queue<int>;

}  // namespace sample
