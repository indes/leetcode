from typing import List


class Solution:
    def rob(self, nums: List[int]) -> int:
        if (len(nums) == 0): return 0
        ans = [0] * (len(nums) + 1)
        ans[1] = nums[0]
        for i in range(2, len(nums) + 1):
            ans[i] = max(ans[i - 2] + nums[i - 1], ans[i - 1])

        return ans[-1]


if __name__ == "__main__":
    s = Solution()
    assert s.rob([1, 2, 3, 1]) == 4
    assert s.rob([2, 7, 9, 3, 1]) == 12
