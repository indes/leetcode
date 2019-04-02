//
// Created by Li on 2019/4/2.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <set>
#include <algorithm>

using std::vector;
using std::set;
using std::max;
using std::pair;

class Solution {
public:
    int robotSim(vector<int> &commands, vector<vector<int>> &obstacles) {
        int dy[4] = {1, 0, -1, 0};
        int dx[4] = {0, 1, 0, -1};
        int x = 0, y = 0, d = 0, ans = 0;
        set<pair<int, int>> s;
        for (auto obstacle:obstacles) {
            s.insert(pair<int, int>(obstacle[0], obstacle[1]));
        }

        for (int cmd:commands) {
            if (cmd == -1) {
                d = (d + 1) % 4;
            } else if (cmd == -2) {
                d = (d + 3) % 4;
            } else {
                for (int i = 0; i < cmd; ++i) {

                    if (s.find(pair<int, int>(x + dx[d], y + dy[d])) != s.end()) {
                        break;
                    }
                    x += dx[d];
                    y += dy[d];
                    ans = max(ans, (x * x + y * y));
                }
            }

        }
        return ans;
    }
};


#endif //LEETCODE_SOLUTION_H
