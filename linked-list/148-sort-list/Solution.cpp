//
// Created by Li on 2018/11/23.
//

#include "Solution.h"

ListNode *Solution::sortList(ListNode *head) {
    if (head == nullptr or head->next == nullptr) return head;
    ListNode dummy{-1, head};
    ListNode *fast_p = &dummy, *slow_p = &dummy;
    while (fast_p and fast_p->next) {
        fast_p = fast_p->next->next;
        slow_p = slow_p->next;
    }

    ListNode *l1 = sortList(slow_p->next);
    slow_p->next = nullptr;
    ListNode *l2 = sortList(dummy.next);
    return mergeList(l1, l2);
}

ListNode *Solution::mergeList(ListNode *head1, ListNode *head2) {
    ListNode dummy(-1);
    ListNode *p = &dummy;
    while (head1 and head2) {
        if (head1->val <= head2->val) {
            p->next = head1;
            p = p->next;
            head1 = head1->next;
        } else {
            p->next = head2;
            p = p->next;
            head2 = head2->next;
        }
    }
    if (head1) {
        p->next = head1;
    } else {
        p->next = head2;
    }
    return dummy.next;
}
