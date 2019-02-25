//
// Created by Li on 2019/2/24.
//

#ifndef LEETCODE_QUICKSORT_H
#define LEETCODE_QUICKSORT_H

#include <vector>
#include <algorithm>

using std::vector;
using std::swap;

class QuickSort {
public:
    template<class T>
    void sort(vector<T> &v) {
        qsort(v, 0, v.size() - 1);
    }

private:
    template<class T>
    void qsort(vector<T> &v, int left, int right) {

        if (left >= right)
            return;
        T pivot = left;
        int start = left, end = right;
        while (start != end) {
            while (v[pivot] <= v[end] and end != start) {
                --end;
            }
            swap(v[pivot], v[end]);
            pivot = end;
            while (v[pivot] >= v[start] and end != start) {
                ++start;
            }
            swap(v[pivot], v[start]);
            pivot = start;
        }

        qsort(v, left, pivot);
        qsort(v, pivot + 1, right);
    }
};


#endif //LEETCODE_QUICKSORT_H
