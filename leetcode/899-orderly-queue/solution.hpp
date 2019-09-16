//
// Created by li on 2019/9/16.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string orderlyQueue(string S, int K) {
        string min_str = S;
        if (K == 1) {
            for (int i = 0; i < S.size(); ++i) {
                auto c = S[0];
                S.erase(0, 1);
                S.push_back(c);
                min_str = min(min_str, S);
            }
            return min_str;
        } else {
            sort(S.begin(), S.end());
            return S;
        }
    }
};

#endif //LEETCODE_SOLUTION_HPP
