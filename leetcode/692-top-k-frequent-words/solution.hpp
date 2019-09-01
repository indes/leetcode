//
// Created by li on 2019/9/1.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <queue>
#include <map>
#include <string>
#include <vector>

using namespace std;

struct Node {
    int times;
    string value;
};

struct cmp {
    bool operator()(Node &n1, Node &n2) {
        if (n1.times == n2.times) {
            return n1.value > n2.value;
        } else {
            return n1.times < n2.times;
        }
    }
};

class Solution {
public:
    vector<string> topKFrequent(const vector<string> &words, int k) {
        map<string, int> m;

        for (auto &s:words) {
            m[s]++;
        }
        priority_queue<Node, vector<Node>, cmp> pq;

        for (auto &item:m) {
            pq.push({item.second, item.first});
        }

        vector<string> ans;


        for (int i = 0; i < k; ++i) {
            ans.push_back(pq.top().value);
            pq.pop();
        }
        return ans;
    }
};

#endif //LEETCODE_SOLUTION_HPP
