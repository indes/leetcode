//
// Created by Li on 2019/4/1.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <queue>
#include <algorithm>

using std::pair;
using std::vector;
using std::priority_queue;

class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>> &people) {
        vector<pair<int, int>> v;
        std::sort(people.begin(), people.end(), cmp);
        for (auto p:people) {
            v.insert(v.begin() + p.second, p);
        }
        return v;
    }

    static bool cmp(pair<int, int> &p1, pair<int, int> &p2) {
        if (p1.first != p2.first) {
            return p1.first > p2.first;
        } else {
            return p1.second <= p2.second;
        }
    }
};


#endif //LEETCODE_SOLUTION_H
