//
// Created by Li on 2019/7/4.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        vector<int> res(nums.size(), 0);
        int k = 1;
        for (int i = 0; i < nums.size(); ++i) {
            res[i] = k;
            k *= nums[i];
        }
        k = 1;
        for (int j = nums.size() - 1; j >= 0; --j) {
            res[j] *= k;
            k *= nums[j];
        }
        return res;
    }
};

#endif //LEETCODE_SOLUTION_H
