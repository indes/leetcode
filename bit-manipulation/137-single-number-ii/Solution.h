//
// Created by Li on 2019/4/22.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(const vector<int> &nums) {
        int arr[32] = {0};
        for (auto num:nums) {
            for (int i = 0; i < 32; ++i) {
                arr[i] += (num >> i) & 1;
            }
        }
        int ans = 0;
        for (int j = 0; j < 32; ++j) {
            ans |= ((arr[j] % 3) << j);
        }

        return ans;
    }
};


#endif //LEETCODE_SOLUTION_H
