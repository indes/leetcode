from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        for i in range(1, len(prices)):
            if (prices[i] > prices[i - 1]):
                ans += prices[i] - prices[i - 1]
        return ans


if __name__ == "__main__":
    s = Solution()
    assert s.maxProfit([1, 2, 3, 4, 5]) == 4
    assert s.maxProfit([7, 6, 4, 3, 1]) == 0
