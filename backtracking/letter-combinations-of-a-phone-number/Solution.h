//
// Created by Li on 2019/3/11.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string d) {
        if (d.empty()) {
            return vector<string>();
        }
        this->digits = d;
        string curr;
        letterCombinationsDfs(curr, 0);
        return ans;
    }

    Solution() : int_level(10, 0) {
        int2char.push_back(vector<char>({}));
        int2char.push_back(vector<char>({}));
        int2char.push_back(vector<char>({'a', 'b', 'c'}));
        int2char.push_back(vector<char>({'d', 'e', 'f'}));
        int2char.push_back(vector<char>({'g', 'h', 'i'}));
        int2char.push_back(vector<char>({'j', 'k', 'l'}));
        int2char.push_back(vector<char>({'m', 'n', 'o'}));
        int2char.push_back(vector<char>({'p', 'q', 'r', 's'}));
        int2char.push_back(vector<char>({'t', 'u', 'v'}));
        int2char.push_back(vector<char>({'w', 'x', 'y', 'z'}));
    }

private:
    vector<vector<char>> int2char;
    vector<string> ans;
    string digits;

    vector<int> int_level;

    void letterCombinationsDfs(string &curr, int level) {
        if (level == digits.size()) {
            ans.push_back(curr);
            return;
        }
        if (level > digits.size()) {
            return;
        }

        int char_int = static_cast<int>(digits[level] - '0');
        for (int j = 0; j < int2char[char_int].size(); ++j) {
            curr.push_back(int2char[char_int][j]);
            letterCombinationsDfs(curr, level + 1);
            curr.pop_back();
        }
    }
};

#endif //LEETCODE_SOLUTION_H
