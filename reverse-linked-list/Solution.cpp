//
// Created by Li on 2018/11/20.
//

#include "Solution.h"

ListNode *Solution::reverseList(ListNode *head) {
    if (!head) return nullptr;

    ListNode *p1 = head, *p2 = head;
    while (p1->next != nullptr) p1 = p1->next;
    ListNode *p3 = p1;
    while (p2 != p3) {
        p1->next = p2;
        p2 = p2->next;
        p1 = p1->next;
    }
    p1->next = nullptr;

    return p3;

}
