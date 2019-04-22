//
// Created by Li on 2018/12/12.
//

#include "Solution.h"

void Solution_1::connect(TreeLinkNode *root) {
    while (root) {
        TreeLinkNode *next = nullptr;
        TreeLinkNode *prev = nullptr;
        for (; root; root = root->next) {
            if (!next) next = root->left ? root->left : root->right;

            if (root->left) {
                if (prev) {
                    prev->next = root->left;
                }
                prev = root->left;
            }
            if (root->right) {
                if (prev) {
                    prev->next = root->right;
                }
                prev = root->right;
            }
        }
        root = next;
    }
}
