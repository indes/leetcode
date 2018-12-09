//
// Created by Li on 2018/12/9.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <math.h>
#include <queue>
#include "../TreeNode.h"
#include <climits>
using namespace std;

class Solution {
public:
    bool isBalanced(TreeNode *root);

private:
    int getHeight(TreeNode *root);
};


#endif //LEETCODE_SOLUTION_H
