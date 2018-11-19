//
// Created by Li on 2018/11/18.
//

#include "Solution2.h"

ListNode *Solution2::deleteDuplicates(ListNode *head) {
    if (head == nullptr) {
        return nullptr;
    }

    ListNode n1{0, head};

    ListNode *p1 = &n1, *p2 = n1.next;

    while (p2 != nullptr and p2->next != nullptr) {
        if (p2->val == p2->next->val) {
            while (p2->next!= nullptr and p2->val == p2->next->val) {
                p2 = p2->next;
            }
            p1->next = p2->next;
            p2 = p1->next;
        } else {
            p2 = p2->next;
            p1 = p1->next;
        }
    }

    return n1.next;
}
