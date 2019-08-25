//
// Created by Li on 2019/3/13.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using std::max;
using std::vector;

class Solution {
public:
    int lengthOfLIS(const vector<int> &nums) {
        // O(n^2)

        if (nums.empty()) {
            return 0;
        }
        vector<int> v(nums.size(), 1);
        int max_length = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    v[i] = max(v[i], v[j] + 1);
                }
            }

            max_length = max(max_length, v[i]);
        }
        return max_length;
    }
};


#endif //LEETCODE_SOLUTION_H
