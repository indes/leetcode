# 5. [最长回文子串](https://leetcode-cn.com/problems/longest-palindromic-substring/submissions/)

给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。

示例 1：
```
输入: "babad"
输出: "bab"
注意: "aba" 也是一个有效答案。
```
示例 2：
```
输入: "cbbd"
输出: "bb"
```

## 思路
### 动态规划 O(n^2)空间
使用一个 `n*n` 的矩阵`v`，`v[i][j]`代表从string第`i`个字符开始到第`j`个字符结束是否是回文串，如果是则标记为回文串长度，如果不是则为0。
状态转移方程

```
if v[i-1][j-1] and string[i] == string[j]:
    v[i][j] = v[i-1][j-1] + 2
else：
    v[i][j] = 0
```
