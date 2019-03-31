# 43. [字符串相乘](https://leetcode-cn.com/problems/multiply-strings/)

给定两个以字符串形式表示的非负整数 `num1` 和 `num2`，返回 `num1` 和 `num2` 的乘积，它们的乘积也表示为字符串形式。

示例 1:
```
输入: num1 = "2", num2 = "3"
输出: "6"
```
示例 2:
```
输入: num1 = "123", num2 = "456"
输出: "56088"
```
说明：

1. `num1` 和 `num2` 的长度小于110。
1. `num1` 和 `num2` 只包含数字 0-9。
1. `num1` 和 `num2` 均不以零开头，除非是数字 0 本身。
1. 不能使用任何标准库的大数类型（比如 BigInteger）或直接将输入转换为整数来处理。

## 思路
两个长度为`n`和`m`的数相乘的最长为`n+m+2`， 利用乘法法则对字符串每一位依次求乘积，
将结果保存在长度为`n+m+2`的数组中，每次保存时注意进位处理。 