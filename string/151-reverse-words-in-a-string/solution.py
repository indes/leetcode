class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip().split(' ')



        return (' ').join(filter(lambda x: x, s[::-1]))


if __name__ == '__main__':
    s = Solution()
    print(s.reverseWords("a good   example"))
