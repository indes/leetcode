# 279. [完全平方数](https://leetcode-cn.com/problems/perfect-squares/submissions/)

给定正整数 `n`，找到若干个完全平方数（比如 `1, 4, 9, 16, ...`）使得它们的和等于 `n`。你需要让组成和的完全平方数的个数最少。

示例 1:
```
输入: n = 12
输出: 3 
解释: 12 = 4 + 4 + 4.
```

示例 2:
```
输入: n = 13
输出: 2
解释: 13 = 4 + 9.
```

## 思路

### 动态规划

很容易想到使用动态规划解题，状态转移函数为：
```
dp[i] = min(v[1] + v[j - 1], v[2] + v[j -2], ...);
```

可以写出会超时的代码。
```
class Solution {
public:
    int numSquares_dp(int n) {
        vector<int> v(n + 1, numeric_limits<int>::max());
        for (int i = 1; i * i <= n; ++i) {
            v[i * i] = 1;
        }

        for (int j = 2; j <= n; ++j) {
            int min_ans = v[j];
            for (int i = 1; i <= j / 2; ++i) {
                min_ans = min(min_ans, v[i] + v[j - i]);
            }
            v[j] = min_ans;
        }

        return v.back();
    }
};
```
其实在更新dp数组时，并只需要遍历每个小于n的完全平方数，这样即可减小复杂度。优化后的代码：
```
class Solution {
public:
    int numSquares(int n) {
        vector<int> v(n + 1, numeric_limits<int>::max());
        v[0] = 0;
        for (int j = 1; j <= n; ++j) {
            for (int i = 1; i * i <= j; ++i) {
                v[j] = min(v[j], v[j - i * i] + 1);
            }
        }
        return v.back();
    }
};
```