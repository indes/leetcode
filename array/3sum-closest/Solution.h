//
// Created by Li on 2018/11/9.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> &nums, int target) {
        if (nums.size() < 3) return -1;
        int distance = INT_MAX;
        sort(nums.begin(), nums.end());
        int rtn;
        for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter) {

            auto iter1 = iter + 1;
            auto iter2 = nums.end() - 1;
            while (iter1 < iter2) {
                int sum = *iter + *iter1 + *iter2;
                int temp_dis;
                if (target > sum) {
                    temp_dis = target - sum;
                    if (temp_dis < distance) {
                        distance = temp_dis;
                        rtn = sum;
                    }
                    ++iter1;
                } else if (target < sum) {
                    temp_dis = sum - target;
                    if (temp_dis < distance) {
                        distance = temp_dis;
                        rtn = sum;
                    }
                    --iter2;
                } else {
                    return sum;
                }

            }
        }
        return rtn;
    }
};


#endif //LEETCODE_SOLUTION_H
