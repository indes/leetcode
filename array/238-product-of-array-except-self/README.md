# 238. 除自身以外数组的乘积

给定长度为 n 的整数数组 nums，其中 n > 1，返回输出数组 output ，其中 output[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。

示例:

> 输入: [1,2,3,4]  
> 输出: [24,12,8,6]

说明: 请不要使用除法，且在 O(n) 时间复杂度内完成此题。

进阶：
你可以在常数空间复杂度内完成这个题目吗？（ 出于对空间复杂度分析的目的，输出数组不被视为额外空间。）

## 解题思路

### 1. 空间复杂度``O(n)``解法

使用两个数组分别保存从左和从右扫描的乘积
```python
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        if (nums == 0): return []
        list_right = [1] * len(nums)
        list_left = [1] * len(nums)

        m = 1
        for i in range(len(nums)):
            list_left[i] = m
            m *= nums[i]

        m = 1
        for i in range(len(nums) - 1, -1, -1):
            list_right[i] = m
            m *= nums[i]

        return [list_right[i] * list_left[i] for i in range(len(nums))]
```

优化（只使用一个额外数组）
```python
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        if (nums == 0): return []
        
        list_left = [1] * len(nums)

        m = 1
        for i in range(len(nums)):
            list_left[i] = m
            m *= nums[i]

        m = 1
        for i in range(len(nums) - 1, -1, -1):
            list_left[i] *= m
            m *= nums[i]

        return list_left
```
