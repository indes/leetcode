from typing import List


class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        if len(nums2) == 0: return
        if len(nums1) == 0:
            for i in range(len(nums2)):
                nums1[i] = nums2[i]
            return
        i = m - 1
        j = n - 1
        for k in range(m + n - 1, -1, -1):
            if nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
                if i < 0:
                    for l in range(0, j + 1):
                        nums1[l] = nums2[l]
                    return
            else:
                nums1[k] = nums2[j]
                j -= 1
                if j < 0: return


if __name__ == "__main__":
    nums1 = [1, 2, 3, 0, 0, 0]
    m = 3
    nums2 = [2, 5, 6]
    n = 3

    s = Solution()
    s.merge(nums1, m, nums2, n)
    print(s)
