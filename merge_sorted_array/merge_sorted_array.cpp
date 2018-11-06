//
// Created by Li on 2018/11/6.
//

#include "merge_sorted_array.h"

void merge_sorted_array::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    if (n == 0)
        return;
    if (m == 0) {
        nums1 = nums2;
        return;
    }

    int i = m - 1, j = n - 1;
    for (int k = n + m - 1; k >= 0; --k) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            if (--i < 0) {
                for (int l = j; l >= 0; --l) {
                    nums1[l] = nums2[l];
                }
            }
        } else {
            nums1[k] = nums2[j];
            if (--j < 0)break;
        }
    }
    int a = 123;
}
