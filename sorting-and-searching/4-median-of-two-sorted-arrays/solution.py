from typing import List


class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        if (len(nums1) == 0):
            if (len(nums2) % 2 == 0):
                return (nums2[len(nums2) // 2] + nums2[len(nums2) // 2 - 1]) / 2.0
            else:
                return nums2[len(nums2) // 2]

        if (len(nums2) == 0):
            if (len(nums1) % 2 == 0):
                return (nums1[len(nums1) // 2] + nums1[len(nums1) // 2 - 1]) / 2.0
            else:
                return nums1[len(nums1) // 2]

        size1, size2 = len(nums1), len(nums2)
        if (size1 > size2):
            return self.findMedianSortedArrays(nums2, nums1)
        low, high = 0, 2 * size1
        while (low <= high):
            c1 = low + (high - low) // 2
            c2 = size2 + size1 - c1

            l1 = -float("inf") if (c1 == 0) else nums1[(c1 - 1) // 2]
            r1 = float('inf') if (c1 == size1 * 2) else nums1[c1 // 2]
            l2 = -float('inf') if (c2 == 0) else nums2[(c2 - 1) // 2]
            r2 = float('inf') if (c2 == size2 * 2) else nums2[c2 // 2]

            if (l1 > r2):
                high = c1 - 1
            elif (l2 > r1):
                low = c1 + 1
            else:
                return (max(l1, l2) + min(r1, r2)) / 2.0


if __name__ == "__main__":
    s = Solution()
    k = s.findMedianSortedArrays([1], [2, 3, 4])
    print(k)
