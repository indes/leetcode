//
// Created by Li on 2018/9/21.
//

#ifndef LEETCODE_INTERSECT_H
#define LEETCODE_INTERSECT_H

#include <vector>
#include <map>
#include <iostream>

using std::vector;

class Intersect {
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        if (nums1.empty() or nums2.empty()) return {};

        std::map<int, int> m1, m2;
        for (vector<int>::iterator iter = nums1.begin(); iter != nums1.end(); ++iter) {
            m1[*iter]++;
        }
        for (vector<int>::iterator iter = nums2.begin(); iter != nums2.end(); ++iter) {
            m2[*iter]++;
        }
        std::map<int, int> &m3 = m1.size() < m2.size() ? m1 : m2, &m4 = m1.size() >= m2.size() ? m1 : m2;
        vector<int> comm;
        for (std::map<int, int>::iterator iter = m3.begin(); iter != m3.end(); ++iter) {
            std::map<int, int>::key_type k = iter->first;
            if (m4.count(k)) {
                int count = iter->second >= m4[k] ? m4[k] : iter->second;
                for (int i = 0; i < count; ++i) {
                    comm.push_back(k);
                }
            }
        }
        return comm;
    }
};


#endif //LEETCODE_INTERSECT_H
