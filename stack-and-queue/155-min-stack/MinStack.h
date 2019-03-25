//
// Created by Li on 2019/3/25.
//

#ifndef LEETCODE_MINSTACK_H
#define LEETCODE_MINSTACK_H

#include <deque>

using namespace std;

class MinStack {
public:
    MinStack() {
    }

    void push(int x) {
        stack.push_back(x);
        if (min_stack.empty() or x <= min_stack.back()) min_stack.push_back(x);
    }

    void pop() {
        int x = stack.back();
        stack.pop_back();
        if (x == min_stack.back()) min_stack.pop_back();
    }

    int top() {
        return stack.back();
    }

    int getMin() {
        return min_stack.back();
    }

private:
    deque<int> stack;
    deque<int> min_stack;
};

#endif //LEETCODE_MINSTACK_H
