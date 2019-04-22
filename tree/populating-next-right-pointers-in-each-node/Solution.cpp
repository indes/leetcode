//
// Created by Li on 2018/12/11.
//

#include "Solution.h"

void Solution::connect(TreeLinkNode *root) {
    if (root == nullptr)
        return;

    TreeLinkNode *first = root;

    while (first) {
        if (first->left) {
            first->left->next = first->right;
        }
        TreeLinkNode *second = first, *third = second->next;

        while (third) {
            if (third->left) {
                third->left->next = third->right;
            }
            if (second->right) {
                second->right->next = third->left;
            }
            second = second->next;
            third = second->next;
        }
        if (second->right) second->right->next = nullptr;

        first = first->left;
    }

}
