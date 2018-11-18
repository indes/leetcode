//
// Created by Li on 2018/11/18.
//

#include "Solution.h"

ListNode *Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {

    if (headA == nullptr || headB == nullptr) return nullptr;
    ListNode *p1 = headA;
    while (p1->next != nullptr) p1 = p1->next;

    p1->next = headB;

    ListNode *p2 = headA, *p3 = headA;
    while (p2->next != nullptr and p2->next->next != nullptr) {
        // 判断是否有环
        p2 = p2->next->next;
        p3 = p3->next;
        if (p2 == p3) {
            // 有环
            ListNode *p4 = headA;
            while (p4 != p2) {
                p4 = p4->next;
                p2 = p2->next;
            }

            p1->next = nullptr;
            return p2;
        }
    }
    p1->next = nullptr;
    return nullptr;
}
