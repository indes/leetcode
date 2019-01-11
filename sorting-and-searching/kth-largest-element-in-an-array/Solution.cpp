//
// Created by Li on 2018/12/5.
//

#include "Solution.h"

int Solution::findKthLargest(vector<int> &nums, int k) {

    sort(nums);
    return nums[nums.size() - k];
}

void Solution::sort(vector<int> &nums) {

    make_heap(nums.begin(), nums.end());
    sort_heap(nums.begin(), nums.end());
}
