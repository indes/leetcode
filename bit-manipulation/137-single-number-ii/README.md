# 137. [只出现一次的数字 II](https://leetcode-cn.com/problems/single-number-ii/)

## 题目

给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现了三次。找出那个只出现了一次的元素。

说明：

你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？

示例 1:
```
输入: [2,2,3,2]
输出: 3
```
示例 2:
```
输入: [0,1,0,1,0,1,99]
输出: 99
```

## 思路

### 按位取3的余数
使用一个长度为32的数组，将每个数字的每一位加到数组中，然后对数组每一位取3的余数。剩下的就是只出现一次数字的二进制表示。

```
public int singleNumber(int[] nums) {
    int[] bts = new int[32];
    for (int num : nums) {
        for (int i = 0; i < bts.length; i++) {
            bts[i] += ((num >> i) & 1);
        }
    }
    int ans = 0;
    for (int i = 0; i < bts.length; i++) {
        ans |= (bts[i] % 3 << i);
    }
    return ans;
}
```
### 数字电路三进制加法
推导过程需要用到卡诺图，有时间再补。