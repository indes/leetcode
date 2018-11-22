//
// Created by Li on 2018/11/22.
//

#include "Solution.h"

ListNode *Solution::reverseKGroup(ListNode *head, int k) {
    if (head == nullptr or k == 0 or k == 1) return head;
    ListNode front({0, head});
    ListNode *p1 = &front, *p2 = p1->next;

    int count = 0;
    while (p2 != nullptr) {
        count++;

        if (count == k) {
            count = 0;
            p1 = reverse(p1, p2);

            p2 = p1->next;
        } else {
            p2 = p2->next;
        }

    }


    return front.next;
}

ListNode *Solution::reverse(ListNode *head, ListNode *tail) {
    ListNode *p1 = head, *p2 = p1->next, *p3 = p2->next;

    while (p3 != nullptr) {
        p3 = p2->next;
        if (p3 == tail) {
            p2->next = p3->next;
            p3->next = p1->next;
            p1->next = p3;
            return p2;
        }

        p2->next = p3->next;
        p3->next = p1->next;
        p1->next = p3;
    }

    return p2;
}
