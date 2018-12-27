//
// Created by Li on 2018/12/27.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <string>
#include <iostream>

using std::string;

using std::cout;

class Solution {
public:
    void Permutation(string str);

private:
    void Permutation(string *str, string::size_type nums);
};


#endif //LEETCODE_SOLUTION_H
