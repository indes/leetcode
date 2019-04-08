from typing import List


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ans = -float('inf')
        sum = 0
        for num in nums:
            sum += num
            ans = max(sum, ans)
            if sum < 0: sum = 0

        return ans

if __name__ == "__main__":
    s = Solution()
    print(s.maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))
