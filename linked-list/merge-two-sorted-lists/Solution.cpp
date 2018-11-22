//
// Created by Li on 2018/11/19.
//

#include "Solution.h"

ListNode *Solution::mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    ListNode n1{0, nullptr};
    ListNode *p = &n1;
    while (l1 and l2) {

        if (l1->val < l2->val) {
            p->next = l1;
            l1 = l1->next;
            p = p->next;
        } else {
            p->next = l2;
            l2 = l2->next;
            p = p->next;
        }
    }

    if (l1) {
        p->next = l1;
    } else if (l2) {
        p->next = l2;
    }
    return n1.next;
}
