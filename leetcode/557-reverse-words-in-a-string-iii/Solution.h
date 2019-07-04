//
// Created by Li on 2019/7/4.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
#include <string>

using std::stack;
using std::string;

class Solution {
public:
    string reverseWords(string s) {
        // 使用栈
        string res;
        stack<char> char_stack;
        for (auto c:s) {
            if (c == ' ') {
                while (!char_stack.empty()) {
                    res.push_back(char_stack.top());
                    char_stack.pop();
                }
                res.push_back(' ');
            } else {
                char_stack.push(c);
            }
        }
        while (!char_stack.empty()) {
            res.push_back(char_stack.top());
            char_stack.pop();
        }
        return res;
    }
};

#endif //LEETCODE_SOLUTION_H
