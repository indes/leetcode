# 61. [旋转链表](https://leetcode-cn.com/problems/rotate-list/)

给定一个链表，旋转链表，将链表每个节点向右移动 k 个位置，其中 k 是非负数。

示例 1:
```
输入: 1->2->3->4->5->NULL, k = 2
输出: 4->5->1->2->3->NULL
解释:
向右旋转 1 步: 5->1->2->3->4->NULL
向右旋转 2 步: 4->5->1->2->3->NULL
```
示例 2:
```
输入: 0->1->2->NULL, k = 4
输出: 2->0->1->NULL
解释:
向右旋转 1 步: 2->0->1->NULL
向右旋转 2 步: 1->2->0->NULL
向右旋转 3 步: 0->1->2->NULL
向右旋转 4 步: 2->0->1->NULL
```

## 思路

1. 使用两个指针，使p1与p2相差k。
2. 同时移动p1、p2，使p1指针到达链尾。
3. 连接首尾指针，断开p2->next。

注意: 第一步中如果一直使用`p1->next`寻找间隔k的位置，当k过大时，会超时。可以在遍历链表的
时候记录链表长度，当p1到达链尾T时，p1再从链头移动`k%length`步即可。