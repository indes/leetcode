//
// Created by Li on 2019/2/26.
//

#ifndef LEETCODE_HEAPSORT_H
#define LEETCODE_HEAPSORT_H

#include <vector>
#include <algorithm>


using std::swap;
using std::vector;

class HeapSort {
private:
    template<class T>
    void heapAdjust(vector<T> &v, int length) {
        int dad_index = length % 2 == 0 ? length / 2 - 1 : length / 2;
        for (int dad = dad_index; dad >= 0; --dad) {
            int son = dad * 2 + 1;
            // 找出子节点中最小的元素
            if (son + 1 <= length and v[son] < v[son + 1]) {
                son++;
            }

            if (v[dad] < v[son]) {
                swap(v[dad], v[son]);
            }
        }
    }

public:
    template<class T>
    void sort(vector<T> &v) {
        for (int i = v.size() - 1; i > 0; i--) {
            // 调整堆
            heapAdjust(v, i);
            // 交换堆顶与队尾元素
            swap(v[0], v[i]);
        }
    }
};


#endif //LEETCODE_HEAPSORT_H
