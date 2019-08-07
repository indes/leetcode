//
// Created by Li on 2018/11/28.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>> &triangle){
        if (triangle.empty() or triangle[0].empty())
            return -1;

        int h = triangle.size(), w = triangle.back().size();

        for (int i = h - 2; i >= 0; --i) {
            for (int j = 0; j < triangle[i].size(); ++j) {
                triangle[i][j] = min(triangle[i + 1][j], triangle[i + 1][j + 1]) + triangle[i][j];
            }
        }

        return triangle[0][0];
    }
};


#endif //LEETCODE_SOLUTION_H
