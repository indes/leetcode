//
// Created by Li on 2018/12/19.
//

#ifndef LEETCODE_MYSTACK_H
#define LEETCODE_MYSTACK_H

#include <queue>

using std::queue;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack();

    /** Push element x onto stack. */
    void push(int x);

    /** Removes the element on top of the stack and returns that element. */
    int pop();

    /** Get the top element. */
    int top();

    /** Returns whether the stack is empty. */
    bool empty();

private:
    queue<int> q1, q2;
};


#endif //LEETCODE_MYSTACK_H
