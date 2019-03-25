from typing import List


class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        if (nums == 0): return []

        list_left = [1] * len(nums)

        m = 1
        for i in range(len(nums)):
            list_left[i] = m
            m *= nums[i]

        m = 1
        for i in range(len(nums) - 1, -1, -1):
            list_left[i] *= m
            m *= nums[i]

        return list_left

if __name__ == "__main__":
    s = Solution()
    assert s.productExceptSelf([1, 2, 3, 4]) == [24, 12, 8, 6]
