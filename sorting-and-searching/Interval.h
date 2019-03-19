//
// Created by Li on 2019/3/19.
//

#ifndef LEETCODE_INTERVAL_H
#define LEETCODE_INTERVAL_H
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};
#endif //LEETCODE_INTERVAL_H
