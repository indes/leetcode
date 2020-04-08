//
// Created by Li on 2018/12/7.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <queue>
#include "../TreeNode.h"
#include <deque>

using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode *root);

    vector<vector<int>> levelOrder2(TreeNode *root); // 不使用额外位记录层级

};


#endif //LEETCODE_SOLUTION_H
