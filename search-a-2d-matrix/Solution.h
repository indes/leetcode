//
// Created by Li on 2018/11/15.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target);


private:
    bool find_element(vector<int> v, int target);
};


#endif //LEETCODE_SOLUTION_H
