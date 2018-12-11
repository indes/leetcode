//
// Created by Li on 2018/12/11.
//

#include "Solution.h"

void Solution::connect(TreeLinkNode *root) {
    if(root==nullptr)
        return;
//    int height = 0;
//    TreeLinkNode *node = root;
    queue<pair<TreeLinkNode *, int>> q;
    q.push(pair<TreeLinkNode *, int>(root, 0));
    while (!q.empty()) {
        TreeLinkNode *n = q.front().first;
        int height = q.front().second;
        q.pop();
        if (!q.empty() and height == q.front().second) {
            n->next = q.front().first;

        } else {
            n->next = nullptr;
        }


        if (n->left) q.push(pair<TreeLinkNode *, int>(n->left, height + 1));
        if (n->right) q.push(pair<TreeLinkNode *, int>(n->right, height + 1));

    }

}
