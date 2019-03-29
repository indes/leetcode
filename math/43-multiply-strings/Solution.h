//
// Created by Li on 2019/3/25.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string multiply(const string &num1, const string &num2) {
        if (num1 == "0" or num2 == "0") return "0";
        int index_length = num1.size() + num2.size() + 2;
        vector<int> index(index_length, 0);
        for (int i = num2.size() - 1; i >= 0; --i) {
            for (int j = num1.size() - 1; j >= 0; --j) {
                int mult = (num1[j] - '0') * (num2[i] - '0');

                index[(i + j + 3)] += mult % 10;
                if (index[(i + j + 3)] > 9) {
                    index[(i + j + 2)] += index[(i + j + 3)] / 10;
                    index[(i + j + 3)] %= 10;
                }
                index[(i + j + 2)] += mult / 10;
            }
        }
        bool remove_zero = true;
        string ans;
        for (int j = 0; j < num1.size() + num2.size() + 2; ++j) {
            if (remove_zero and index[j] == 0) {
                continue;
            }
            if (index[j] != 0) {
                remove_zero = false;
            }
            ans.push_back(char('0' + index[j]));
        }
        return ans;
    }
};

#endif //LEETCODE_SOLUTION_H
