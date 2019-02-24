//
// Created by Li on 2019/2/24.
//

#ifndef LEETCODE_SELECTSORT_H
#define LEETCODE_SELECTSORT_H

#include <vector>
#include <algorithm>

using std::vector;
using std::swap;

class SelectSort {
public:
    template<class T>
    void sort(vector<T> &v) {
        for (int i = v.size() - 1; i != 0; --i) {
            int p = 0;
            for (int j = 0; j <= i; ++j) {
                if (v[p] < v[j]) {
                    p = j;
                }
            }
            swap(v[p], v[i]);
        }
    }

};


#endif //LEETCODE_SELECTSORT_H
