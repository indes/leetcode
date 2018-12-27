//
// Created by Li on 2018/12/27.
//

#include "Solution.h"

void Solution::Permutation(string str) {
    if (str.empty()) return;
    Permutation(&str, 0);
}

void Solution::Permutation(string *str, string::size_type nums) {
    string::size_type size = str->size();
    if (nums == size) {
        cout << *str << std::endl;
    } else {
        for (int i = nums; i < size; ++i) {
            char temp = (*str)[i];

            (*str)[i] = (*str)[nums];
            (*str)[nums] = temp;
            Permutation(str, nums + 1);
            temp = (*str)[i];

            (*str)[i] = (*str)[nums];
            (*str)[nums] = temp;
        }
    }
}
