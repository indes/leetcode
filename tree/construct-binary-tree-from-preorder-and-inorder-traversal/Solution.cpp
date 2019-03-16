//
// Created by Li on 2019/3/9.
//

#include "Solution.h"

TreeNode *Solution::buildTree(vector<int> &preorder, vector<int> &inorder) {
    if (preorder.empty()) {
        return nullptr;
    }

    for (int i = 0; i < inorder.size(); ++i) {
        m[inorder[i]] = i;
    }
    return buildTree(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);

}

TreeNode *Solution::buildTree(vector<int> &preorder, vector<int> &inorder, int pb, int pe, int ib, int ie) {
    if (pb > pe || ib > ie) {
        return nullptr;
    }
    auto *node = new(TreeNode);
    node->val = preorder[pb];
    int mid = m[preorder[pb]];
    int num = mid - ib;
    node->left = buildTree(preorder, inorder, pb + 1, pb + num, ib, mid - 1);
    node->right = buildTree(preorder, inorder, pb + num + 1, pe, mid + 1, ie);
    return node;
}
