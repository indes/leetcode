//
// Created by Li on 2018/11/9.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> rtn;
        if (nums.size() <= 3) return rtn;
        for (vector<int>::iterator i = nums.begin(); i != nums.end() - 3; ++i) {
            for (vector<int>::iterator iter = i + 1; iter != nums.end(); ++iter) {
                vector<int> v;
                auto iter2 = iter + 1;
                auto iter3 = nums.end() - 1;
                while (iter2 < iter3) {
                    if (*i + *iter + *iter2 + *iter3 == target) {
                        v.push_back(*i);
                        v.push_back(*iter);
                        v.push_back(*iter2);
                        v.push_back(*iter3);
                        ++iter2;
                        --iter3;
                        while (iter2 < iter3 && *iter2 == *(iter2 - 1)) ++iter2;
                        while (iter2 < iter3 && *iter3 == *(iter3 + 1)) ++iter3;

                    }

                }
                while (*(iter + 1) == *iter) {
                    ++iter;
                }
            }
            while (*(i + 1) == *i) {
                ++i;
            }
        }
        return rtn;
    }
};


#endif //LEETCODE_SOLUTION_H
