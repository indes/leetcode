//
// Created by Li on 2019/3/14.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        map<int, int> m;
        priority_queue<pair<int, int>> q;
        vector<int> res;
        for (auto n:nums) {
            ++(m[n]);
        }
        for (auto it : m) q.push({it.second, it.first});
        for (int i = 0; i < k; ++i) {
            res.push_back(q.top().second);
            q.pop();
        }
        return res;

    }
};


#endif //LEETCODE_SOLUTION_H
