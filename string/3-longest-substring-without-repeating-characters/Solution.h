//
// Created by Li on 2019/5/1.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        int len = 0;
        map<char, int> m;

        for (int i = 0; i < s.size(); ++i) {

            if (m.find(s[i]) != m.end()) {
                if (i - m[s[i]] <= len) {
                    len = i - m[s[i]];
                } else {
                    len++;
                }
//                len = min(i - m[s[i]], len);
            } else {
                len++;
            }
            m[s[i]] = i;
            max_length = max(max_length, len);
        }
        return max_length;
    }
};


#endif //LEETCODE_SOLUTION_H
