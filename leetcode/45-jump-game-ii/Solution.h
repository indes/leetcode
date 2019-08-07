//
// Created by Li on 2018/12/3.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int jump(vector<int> &nums) {
        int end = 0; // 上一次停靠点能跳跃的边界
        int max_place = 0; // 当前能跳的最远距离
        int count = 0;

        for (auto i = 0; i < nums.size(); ++i) {
            if (i > end) {
                ++count;
                end = max_place;
            }
            max_place = max(max_place, nums[i] + i); // 保留最远距离
        }
        return count;
    }
};


#endif //LEETCODE_SOLUTION_H
