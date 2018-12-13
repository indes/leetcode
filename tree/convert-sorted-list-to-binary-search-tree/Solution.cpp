//
// Created by Li on 2018/12/13.
//

#include "Solution.h"

TreeNode *Solution::sortedListToBST(ListNode *head) {
    if (head == nullptr) return nullptr;


    return getTree(head, nullptr);
}

TreeNode *Solution::getTree(ListNode *head, ListNode *tail) {
    if (head == tail) return nullptr;
    ListNode *fast = head, *slow = head;
    while (fast != tail and fast->next != tail) {
        fast = fast->next->next;
        slow = slow->next;
    }
    auto *n = new TreeNode();
    n->val = slow->val;
    n->left = getTree(head, slow);
    n->right = getTree(slow->next, tail);

    return n;
}
