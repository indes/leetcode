//
// Created by Li on 5/29/2019.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        if (s.size() < 4 or s.size() > 12)
            return res;
        this->s = s;
        dfs(0);
        return res;
    }

private:
    vector<string> res;
    vector<int> res_list;
    string s;


    void dfs(int current_index) {
        if (res_list.size() > 4) {
            return;
        }

        if (current_index >= s.size() and res_list.size() == 4) {
            res.push_back(
                    to_string(res_list[0]) + "."
                    + to_string(res_list[1]) + "."
                    + to_string(res_list[2]) + "."
                    + to_string(res_list[3]));
            return;
        }


        int curr_num = 0;
        for (int i = 0; i < 3; i++) {
            if (current_index + i <= s.size() - 1) {
                if (i == 0 and s[current_index + i] == '0') {
                    curr_num *= 10;
                    curr_num += s[current_index + i] - '0';
                    res_list.push_back(curr_num);
                    dfs(current_index + i + 1);
                    res_list.pop_back();
                    return;
                } else {
                    curr_num *= 10;
                    curr_num += s[current_index + i] - '0';
                    if (curr_num <= 255) {
                        res_list.push_back(curr_num);
                        dfs(current_index + i + 1);
                        res_list.pop_back();
                    } else {
                        return;
                    }
                }
            }

        }

    }

};

#endif //LEETCODE_SOLUTION_H
