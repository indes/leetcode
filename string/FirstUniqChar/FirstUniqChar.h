//
// Created by Li on 2018/9/25.
//

#ifndef LEETCODE_FIRSTUNIQCHAR_H
#define LEETCODE_FIRSTUNIQCHAR_H

#include <string>
#include <map>

using std::string;
using std::map;

class FirstUniqChar {
public:
    int firstUniqChar(string s) {


        map<char, int> char_map;
        for (string::iterator iter1 = s.begin(); iter1 != s.end(); ++iter1) {
            char_map[*iter1]++;
        }
        for (string::iterator iter1 = s.begin(); iter1 != s.end(); ++iter1) {
            if (char_map[*iter1] == 1) return iter1 - s.begin();
        }
        return -1;
    }
};


#endif //LEETCODE_FIRSTUNIQCHAR_H
