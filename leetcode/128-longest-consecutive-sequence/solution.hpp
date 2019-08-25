//
// Created by li on 2019/8/25.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <vector>
#include <set>
#include <algorithm>

using std::vector;
using std::set;

class Solution {
public:
    int longestConsecutive(const vector<int> &nums) {
        set<int> s;
        int ans = 0;
        for (auto num:nums) {
            s.insert(num);
        }

        for (auto num:nums) {
            if (s.find(num - 1) == s.end()) {
                int curr_num = num;
                int curr_length = 1;

                while (s.find(curr_num + 1) != s.end()) {
                    curr_length++;
                    curr_num++;
                }
                ans = std::max(ans, curr_length);
            }
        }
        return ans;
    }
};

#endif //LEETCODE_SOLUTION_HPP
