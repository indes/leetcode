from typing import List


class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        ans = list(range(left, right + 1))
        return list(filter(self.is_dividing, ans))

    def is_dividing(self, num: int) -> bool:
        if (num < 10):
            return True
        n = num
        while (n):
            div = n % 10
            n //= 10
            if (div == 0 or num % div != 0):
                return False

        return True


if __name__ == "__main__":
    s = Solution()

    assert s.selfDividingNumbers(1,22) == [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
