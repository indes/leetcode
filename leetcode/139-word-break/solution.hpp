//
// Created by Li on 2019/3/13.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string> &wordDict) {
        dict = &wordDict;
        vector<bool> v(s.size(), false);
        for (int i = 0; i < s.size(); ++i) {
            for (int j = i; j >= 0; --j) {
                if (j == 0) {
                    v[i] = v[i] or InDict(s, j, i);
                } else {
                    v[i] = v[i] or (v[j - 1] and InDict(s, j, i));
                }
            }
        }
        return v[s.size() - 1];
    }

private:
    vector<string> *dict;

    bool InDict(string s, int start, int end) {
        string temp;
        for (int i = start; i <= end; ++i) {
            temp.push_back(s[i]);
        }
        return find(dict->begin(), dict->end(), temp) != dict->end();
    }
};

#endif //LEETCODE_SOLUTION_H
