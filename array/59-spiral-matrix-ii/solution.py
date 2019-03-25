from typing import List


class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        if (n <= 0): return list()
        l = [[0] * n for _ in range(n)]
        i = 1

        row_s = 0
        row_e = n - 1
        col_s = 0
        col_e = n - 1

        while (row_s <= row_e and col_s <= col_e):
            for col in range(col_s, col_e + 1):
                l[row_s][col] = i
                i += 1
            row_s += 1

            for row in range(row_s, row_e + 1):
                l[row][col_e] = i
                i += 1
            col_e -= 1

            for col in range(col_e, col_s - 1, -1):
                l[row_e][col] = i
                i += 1
            row_e -= 1

            for row in range(row_e, row_s - 1, -1):
                l[row][col_s] = i
                i += 1
            col_s += 1
        return l


if __name__ == "__main__":
    s = Solution()
    m = s.generateMatrix(4)
    print(m)
