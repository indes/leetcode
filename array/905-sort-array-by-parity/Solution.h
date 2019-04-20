//
// Created by Li on 2019/4/20.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <deque>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(const vector<int> &A) {
        vector<int> q;
        for (auto a:A) {
            if ((a & 1) == 1) {
                //注意运算符优先级
                q.push_back(a);
            } else {
                q.insert(q.begin(), a);
            }
        }
        return q;
    }
};


#endif //LEETCODE_SOLUTION_H
