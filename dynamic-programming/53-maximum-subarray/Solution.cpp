//
// Created by Li on 2018/11/28.
//

#include "Solution.h"

int Solution::maxSubArray(vector<int> &nums) {
    if (nums.empty()) return -1;

//    vector<int> v;

    return maxSubArray(nums, 0, nums.size() - 1);
}

int Solution::maxSubArray(vector<int> &nums, int s, int e) {

    if (s < e) {
        int mid = s + (e - s) / 2;
        int left_min = maxSubArray(nums, s, mid);
        int right_min = maxSubArray(nums, mid + 1, e);

        int MaxLeftBorderSum = INT_MIN, LeftBorderSum = 0;
        for (int i = mid; i >= 0; --i) {
            LeftBorderSum += nums[i];
            MaxLeftBorderSum = max(MaxLeftBorderSum, LeftBorderSum);
        }

        int MaxRightBorderSum = INT_MIN, RightBorderSum = 0;
        for (int i = mid + 1; i <= e; ++i) {
            RightBorderSum += nums[i];
            MaxRightBorderSum = max(MaxRightBorderSum, RightBorderSum);
        }
        return max(max(left_min, right_min), MaxRightBorderSum + MaxLeftBorderSum);

    } else if (s == e) {
        return nums[s];
    } else {
        return INT_MIN;
    }

}
