//
// Created by Li on 2018/12/10.
//

#include "Solution.h"

vector<int> Solution::preorderTraversal(TreeNode *root) {
    if (root== nullptr) return vector<int>();
    stack<TreeNode *> s;
    vector<int> v;
    s.push(root);
    while (!s.empty()) {
        TreeNode *n = s.top();
        s.pop();
        v.push_back(n->val);
        if (n->right != nullptr) s.push(n->right);
        if (n->left != nullptr) s.push(n->left);
    }

    return v;
}
