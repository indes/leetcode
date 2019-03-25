//
// Created by Li on 2019/3/25.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> grayCode(int n) {
        if (n == 0) {
            return vector<int>({0});
        }
        vector<int> ans({0});
        for (int i = 1; i < 1 << n; ++i) {
            ans.push_back(i ^ i >> 1);
        }
        return ans;
    }
};


#endif //LEETCODE_SOLUTION_H
