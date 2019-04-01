//
// Created by Li on 2019/4/1.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        if (s.empty() or (s.size() == 1 and s[0] == '0'))
            return 0;

        if (s.size() == 1)
            return 1;


        vector<int> v(s.size() + 1, 0);
        v[0] = 1;
        v[1] = s[0] == '0' ? 0 : 1;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == '0') {
                v[i+1] = 0;
            } else {
                v[i+1] = v[i];
            }

            int sum = (s[i - 1] - '0') * 10 + (s[i] - '0');
            if (sum <= 26 and s[i - 1] != '0') {
                v[i+1] += v[i - 1];
            }
        }
        return v.back();
    }
};

#endif //LEETCODE_SOLUTION_H
