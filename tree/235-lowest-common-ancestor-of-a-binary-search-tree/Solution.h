//
// Created by Li on 2019/3/25.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../TreeNode.h"

class Solution {
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (!root) return nullptr;
        int big_val = p->val >= q->val ? p->val : q->val;
        int lit_val = p->val < q->val ? p->val : q->val;

        while (root and (big_val < root->val or lit_val > root->val)) {
            if (big_val < root->val) {
                root = root->left;
            } else if (lit_val > root->val) {
                root = root->right;
            }
        }
        return root;
    }
};

#endif //LEETCODE_SOLUTION_H
