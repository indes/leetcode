//
// Created by Li on 2019/3/12.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using std::vector;
using std::string;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n <= 0) {
            return ans;
        }
        this->n = n;
        parenthesis_pair = vector<int>(2, n);
        string curr;
        ParenthesisDfs(curr, 0, 0);
        return ans;
    }

private:
    vector<string> ans;
    vector<int> parenthesis_pair;
    int n;

    void ParenthesisDfs(string &curr, int level, int sum) {
        if (sum < 0) {
            return;
        }
        if (level == n * 2) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < 2; ++i) {
            if (parenthesis_pair[i] > 0) {
                parenthesis_pair[i]--;
                char c = i == 0 ? '(' : ')';
                int plus_int = (i == 0) ? 1 : -1;
                sum += plus_int;
                curr.push_back(c);
                ParenthesisDfs(curr, level + 1, sum);
                curr.pop_back();
                sum -= plus_int;

                parenthesis_pair[i]++;
            }
        }
    }
};


#endif //LEETCODE_SOLUTION_H
