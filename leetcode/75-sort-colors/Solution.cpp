//
// Created by Li on 2019/3/8.
//

#include "Solution.h"

void Solution::sortColors_2(vector<int> &nums) {
    vector<int> v({0, 0, 0});
    for (int num : nums) {
        v[num]++;
    }
    nums = vector<int>();
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v[i]; ++j) {
            nums.push_back(i);
        }
    }
}

void Solution::sortColors(vector<int> &nums) {
    int red_index = 0, blue_index = nums.size() - 1;
    for (int i = 0; i <= blue_index; ++i) {
        if (nums[i] == 0) {
            swap(nums[red_index++], nums[i]);
        }
        if (nums[i] == 2) {
            swap(nums[blue_index--], nums[i--]);
        }
    }
}
