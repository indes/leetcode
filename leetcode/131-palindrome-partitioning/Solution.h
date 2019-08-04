//
// Created by Li on 2019/3/16.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {

        if (s.empty()) {
            return vector<vector<string>>();
        }
        this->s = s;
        vector<string> curr;
        partition_dfs(curr, 0);
        return ans;
    }

    bool check(string str) {
        if (str.empty() or str.size() == 1) return true;
        for (int i = 0; i < str.size() / 2; ++i) {
            if (str[i] != str[str.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }

private:
    vector<vector<string>> ans;
    string s;


    void partition_dfs(vector<string> &curr, int level) {
        if (level >= s.size()) {
            ans.push_back(curr);
            return;
        }
        for (int i = 1; i <= s.size() - level; ++i) {
            string temp = s.substr(level, i);
            if (check(temp)) {
                curr.push_back(temp);
                partition_dfs(curr, level + i);
                curr.pop_back();
            }
        }
    }
};

#endif //LEETCODE_SOLUTION_H
