//
// Created by Li on 2018/11/7.
//

#ifndef LEETCODE_THREESUM_H
#define LEETCODE_THREESUM_H

#include <vector>
#include <algorithm>

using std::vector;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> rtn;
        if (nums.size() < 3) return rtn;
        sort(nums.begin(), nums.end());
        for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter) {
            auto iter1 = iter + 1;
            auto iter2 = nums.end() - 1;

            while (iter1 < iter2) {
                vector<int> v1;
                if (*iter + *iter1 + *iter2 == 0) {
                    v1.push_back(*iter);
                    v1.push_back(*iter1);
                    v1.push_back(*iter2);
                    rtn.push_back(v1);
                    ++iter1;
                    --iter2;
                    while (*iter1 == *(iter1 - 1) && iter1 < iter2) {
                        ++iter1;
                    }
                    while (*iter2 == *(iter2 + 1) && iter1 < iter2) {
                        --iter2;
                    }

                } else if (*iter + *iter1 + *iter2 < 0) {
                    ++iter1;
                } else {
                    --iter2;
                }
            }
            while (iter < nums.end() - 1 && *iter == *(iter + 1)) {
                ++iter;
            }
        }
        return rtn;
    }
};


#endif //LEETCODE_THREESUM_H
