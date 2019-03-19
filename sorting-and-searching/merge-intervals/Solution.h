//
// Created by Li on 2019/3/19.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include "../Interval.h"
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        if (intervals.empty())
            return vector<Interval>();
        vector<Interval> v = intervals;
        vector<Interval> ans;
        sort(v.begin(), v.end(), Interval_cmp);

        for (int i = 0; i < v.size() - 1; ++i) {
            if (v[i].end >= v[i + 1].start) {

                v[i].end = max(v[i].end, v[i + 1].end);
                v.erase(v.begin() + i + 1);

                --i;
            }
        }
        return v;
    }

private:
    static bool Interval_cmp(Interval i1, Interval i2) {
        return i1.start < i2.start;
    }
};

#endif //LEETCODE_SOLUTION_H
