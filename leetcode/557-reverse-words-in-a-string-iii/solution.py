class Solution:
    def reverseWords(self, s: str) -> str:
        str_list = s.split(" ")
        r = list(map(self.revers_word, str_list))
        return " ".join(r)

    def revers_word(self, s: str) -> str:
        l = list(s)
        for i in range(len(l) // 2):
            l[i], l[len(l)-i-1] = l[len(l)-i-1], l[i]
        return ''.join(l)


if __name__ == "__main__":
    s = Solution()
    assert s.reverseWords("Let's take LeetCode contest") == "s'teL ekat edoCteeL tsetnoc"