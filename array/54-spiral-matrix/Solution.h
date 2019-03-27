//
// Created by Li on 2019/3/27.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        if (matrix.empty()) return vector<int>();
        int height = matrix.size(), width = matrix.front().size();
        int h_1 = 0, w_1 = 0, h_2 = height - 1, w_2 = width - 1;
        vector<int> ans;

        while (h_1 <= h_2 and w_1 <= w_2) {

            for (int i = w_1; i <= w_2; ++i) {
                ans.push_back(matrix[h_1][i]);
            }
            ++h_1;
            if (h_1 > h_2) break;
            for (int j = h_1; j <= h_2; ++j) {
                ans.push_back(matrix[j][w_2]);
            }
            --w_2;
            if (w_1 > w_2) break;

            for (int k = w_2; k >= w_1; --k) {
                ans.push_back(matrix[h_2][k]);
            }
            --h_2;
            if (h_1 > h_2) break;

            for (int l = h_2; l >= h_1; --l) {
                ans.push_back(matrix[l][w_1]);
            }
            ++w_1;
            if (w_1 > w_2) break;

        }
        return ans;
    }
};


#endif //LEETCODE_SOLUTION_H
