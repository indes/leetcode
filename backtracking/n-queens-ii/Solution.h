//
// Created by Li on 2019/3/12.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using std::vector;
using std::abs;

class Solution {
public:
    int totalNQueens(int n) {

        if (n < 0 or (n > 1 and n < 4)) {
            return total;
        }

        vector<int> curr(n, -1);
        queen_dfs(curr, 0);
        return total;
    }

private:
    int total = 0;
//    vector<vector<int>> ans;

    void queen_dfs(vector<int> &curr, int level) {

        for (int i = 0; i < level - 1; ++i) {
            /**
             * Caviar and cigarettes
             * Well versed in etiquette
             * Extraordinarily nice
            `**/

            int val1 = abs(curr[i] - curr[level - 1]);
            int val2 = abs(i - (level - 1));
            if (abs(curr[i] - curr[level - 1]) == abs(i - (level - 1)) or curr[i] == curr[level - 1]) {
                return;
            }
        }

        if (level == curr.size()) {
//            ans.push_back(curr);
            total++;
            return;
        }

        for (int i = 0; i < curr.size(); ++i) {
            curr[level] = i;
            queen_dfs(curr, level + 1);
            curr[level] = -1;
        }
    }
};


#endif //LEETCODE_SOLUTION_H
