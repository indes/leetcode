//
// Created by Li on 2019/3/9.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using std::vector;
using std::string;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        this->n = n;
        if (n > 1 and n < 4) {
            return ans;
        }
        vector<int> curr(n, -1);
        solveNQueensDfs(curr, 0);
        return ans;
    };

private:
    int n;
    vector<vector<string>> ans;
    vector<vector<int>> ans_int;

    void output(vector<int> &curr) {
        vector<string> str_vec(curr.size(), " ");
        for (int i = 0; i < curr.size(); ++i) {
            string str;
            for (int j = 0; j <curr.size(); ++j) {
                if (j == curr[i]) {
                    str.push_back('Q');
                } else {
                    str.push_back('.');
                }
            }
            str_vec[i] = str;
        }
        ans.push_back(str_vec);
    }

    void solveNQueensDfs(vector<int> &curr, int level) {

        for (int i = 0; i < level - 1; ++i) {
            // Killer Queen :)
            /** She's a Killer Queen
                Gunpowder, gelatine
                Dynamite with a laser beam
                Guaranteed to blow your mind **/

            int val1 = abs(curr[i] - curr[level - 1]);
            int val2 = abs(i - (level - 1));
            if (abs(curr[i] - curr[level - 1]) == abs(i - (level - 1)) or curr[i] == curr[level - 1]) {
                return;
            }
        }

        if (level == n) {
            ans_int.push_back(curr);
            output(curr);
            return;
        }

        for (int i = 0; i < n; ++i) {
            curr[level] = i;
            solveNQueensDfs(curr, level + 1);
            curr[level] = -1;
        }
    }
};


#endif //LEETCODE_SOLUTION_H
