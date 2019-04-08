from collections import deque
class Solution:
    def simplifyPath(self, path: str) -> str:
        str_list = path.split('/')
        q = deque()
        for s in str_list:
            if s == '': continue
            if s == "..":
                if len(q) != 0:
                    q.pop()
                continue
            elif s == ".":
                continue
            else:
                q.append(s)
        ans = '/'
        ans += '/'.join(q)

        return ans


if __name__ == '__main__':
    s = Solution()
    assert s.simplifyPath("/a/./b/../../c/") == "/c"
    assert s.simplifyPath("/a//b////c/d//././/..") == "/a/b/c"
