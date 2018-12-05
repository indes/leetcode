//
// Created by Li on 2018/12/5.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string findLongestWord(string s, vector<string> &d);

private:
    bool isVaild(string s1, string s2);
};


#endif //LEETCODE_SOLUTION_H
