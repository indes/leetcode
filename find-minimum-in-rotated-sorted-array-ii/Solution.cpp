//
// Created by Li on 2018/11/13.
//

#include "Solution.h"

int Solution::findMin(vector<int> &nums) {
    bool is_rotate = false;
    for (int i = 0; i < nums.size() - 1; ++i) {
        // 判断是否轮转
        if (nums[i + 1] < nums[i]) is_rotate = true;
    }

    if (!is_rotate) return *nums.begin();

    if (nums.size() == 1) return nums[0];
    if (nums.size() == 2) return min(nums[0], nums[1]);

    vector<int>::size_type mid = (nums.end() - nums.begin()) / 2;
    if (nums[mid] > *nums.begin()) {
        // 在右半边寻找
        vector<int> v(nums.begin() + mid, nums.end());
        return findMin(v);

    } else {
        // 在左半边寻找
        vector<int> v(nums.begin(), nums.begin() + mid + 1);
        return findMin(v);
    }

}