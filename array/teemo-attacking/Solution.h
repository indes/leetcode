//
// Created by Li on 2019/3/19.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration) {
        if(timeSeries.empty())
            return 0;
        int count = 0;
        for (int i = 1; i < timeSeries.size(); ++i) {
            count += ((timeSeries[i] - timeSeries[i - 1]) > duration) ? duration : (timeSeries[i] - timeSeries[i - 1]);
        }
        return count + duration;
    }
};


#endif //LEETCODE_SOLUTION_H
