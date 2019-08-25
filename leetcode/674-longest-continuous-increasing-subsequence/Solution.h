//
// Created by Li on 2018/12/3.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int> &nums){
        if (nums.empty()) return 0;

        int max_len = 1, len = 1, size = nums.size();

        for (int i = 1; i < size; ++i) {
            if (nums[i] > nums[i - 1]) {
                len += 1;
            } else {
                len = 1;
            }
            max_len = max(max_len, len);
        }

        return max_len;
    };
};


#endif //LEETCODE_SOLUTION_H
