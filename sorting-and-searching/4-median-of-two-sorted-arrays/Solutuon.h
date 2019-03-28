//
// Created by Li on 2019/3/26.
//

#ifndef LEETCODE_SOLUTUON_H
#define LEETCODE_SOLUTUON_H

#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        if (nums1.empty()) {
            if (nums2.size() % 2 == 0) {
                return (nums2[nums2.size() / 2] + nums2[(nums2.size() / 2) - 1]) / 2.0;
            } else {
                return nums2[nums2.size() / 2];
            }
        }
        if (nums2.empty()) {
            if (nums1.size() % 2 == 0) {
                return (nums1[nums1.size() / 2] + nums1[(nums1.size() / 2) - 1]) / 2.0;
            } else {
                return nums1[nums1.size() / 2];
            }
        }
        int size1 = nums1.size(), size2 = nums2.size();
        if (size1 > size2)
            return findMedianSortedArrays(nums2, nums1);

        int L1, L2, R1, R2, c1, c2, low = 0, high = 2 * size1;  //我们目前是虚拟加了'#'所以数组1是2*n+1长度
        while (low <= high) {
            c1 = (high + low) / 2;
            c2 = size1 + size2 - c1;
            L1 = c1 == 0 ? INT_MIN : nums1[(c1 - 1) / 2];
            R1 = c1 == (2 * size1) ? INT_MAX : nums1[c1 / 2];
            L2 = c2 == 0 ? INT_MIN : nums2[(c2 - 1) / 2];
            R2 = c2 == (size2 * 2) ? INT_MAX : nums2[c2 / 2];

            if (L1 > R2) {
                high = c1 - 1;
            } else if (L2 > R1) {
                low = c1 + 1;
            } else {
                return (max(L1, L2) + min(R1, R2)) / 2.0;
            }
        }
        return -1;
    }
};

#endif //LEETCODE_SOLUTUON_H
