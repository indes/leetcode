//
// Created by Li on 2019/8/4.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <stack>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int> nums;

        for (const auto &s:tokens) {
            if (s == "+") {
                auto a = nums.top();
                nums.pop();
                auto b = nums.top();
                nums.pop();
                nums.push(a + b);
            } else if (s == "-") {
                auto a = nums.top();
                nums.pop();
                auto b = nums.top();
                nums.pop();
                nums.push(b - a);
            } else if (s == "*") {
                auto a = nums.top();
                nums.pop();
                auto b = nums.top();
                nums.pop();
                nums.push(a * b);
            } else if (s == "/") {
                auto a = nums.top();
                nums.pop();
                auto b = nums.top();
                nums.pop();
                nums.push(b / a);
            } else {
                nums.push(stoi(s));
            }
        }
        return nums.top();
    }
};

#endif //LEETCODE_SOLUTION_HPP
