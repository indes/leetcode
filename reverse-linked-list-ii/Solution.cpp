//
// Created by Li on 2018/11/22.
//

#include "Solution.h"

ListNode *Solution::reverseBetween(ListNode *head, int m, int n) {

    if (head == nullptr) return head;
    ListNode front = {0, head};
    ListNode *p1 = &front;
    for (int i = 1; i < m; ++i) {
        p1 = p1->next;
    }

    ListNode *p2 = p1->next;
    ListNode *p3;
    for (int j = m; j < n; ++j) {
        p3 = p2->next;

        p2->next = p3->next;
        p3->next = p1->next;
        p1->next = p3;
    }
    return front.next;
}
