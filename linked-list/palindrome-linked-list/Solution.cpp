//
// Created by Li on 2018/11/24.
//

#include "Solution.h"

bool Solution::isPalindrome(ListNode *head) {
    if (!head or head->next == nullptr) return true;

    ListNode *p1 = head, *p2 = head;

    while (p2->next and p2->next->next) {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    ListNode *last = p1->next, *p3;

    while (last->next) {
        //翻转后半部分
        p3 = last->next;
        last->next = p3->next;
        p3->next = p1->next;
        p1->next = p3;
    }

    ListNode *pre = head;
    while (p1->next) {
        p1 = p1->next;
        if (p1->val != pre->val) return false;
        pre = pre->next;
    }


    return true;
}
