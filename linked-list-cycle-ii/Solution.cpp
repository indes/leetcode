//
// Created by Li on 2018/11/18.
//

#include "Solution.h"

ListNode *Solution::detectCycle(ListNode *head) {

    if (head == nullptr or head->next == nullptr) return nullptr;

    ListNode *p1 = head, *p2 = head;

    while (p2->next != nullptr and p2->next->next != nullptr) {
        p1 = p1->next;
        p2 = p2->next->next;
        if (p1 == p2) {
            ListNode *p3 = head;
            while (p3 != p1) {
                p1 = p1->next;
                p3 = p3->next;
            }
            return p3;
        }
    }

    return nullptr;
}
