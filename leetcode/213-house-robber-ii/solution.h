//
// Created by Li on 2018/12/1.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int rob2(vector<int> &nums) {

        if (nums.empty()) return 0;
        if (nums.size() == 1)return nums[0];

        // 初始化前两个
        vector<int> v1{0, nums[0]};
        vector<int> v2{0, nums[1]};

        // 对去掉第一个和最后一个元素的list分别dp
        for (int i = 2; i < nums.size(); ++i) {
            v1.push_back(max(v1[i - 1], v1[i - 2] + nums[i - 1]));
        }

        for (int j = 2; j < nums.size(); ++j) {
            v2.push_back(max(v2[j - 1], v2[j - 2] + nums[j]));
        }

        return max(v2.back(), v1.back());
    };
};


#endif //LEETCODE_SOLUTION_H
