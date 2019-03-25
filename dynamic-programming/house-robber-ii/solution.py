from typing import List


class Solution:
    def rob(self, nums: List[int]) -> int:
        # ans = 0
        if (len(nums) == 0): return 0
        if (len(nums) <= 3): return max(nums)

        l1 = [0] * (len(nums) - 1)
        l1[0] = nums[0]
        l1[1] = max(nums[0], nums[1])
        l2 = [0] * (len(nums) - 1)
        l2[0] = nums[1]
        l2[1] = max(nums[1], nums[2])
        for i in range(2, len(l1)):
            l1[i] = max(l1[i - 1], l1[i - 2] + nums[i])
            l2[i] = max(l2[i - 1], l2[i - 2] + nums[i + 1])

        return max(l1[-1], l2[-1])


if __name__ == "__main__":
    s = Solution()
    print(s.rob([1, 3, 1, 3, 100]))
