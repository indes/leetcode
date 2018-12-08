//
// Created by Li on 2018/12/8.
//


#include "Solution.h"

bool Solution::isSameTree(TreeNode *p, TreeNode *q) {
    if (p == nullptr ^ q == nullptr) return false;
    if (p == nullptr) return true;
    if (p->val == q->val) {

        if (p->left == nullptr ^ q->left == nullptr) {
            return false;
        } else {
            if (p->left != nullptr) {
                if (!isSameTree(p->left, q->left)) return false;

            }
        }
        if (p->right == nullptr ^ q->right == nullptr) {
            return false;
        } else {
            if (p->right != nullptr) {
                if (!isSameTree(p->right, q->right)) return false;
            }
        }
    } else {
        return false;
    }
    return true;
}
