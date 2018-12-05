//
// Created by Li on 2018/12/5.
//

#include "Solution.h"

string Solution::findLongestWord(string s, vector<string> &d) {
    string longest_string = "";
    for (string string1:d) {
        int size1 = longest_string.size(), size2 = string1.size();
        if (size2 < size1 or (size1 == size2 and string1 > longest_string)) {
            continue;
        } else {
            if (isVaild(s, string1)) {
                longest_string = string1;
            }
        }
    }

    return longest_string;
}

bool Solution::isVaild(string s1, string s2) {
    string::iterator p1 = s1.begin(), p2 = s2.begin();
    while (p1 < s1.end() and p2 < s2.end()) {
        if (*p1 == *p2) {
            ++p1;
            ++p2;
        } else {
            ++p1;
        }
    }


    return p2 == s2.end();
}
