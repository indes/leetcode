//
// Created by Li on 2018/9/18.
//

#include "MoveZeroes.h"

void MoveZeroes::moveZeroes(vector<int> &nums) {
    nums.reserve(nums.size() * 2);
    int size = nums.size();
    auto iter1 = nums.begin();
    for (int i = 0; i <= size; ++i) {
        if (nums[i] == 0) {
            nums.push_back(0);
        }
    }

    for (int j = 0; size >= j;) {
        if (nums[j] == 0) {
            nums.erase(nums.begin() + j);
            size--;

        } else {
            j++;
        }
    }

    int a = 123;
}
