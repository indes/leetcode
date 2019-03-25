from typing import List


class Solution:
    def grayCode(self, n: int) -> List[int]:
        ans = [0]
        for i in range(1, 1 << n):
            ans.append(i ^ (i >> 1))
        return ans


if __name__ == "__main__":
    s = Solution()
    assert s.grayCode(2) == [0, 1, 3, 2]
    assert s.grayCode(0) == [0]
