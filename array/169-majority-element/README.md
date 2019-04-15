# 169. [求众数](https://leetcode-cn.com/problems/majority-element/)

给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。

你可以假设数组是非空的，并且给定的数组总是存在众数。

示例 1:
```
输入: [3,2,3]
输出: 3
```
示例 2:
```
输入: [2,2,1,1,1,2,2]
输出: 2
```

## 思路
- 使用 map 遍历数组一遍，统计数字出现次数
```
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            if (m.find(nums[i]) != m.end()) {
                m[nums[i]]++;
            } else {
                m[nums[i]] = 1;
            };

            if (m[nums[i]] > size / 2) {
                return nums[i];
            }
        }

        return -1;
    }
};
```

- 从第一个数开始count=1，遇到相同的就加1，遇到不同的就减1，减到0就重新换个数开始计数。最后count>0的数字肯定为众数。（代码见文件）