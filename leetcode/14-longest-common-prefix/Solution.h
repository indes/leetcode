//
// Created by Li on 2019/3/25.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()) return "";
        if (strs.size() == 1) {
            return strs[0];
        }

        return longestCommonPrefix(strs, 0, strs.size() - 1);
    }

private:
    string longestCommonPrefix(vector<string> &strs, int s, int e) {
        if (e == s) {
            return strs[s];
        }

        if (e - s == 1) {
            return longestCommonPrefix(strs[e], strs[s]);
        }
        int mid = s + (e - s) / 2;
        string str1 = longestCommonPrefix(strs, s, mid);
        string str2 = longestCommonPrefix(strs, mid + 1, e);

        return longestCommonPrefix(str1, str2);
    }

    string longestCommonPrefix(string &strs1, string &strs2) {
        string com;
        for (int i = 0; i < min(strs1.size(), strs2.size()); ++i) {
            if (strs1[i] == strs2[i]) {
                com.push_back(strs2[i]);
            } else {
                return com;
            }
        }
        return com;
    }

};

#endif //LEETCODE_SOLUTION_H
