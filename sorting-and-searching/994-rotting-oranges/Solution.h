//
// Created by Li on 2019/4/15.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <deque>

using std::vector;
using std::deque;
using std::pair;

class Solution {
public:
    int orangesRotting(vector<vector<int>> &grid) {
        int time = 0;
        deque<pair<int, int>> q;
        bool have_1 = false;
        for (;; ++time) {
            for (int i = 0; i < grid.size(); ++i) {
                for (int j = 0; j < grid[i].size(); ++j) {
                    if (grid[i][j] == 1) {
                        have_1 = true;
                    }
                    if (grid[i][j] == 2) {
                        for (int k = -1; k <= 1; k += 2) {
                            if (i + k >= 0 && i + k < grid.size() && grid[i + k][j] == 1) {
                                q.emplace_back(i + k, j);
                            }
                            if (j + k >= 0 && j + k < grid[i].size() && grid[i][j + k] == 1) {
                                q.emplace_back(i, j + k);
                            }
                        }
                    }
                }
            }

            if (q.empty()) {
                // 如果没有将要腐烂的橘子并且矩阵中还有新鲜的橘子，代表有一个永远不会腐烂，输出-1。
                return have_1 ? -1 : time;
            } else {
                while (!q.empty()) {
                    int x = q.back().first;
                    int y = q.back().second;
                    grid[x][y] = 2;
                    q.pop_back();
                }
                have_1 = false;
            }
        }
    }
};


#endif //LEETCODE_SOLUTION_H
