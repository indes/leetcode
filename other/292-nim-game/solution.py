class Solution:
    def canWinNim_dp(self, n: int) -> bool:
        l = [True] * n
        for i in range(3, n):
            l[i] = (not l[i - 1]) or (not l[i - 2]) or not (l[i - 3])
        return l[n - 1]

    def canWinNim(self, n: int) -> bool:
        return n%4!=0

if __name__ == "__main__":
    s = Solution()
    r = s.canWinNim(20)
    print(r)
