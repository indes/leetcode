//
// Created by Li on 2018/12/19.
//

#include "MyQueue.h"

MyQueue::MyQueue() {
    s1 = new stack<int>;
    s2 = new stack<int>;
}

void MyQueue::push(int x) {
    s2->push(x);
}

int MyQueue::pop() {
    if (s1->empty()) {
        while (!s2->empty()) {
            s1->push(s2->top());
            s2->pop();
        }
    }

    int num = s1->top();
    s1->pop();
    return num;
}

int MyQueue::peek() {
    if (s1->empty()) {
        while (!s2->empty()) {
            s1->push(s2->top());
            s2->pop();
        }
    }

    int num = s1->top();
    return num;
}

bool MyQueue::empty() {
    return s1->empty() and s2->empty();
}
