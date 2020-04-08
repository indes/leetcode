//
// Created by Li on 2019/3/9.
//

#include "Solution.h"

ListNode *Solution::oddEvenListOld(ListNode *head) {
    if (head == nullptr or head->next == nullptr or head->next->next == nullptr) return head;

    ListNode *odd_node = head;
    ListNode *even_head = head->next;
    ListNode *even_node = even_head;
    ListNode *p = even_node;

    int index = 2;
    while (p->next != nullptr) {
        p = p->next;
        index++;
        if (index % 2 == 1) {
            odd_node->next = p;
            odd_node = odd_node->next;
        } else {
            even_node->next = p;
            even_node = even_node->next;
        }
    }
    odd_node->next = nullptr;
    even_node->next = nullptr;
    odd_node->next = even_head;

    return head;
}


ListNode *Solution::oddEvenList(ListNode *head) {

    if (
            head == nullptr
            or head->next == nullptr
            or head->next->next == nullptr
            )
        return head;
    ListNode *n1 = head;
    ListNode *n2 = head->next;
    while (n2 != nullptr && n2->next != nullptr) {
        insertNextNodes(n1, n2);
        n1 = n1->next;
        n2 = n2->next;
    }

    return head;
}

void Solution::swapNodes(ListNode *node1, ListNode *node2) {
    ListNode *p = node1->next->next;
    node1->next->next = node2->next->next;
    node2->next->next = p;
    p = node1->next;
    node1->next = node2->next;
    node2->next = p;
}


void Solution::insertNextNodes(ListNode *n1, ListNode *n2) {
    ListNode *insertNode = n2->next;
    n2->next = n2->next->next;
    insertNode->next = n1->next;
    n1->next = insertNode;

}
