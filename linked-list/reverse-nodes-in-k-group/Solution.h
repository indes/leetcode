//
// Created by Li on 2018/11/22.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../ListNode.h"

class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k);

private:
    ListNode *reverse(ListNode *head, ListNode *tail);
};


#endif //LEETCODE_SOLUTION_H
