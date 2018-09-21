//
// Created by Li on 2018/9/18.
//

#ifndef LEETCODE_ROTATE_H
#define LEETCODE_ROTATE_H

#include <list>

using std::list;

class Rotate {
public:
    void rotate(list<int> &nums, int k) {
        for (int i = 0; i < k; ++i) {
            nums.insert(nums.begin(), *(--nums.end()));
            nums.erase(--nums.end());
        }
    }

};


#endif //LEETCODE_ROTATE_H
