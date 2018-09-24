//
// Created by Li on 2018/9/21.
//

#ifndef LEETCODE_INTERSECT_H
#define LEETCODE_INTERSECT_H

#include <vector>

using std::vector;

class Intersect {
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        if (nums1.empty() or nums2.empty()) return {};
        vector<int> com;

        for (auto iter1 = nums1.begin(); iter1 != nums1.end(); ++iter1) {
            for (auto iter2 = nums2.begin(); iter2 != nums2.end(); ++iter2) {
                if (*iter1 == *iter2) {
                    com.push_back(*iter1);
                    break;
                }
            }
        }
        return com;

    }
};


#endif //LEETCODE_INTERSECT_H
