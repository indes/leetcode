//
// Created by Li on 2019/3/28.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return 0;
        int longest = 0, front = 0, tail = 0;

        vector<vector<int>> v(s.size(), vector<int>(s.size(), 0));

        for (int i = 0; i < s.size(); ++i) {
            v[i][i] = 1;

            for (int j = 0; j < s.size(); ++j) {

            }
        }

    }

};

#endif //LEETCODE_SOLUTION_H
