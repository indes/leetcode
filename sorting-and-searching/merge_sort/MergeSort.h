//
// Created by Li on 2019/2/27.
//

#ifndef LEETCODE_MERGESORT_H
#define LEETCODE_MERGESORT_H

#include <vector>
#include <algorithm>

using std::vector;

class MergeSort {
public:
    template<class T>
    void sort(vector<T> &v) {
        mergeSort(v, 0, v.size() - 1);
    }

private:
    template<class T>
    void mergeSort(vector<T> &v, int start, int end) {
        if (start >= end) return;
        int mid = start + (end - start) / 2;
        mergeSort(v, start, mid);
        mergeSort(v, mid + 1, end);
        merge(v, start, end);
    }

    template<class T>
    void merge(vector<T> &v, int start, int end) {
        if (start + 1 == end) {
            if (v[start] > v[end]) {
                std::swap(v[start], v[end]);
            }
            return;
        }
        vector<T> v2;
        int mid = start + (end - start) / 2;
        int p1 = start, p2 = mid + 1;
        for (; p1 <= mid and p2 <= end;) {
            if (v[p1] <= v[p2]) {
                v2.push_back(v[p1]);
                ++p1;
            } else {
                v2.push_back(v[p2]);
                ++p2;
            }
        }
        if (p1 > mid) {
            for (; p2 <= end; ++p2) {
                v2.push_back(v[p2]);
            }
        } else {
            for (; p1 <= mid; ++p1) {
                v2.push_back(v[p1]);
            }
        }


        for (int i1 = start, i2 = 0; i1 <= end; ++i1, ++i2) {
            v[i1] = v2[i2];
        }
    }

};


#endif //LEETCODE_MERGESORT_H
