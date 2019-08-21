# 72. [编辑距离](https://leetcode-cn.com/problems/edit-distance/)

## 题目
给定两个单词 word1 和 word2，计算出将 word1 转换成 word2 所使用的最少操作数 。

你可以对一个单词进行如下三种操作：

插入一个字符
删除一个字符
替换一个字符
示例 1:
```
输入: word1 = "horse", word2 = "ros"
输出: 3
解释: 
horse -> rorse (将 'h' 替换为 'r')
rorse -> rose (删除 'r')
rose -> ros (删除 'e')
```
示例 2:
```
输入: word1 = "intention", word2 = "execution"
输出: 5
解释: 
intention -> inention (删除 't')
inention -> enention (将 'i' 替换为 'e')
enention -> exention (将 'n' 替换为 'x')
exention -> exection (将 'n' 替换为 'c')
exection -> execution (插入 'u')
```
## 思路
动态规划：  
- 使用`dp[i][j]`用来表示字符串1的0\~i-1、字符串2的0\~j-1的最小编辑距离；  
- 我们可以知道边界情况：`dp[i][0] = i`、`dp[0][j]=j`；  
- 同时对于两个字符串的子串，都能分为最后一个字符相等或者不等的情况：  
- 如果`words[i-1] == words[j-1]`：`dp[i][j] = dp[i-1][j-1]`；也就是说当前的编辑距离和位置i和j的字符无关；
- 如果words[i-1] != words[j-1]：则存在三种可能的操作： 
    - 向word1插入：dp[i][j] = dp[i][j-1] + 1;
    - 从word1删除：dp[i][j] = dp[i-1][j] + 1;
    - 替换word1元素：dp[i][j] = dp[i-1][j-1] + 1;
