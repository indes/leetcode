//
// Created by Li on 2018/12/8.
//

#include "Solution.h"

bool Solution::isSymmetric(TreeNode *root) {
    if (root == nullptr) return true;
    queue<TreeNode *> q1, q2;
    q1.push(root->left);
    q2.push(root->right);
    TreeNode *n1, *n2;
    while (!q1.empty() and !q2.empty()) {
        n1 = q1.front();
        q1.pop();
        n2 = q2.front();
        q2.pop();

        if (n1->val == n2->val) {
            if (n1->left != nullptr) q1.push(n1->left);
            if (n1->right != nullptr) q1.push(n1->right);
            if (n2->right != nullptr) q2.push(n2->right);
            if (n2->left != nullptr) q2.push(n2->left);
        } else {
            return false;
        }
    }
    return !(q1.empty() ^ q2.empty());

}
