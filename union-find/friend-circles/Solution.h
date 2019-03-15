//
// Created by Li on 2019/3/15.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>> &M) {
        if (M.empty()) return 0;
        if (M.size() == 1) return 1;
        parent = vector<int>(M.size(), -1);
        for (int i = 0; i < M.size(); ++i) {
            for (int j = 0; j < M.size(); ++j) {
                if (i != j and M[i][j] == 1 and !in_a_set(i, j)) {
                    union_set(i, j);
                }
            }
        }
        int ans = 0;
        for (auto i:parent) {
            if (i == -1) ans++;
        }
        return ans;
    }

private:
    vector<int> parent;

    int get_root(int a) {
        while (parent[a] != -1) {
            a = parent[a];
        }
        return a;
    }

    void union_set(int a, int b) {
        parent[get_root(a)] = get_root(b);
    }

    bool in_a_set(int a, int b) {
        return get_root(a) == get_root(b);
    }
};

#endif //LEETCODE_SOLUTION_H
