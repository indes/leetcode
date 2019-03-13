//
// Created by Li on 2019/3/13.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int> &g, vector<int> &s) {
        int ans = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        vector<bool> v(g.size(), false);
        for (int i : s) {
            for (int j = 0; j < g.size(); ++j) {
                if (i >= g[j] and !v[j]) {
                    ans++;
                    v[j] = true;
                    break;
                }
            }
        }
        return ans;
    }
};

#endif //LEETCODE_SOLUTION_H
