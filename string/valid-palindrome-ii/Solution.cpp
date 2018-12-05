//
// Created by Li on 2018/12/5.
//

#include "Solution.h"

bool Solution::validPalindrome(string s) {
    if (s.empty() or s.size() == 1) return true;
    bool is_deletable = true;
    string::iterator p1 = s.begin(), p2 = s.end() - 1;

    while (p1 < p2) {
        if (*p1 == *p2) {
            ++p1;
            --p2;
        } else {
            return isPalindrome(p1 + 1, p2) or isPalindrome(p1, p2 - 1);
        }
    }

    return true;
}

bool Solution::isPalindrome(string::iterator p1, string::iterator p2) {
    while (p1 < p2) {
        if (*p1 == *p2) {
            ++p1;
            --p2;
        } else {
            return false;
        }
    }

    return true;
}
