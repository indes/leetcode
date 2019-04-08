//
// Created by Li on 2018/11/17.
//

#ifndef LEETCODE_LISTNODE_H
#define LEETCODE_LISTNODE_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int val, ListNode *next) : val(val), next(next) {};

    explicit ListNode(int val) : val(val), next(nullptr) {}
};

#endif //LEETCODE_LISTNODE_H
