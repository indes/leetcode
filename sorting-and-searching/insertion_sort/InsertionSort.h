//
// Created by Li on 2019/2/24.
//

#ifndef LEETCODE_INSERTIONSORT_H
#define LEETCODE_INSERTIONSORT_H

#include <vector>

using std::vector;

class InsertionSort {
public:
    template<class T>
    void sort(vector<T> &v) {
        for (int i = 1; i < v.size(); ++i) {
            for (int j = i; j >= 0; --j) {
                if ((j == 0 and v[j] > v[i]) or (v[j - 1] <= v[i] and v[j] > v[i])) {
                    int current = v[i];
                    push_back(v, j, i);
                    v[j] = current;
                }
            }
        }
    }

private:
    template<class T>
    void push_back(vector<T> &v, int start, int end) {
        for (int i = end; i > start; --i) {
            v[i] = v[i - 1];
        }
    }
};


#endif //LEETCODE_INSERTIONSORT_H
