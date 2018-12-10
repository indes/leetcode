//
// Created by Li on 2018/12/10.
//

#include "Solution.h"

vector<int> Solution::inorderTraversal(TreeNode *root) {
    if (root == nullptr) return vector<int>();
    stack<TreeNode *> s;
    vector<int> v;
//    s.push(root);

    TreeNode *p = root;
    while (p or !s.empty()) {
        while (p) {
            s.push(p);
            p = p->left;
        }
        if (!s.empty()) {
            p = s.top();
            v.push_back(p->val);
            s.pop();
            p = p->right;
        }
    }
    return v;
}
