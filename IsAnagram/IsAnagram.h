//
// Created by Li on 2018/9/26.
//

#ifndef LEETCODE_ISANAGRAM_H
#define LEETCODE_ISANAGRAM_H

#include <string>
#include <map>

using std::string;
using std::map;

class IsAnagram {
public:
    bool isAnagram(string s, string t) {
        map<char, int> map1, map2;
        for (string::iterator i = s.begin(); i != s.end(); ++i) {
            map1[*i]++;
        }
        for (string::iterator i = t.begin(); i != t.end(); ++i) {
            map2[*i]++;
        }

        return map1 == map2;
    }
};


#endif //LEETCODE_ISANAGRAM_H
