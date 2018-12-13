//
// Created by Li on 2018/12/13.
//

#include "Solution.h"

TreeNode *Solution::sortedListToBST(ListNode *head) {
    if (head == nullptr) return nullptr;
    TreeNode *n = new TreeNode({0, nullptr, nullptr});
    ListNode *slow = head, *fast = head, *prev = head;
    while (fast->next and fast->next->next) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    n->val = slow->val;
    prev->next = nullptr;
    if (head->next == nullptr) {
        n->left = new TreeNode({head->val, nullptr, nullptr});
    } else {
        n->left = sortedListToBST(head);

    }
    if (slow->next == nullptr) {
        n->right = nullptr;
    } else if (slow->next->next == nullptr) {
        n->right = new TreeNode({slow->next->val, nullptr, nullptr});

    } else {
        n->right = sortedListToBST(slow->next);
    }

    slow->next = nullptr;

    return n;
}

TreeNode *Solution::getTree(ListNode *head, ListNode *tail) {

    return nullptr;
}
