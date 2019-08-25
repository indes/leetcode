//
// Created by Li on 2018/11/30.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H


#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProduct(const vector<int>& nums){
        int curr_max = 1, curr_min = 1, ans_max = INT_MIN;
        for (auto num:nums) {
            if (num < 0) {
                int temp = curr_max;
                curr_max = curr_min;
                curr_min = temp;
            }

            curr_max = max(num * curr_max, num);
            curr_min = min(num * curr_min, num);
            ans_max = max(curr_max, ans_max);

        }
        return ans_max;
    };
};


#endif //LEETCODE_SOLUTION_H
