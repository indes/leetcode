//
// Created by Li on 2018/12/5.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>

using namespace std;

class Solution {
public:
    bool validPalindrome(string s);

private:
    bool isPalindrome(string::iterator p1, string::iterator p2);


};


#endif //LEETCODE_SOLUTION_H
