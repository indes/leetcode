//
// Created by Li on 2019/7/3.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        } else if (nums.size() == 1) {
            return 1;
        }

        int len = 1;
        int last_n = nums[0];
        for (auto iter1 = nums.begin() + 1, iter2 = nums.begin() + 1; iter2 < nums.end();) {
            while (iter2 < nums.end() && *iter2 == last_n) {
                ++iter2;
            }
            if (iter2 == nums.end()) break;
            last_n = *iter2;
            *iter1 = *iter2;
            ++iter1;
            ++iter2;
            ++len;
        }
        return len;
    }
};

#endif //LEETCODE_SOLUTION_H
