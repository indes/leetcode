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
        if (s.empty()) return "";
        vector<vector<int>> v(s.size(), vector<int>(s.size(), 0));
        int max_length = 0, front = 0, tail = 0;
        for (int i = 0; i < s.size(); ++i) {
            v[i][i] = 1;

            if (v[i][i] > max_length) {
                max_length = v[i][i];
                front = tail = i;
            }
            for (int j = i - 1; j >= 0; --j) {
                if (j == i - 1) {
                    v[j][i] = s[i] == s[j] ? 2 : 0;

                } else {
                    v[j][i] = (v[j + 1][i - 1] and s[i] == s[j]) ? v[j + 1][i - 1] + 2 : 0;
                }
                if (v[j][i] > max_length) {
                    max_length = v[j][i];
                    front = j;
                    tail = i;
                }
            }
        }
        return s.substr(front, tail - front + 1);
    }
};

#endif //LEETCODE_SOLUTION_H
