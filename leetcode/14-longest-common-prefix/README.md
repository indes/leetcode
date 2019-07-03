# 14. [最长公共前缀](https://leetcode-cn.com/problems/longest-common-prefix/)


编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。

示例 1:
```
输入: ["flower","flow","flight"]
输出: "fl"
```
示例 2:
```
输入: ["dog","racecar","car"]
输出: ""
解释: 输入不存在公共前缀。
```

说明：所有输入只包含小写字母 a-z 。

## 思路
[https://leetcode-cn.com/problems/longest-common-prefix/solution/](https://leetcode-cn.com/problems/longest-common-prefix/solution/)

官方解答很详细，这里主要是使用到了分治法。先两两找出最长公共前缀，然后再对找出的公共前缀中的最长公共前缀。