//
// Created by Li on 2019/3/25.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <deque>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) return true;
        for (auto c:s) {
            if (c == '[' or c == '{' or c == '(') {
                stack.push_back(c);
            } else {
                if (stack.empty()) return false;
                if (c == ')') {
                    if (stack.back() == '(') stack.pop_back();
                    else return false;
                }
                if (c == ']') {
                    if (stack.back() == '[') stack.pop_back();
                    else return false;
                }
                if (c == '}') {
                    if (stack.back() == '{') stack.pop_back();
                    else return false;
                }
            }
        }
        return stack.empty();
    }

private:
    deque<char> stack;
};

#endif //LEETCODE_SOLUTION_H
