//
// Created by Li on 2019/3/25.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {
        if (height.empty() or height.size() == 1) return 0;

        auto iter1 = height.begin(), iter2 = height.end() - 1;
        int ans = (iter2 - iter1) * (min(*iter1, *iter2));

        while (iter1 <iter2) {
            ans = max(ans, static_cast<int>((iter2 - iter1) * min(*iter1, *iter2)));
            if (*iter1 < *iter2) {
                iter1++;
            } else {
                iter2--;
            }
        }
        return ans;
    }
};

#endif //LEETCODE_SOLUTION_H
