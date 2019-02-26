//
// Created by Li on 2019/2/25.
//

#ifndef LEETCODE_SHELLSORT_H
#define LEETCODE_SHELLSORT_H

#include <vector>
#include <algorithm>

using std::vector;
using std::swap;

class ShellSort {
public:
    template<class T>
    void sort(vector<T> &v) {
        int i, j, gap;
        int n = v.size();
        for (gap = n / 2; gap > 0; gap /= 2)
            for (i = gap; i < n; i++)
                for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
                    swap(v[j], v[j + gap]);
//        shellSort(v, 2);
    }

private:
    template<class T>
    void shellSort(vector<T> &v, int groupLength) {
        if (v.size() < groupLength) return;


    }
};


#endif //LEETCODE_SHELLSORT_H
