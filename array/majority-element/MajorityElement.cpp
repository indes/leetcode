//
// Created by Li on 2019/3/6.
//

#include "MajorityElement.h"

int Solution::majorityElement(vector<int> &nums) {
    map<int, int> m;
    int size = nums.size();
    for (int i = 0; i < size; ++i) {
        if (m.find(nums[i]) != m.end()) {
            m[nums[i]]++;
        } else {
            m[nums[i]] = 1;
        };

        if (m[nums[i]] > size / 2) {
            return nums[i];
        }
    }

    return -1;
}
