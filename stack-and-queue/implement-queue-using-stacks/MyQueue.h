//
// Created by Li on 2018/12/19.
//

#ifndef LEETCODE_MYQUEUE_H
#define LEETCODE_MYQUEUE_H

#include <stack>

using std::stack;

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue();

    /** Push element x to the back of queue. */
    void push(int x);

    /** Removes the element from in front of queue and returns that element. */
    int pop();

    /** Get the front element. */
    int peek();

    /** Returns whether the queue is empty. */
    bool empty();

private:
    stack<int> *s1, *s2;
};


#endif //LEETCODE_MYQUEUE_H
