//
// Created by Li on 2019/3/31.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <cmath>
#include <deque>
#include <climits>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        if (str.empty()) return 0;
        bool strip = true, first_char = true, negative = false, remove_zero = true;

        deque<int> q;
        for (auto c:str) {
            if (strip and c == ' ') continue;
            strip = false;

            if (first_char and c == '-') {
                negative = true;
                first_char = false;
                continue;
            }
            if (first_char and c == '+') {
                negative = false;
                first_char = false;
                continue;
            }
            if (remove_zero and c == '0') {
                first_char = false;
                continue;
            }
            remove_zero = false;
            first_char = false;
            if (c <= '9' and c >= '0') {
                q.push_back(c - '0');
            } else {
                break;
            }

        }
        int length = q.size();
        if (length > 10) return negative ? INT_MIN : INT_MAX;
        else if (length < 10) {
            int ans = 0;
            for (int i:q) {
                ans *= 10;
                ans += i;
            }
            return (negative ? -1 : 1) * ans;
        } else {
            int limit = negative ? INT_MIN : INT_MAX;
            int ans = 0;
            int dev = pow(10, 9) + 1;
            int limit_num;
            bool check_limit = true;
            for (int i = 10; i > 0; --i) {
                int q_num = q[10 - i];
                if (i == 10) {
                    limit_num = (negative ? -1 : 1) * (limit / dev);
                } else {
                    limit_num = (negative ? -1 : 1) * ((limit % (dev * 10)) / dev);
                }
                dev /= 10;
                if (check_limit) {
                    if (q_num > limit_num) return limit;
                    else {
                        if (q_num < limit_num) check_limit = false;
                        ans *= 10;
                        if (negative) ans -= q_num;
                        else ans += q_num;
                    }
                } else {
                    ans *= 10;
                    if (negative) ans -= q_num;
                    else ans += q_num;
                }

            }
            return ans;
        }

    }
};


#endif //LEETCODE_SOLUTION_H
