//
// Created by Li on 2018/11/20.
//

#include "Solution.h"

ListNode *Solution::reverseList(ListNode *head) {
    if (head == nullptr)
        return head;
    ListNode front({0, head});
    ListNode *p1 = &front;
    ListNode *p2 = p1->next;
    ListNode *p3 = p2->next;
    while (p3 != nullptr) {
        p3 = p2->next;
        if (p3 == nullptr) {
            return front.next;
        }
        p2->next = p3->next;
        p3->next = p1->next;
        p1->next = p3;

    }

    return front.next;
}
