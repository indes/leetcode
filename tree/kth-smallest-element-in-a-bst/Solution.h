//
// Created by Li on 2019/3/18.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../TreeNode.h"
#include <stack>

using namespace std;

class Solution {
public:
    int kthSmallest(TreeNode *root, int k) {
        if (root == nullptr or k <= 0) {
            return -1;
        }
        auto n1 = root;
        stack<TreeNode *> s;

        while (n1 or !s.empty()) {
            while (n1 != nullptr) {
                s.push(n1);
                n1 = n1->left;
            }
            n1 = s.top();
            s.pop();

            if (--k == 0) {
                return n1->val;
            }
            n1 = n1->right;
        }
        return -1;
    }
};


#endif //LEETCODE_SOLUTION_H
