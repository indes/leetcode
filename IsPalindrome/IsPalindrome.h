//
// Created by Li on 2018/9/26.
//

#ifndef LEETCODE_ISPALINDROME_H
#define LEETCODE_ISPALINDROME_H

#include <string>
#include <iostream>
#include <cctype>
//using std::string;
using namespace std;

class IsPalindrome {
public:
    bool isPalindrome(string s) {
        if (s.empty() or s.size()==1) return true;
        for (string::iterator iter1 = s.begin(), iter2 = --s.end(); iter1 < iter2;) {
            while (iter1 < iter2 and !isalnum(*iter1)) ++iter1;
            while (iter1 < iter2 and !isalnum(*iter2)) --iter2;

            if (tolower(*iter1) == tolower(*iter2)) {
                ++iter1;
                --iter2;
                if (iter1 >= iter2) return true;
            } else {
                return false;
            }
        }
//        for (auto &i:s){
//            cout<<i-0<<endl;
//        }
    }
};


#endif //LEETCODE_ISPALINDROME_H
