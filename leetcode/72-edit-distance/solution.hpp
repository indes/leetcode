//
// Created by Li on 2019/4/16.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
using std::min;

class Solution {
public:
    int minDistance(const string &word1, const string &word2) {
        vector<vector<int>> v(word1.size() + 1, vector<int>(word2.size() + 1, 0));

        for (auto i = 0; i <= word1.size(); ++i) {
            v[i][0] = i;
        }

        for (auto j = 0; j <= word2.size(); ++j) {
            v[0][j] = j;
        }

        for (auto i = 1; i <= word1.size(); ++i) {
            for (auto j = 1; j <= word2.size(); ++j) {

                if (word1[i - 1] == word2[j - 1]) {
                    v[i][j] = v[i - 1][j - 1];
                } else {
                    v[i][j] = min(v[i - 1][j - 1] + 1, min(v[i][j - 1] + 1, v[i - 1][j] + 1));
                }
            }
        }
        return v.back().back();
    }

};

#endif //LEETCODE_SOLUTION_HPP
