//
// Created by Li on 2018/12/19.
//

#include "MyStack.h"



void MyStack::push(int x) {
    queue<int> *main_queue = q1.empty() ? &q2 : &q1;
    main_queue->push(x);
}

int MyStack::pop() {
    queue<int> *main_queue, *sub_queue;

    if (q1.empty()) {
        main_queue = &q2;
        sub_queue = &q1;
    } else {
        main_queue = &q1;
        sub_queue = &q2;
    }

    while (!main_queue->empty()) {
        if (main_queue->size() == 1) {
            int a = main_queue->front();
            main_queue->pop();
            return a;
        } else {
            sub_queue->push(main_queue->front());
            main_queue->pop();
        }
    }
    return 0;
}

int MyStack::top() {
    queue<int> *main_queue, *sub_queue;

    if (q1.empty()) {
        main_queue = &q2;
        sub_queue = &q1;
    } else {
        main_queue = &q1;
        sub_queue = &q2;
    }

    while (!main_queue->empty()) {
        if (main_queue->size() == 1) {
            int a = main_queue->front();
            main_queue->pop();
            sub_queue->push(a);
            return a;
        } else {
            sub_queue->push(main_queue->front());
            main_queue->pop();
        }
    }
    return 0;
}

bool MyStack::empty() {
    return q1.empty() and q2.empty();
}

MyStack::MyStack() {

}
