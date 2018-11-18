//
// Created by Li on 2018/11/18.
//

#include "Solution2.h"

ListNode *Solution2::deleteDuplicates(ListNode *head) {
    if (head != nullptr) {
        return nullptr;
    }
    if (head->next != null) {
        if (head->val == head->next->val) return nullptr;

        ListNode *p1 = head, *p2 = head->next;

        while (p2!= nullptr and p2->next!= nullptr){
            

        }


    }


    return head;
}
