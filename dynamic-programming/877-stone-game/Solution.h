//
// Created by Li on 2019/4/14.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool stoneGame(const vector<int> &piles) {
        vector<vector<int>> v(piles.size(), vector<int>(piles.size(), 0));
        auto n = piles.size();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0) {
                    v[j][j] = piles[j];
                } else if (j + i < n) {
                    v[j][j + i] = max(piles[j] - v[j + 1][j + i], piles[j + i] - v[j][j + i - 1]);
                }
            }
        }
        return v[0][n - 1] > 0;
    }
};


#endif //LEETCODE_SOLUTION_H
