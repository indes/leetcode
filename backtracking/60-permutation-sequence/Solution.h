//
// Created by Li on 2019/4/12.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        if (n == 1)
            return "1";
        int cn = 1;
        string rtn = "";
        vector<char> s(n);
        s[0] = '1';
        for (int i = 1; i < n; i++) {
            cn *= i;
            s[i] = '0' + i + 1;
        }
        for (int i = 0; i < n; i++) {
            int tmp = k / cn;
            if (k % cn == 0 && tmp > 0)
                tmp -= 1;
            rtn += s[tmp];
            s.erase(s.begin() + tmp);
            if (tmp > 0) {
                k -= tmp * cn;
            }
            if (i < n - 1)
                cn /= (n - i - 1);
        }

        return rtn;
    }

    string getPermutation_1(int n, int k) {
        // 回溯法 即使提前终止也会超时
        this->n = n;
        this->k = k;
        is_visited = vector<bool>(n, false);
        string curr;
        dfs(curr, 0);
        return this->ans.back();
    }

private:
    vector<string> ans;
    int n, k;
    vector<bool> is_visited;

    void dfs(string &curr, int curr_n) {
        if (curr_n == n) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < n && ans.size() < k; ++i) {
            if (!is_visited[i]) {
                is_visited[i] = true;
                curr.push_back('0' + i + 1);
                dfs(curr, curr_n + 1);
                curr.pop_back();
                is_visited[i] = false;
            }
        }

    }

};


#endif //LEETCODE_SOLUTION_H
