//
// Created by Li on 2019/2/24.
//

#ifndef LEETCODE_BUBBLESORT_H
#define LEETCODE_BUBBLESORT_H

#include <vector>
#include <algorithm>

using std::vector;

class BubbleSort {
public:
    void sort(vector<int> *v) {
        for (vector<int>::size_type i = v->size() - 1; i != 0; i--) {
            for (vector<int>::size_type j = 0; j < i; j++) {
                if ((*v)[j] > (*v)[j + 1]) {
                    std::swap((*v)[j], (*v)[j + 1]);
                }
            }
        }

    }
};


#endif //LEETCODE_BUBBLESORT_H
