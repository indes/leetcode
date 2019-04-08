//
// Created by Li on 2019/4/8.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <vector>
#include <deque>

using namespace std;

class Solution {
public:
    string simplifyPath(const string &path) {
        string ans;
        deque<string> q;
        auto pos2 = path.find('/');
        string::size_type pos1 = 0;

        while (pos2 != string::npos) {
            string temp = path.substr(pos1, pos2 - pos1);
            if (!temp.empty()) {
                if (temp == "..") {
                    if (!q.empty()) {
                        q.pop_back();
                    }
                } else if (temp == ".") {

                } else {
                    q.push_back(temp);
                }
            }
            pos1 = pos2 + 1;
            pos2 = path.find('/', pos2 + 1);
        }

        // 处理最后一个子串
        string temp = path.substr(pos1, path.size() - pos1);
        if (!temp.empty()) {
            if (temp == "..") {
                if (!q.empty()) {
                    q.pop_back();
                }
            } else if (temp == ".") {

            } else {
                q.push_back(temp);
            }
        }

        if (q.empty()) return "/";
        while (!q.empty()) {
            ans += "/" + q.front();
            q.pop_front();
        }
        return ans;
    }

};

#endif //LEETCODE_SOLUTION_H
