//
// Created by Li on 2018/11/28.
//

#include "Solution.h"

int Solution::maxSubArray(vector<int> &nums) {
    if (nums.empty()) return -1;

//    vector<int> v;
    int sum = 0, m = INT_MIN;
    for (auto num:nums) {
        sum += num;

        m = max(sum, m);
        if (sum < 0) sum = 0;
    }

    return m;
}
