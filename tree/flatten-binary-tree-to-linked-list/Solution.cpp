//
// Created by Li on 2018/12/19.
//

#include "Solution.h"

void Solution::flatten(TreeNode *root) {
    if (root == nullptr) return;

    TreeNode *n1 = root;
    while (n1) {
        if (n1->left) {
            TreeNode *temp = n1->right;
            TreeNode *n2 = n1->left;
            while (n2->right) {
                n2 = n2->right;
            }

            n1->right = n1->left;
            n1->left = nullptr;
            n2->right = temp;

        }
        n1 = n1->right;
    }
}
