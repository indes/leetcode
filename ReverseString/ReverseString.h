//
// Created by Li on 2018/9/24.
//

#ifndef LEETCODE_REVERSESTRING_H
#define LEETCODE_REVERSESTRING_H

#include <string>
#include <iostream>

using std::string;

class ReverseString {
public:
    string reverseString(string s) {
        char temp;
        for (string::iterator iter1 = s.begin(), iter2 = s.end() - 1; iter1 < iter2; ++iter1, --iter2) {
            temp = *iter1;
            s[iter1 - s.begin()] = *iter2;
            s[iter2 - s.begin()] = temp;
        }
        return s;
    }
};


#endif //LEETCODE_REVERSESTRING_H
