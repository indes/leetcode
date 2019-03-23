import sys
from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        min_price = sys.maxsize
        for price in prices:
            min_price = min(min_price, price)
            ans = max(ans, price - min_price)
        return ans


if __name__ == "__main__":


    s = Solution()
    assert s.maxProfit([7,1,5,3,6,4]) == 5
    assert s.maxProfit([7,6,4,3,1]) == 0

