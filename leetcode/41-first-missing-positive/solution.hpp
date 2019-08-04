//
// Created by Li on 2019/8/4.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int> &nums) {
        // 桶排序
        for (int i = 0; i < nums.size(); ++i) {
            while (i + 1 != nums[i]) {
                if (nums[i] > nums.size() or nums[i] <= 0 or nums[nums[i] - 1] == nums[i]) {
                    break;
                }
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (i != nums[i] - 1) {
                return i + 1;
            }
        }
        return nums.size() + 1;
    }

};


#endif //LEETCODE_SOLUTION_HPP
