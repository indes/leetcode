//
// Created by li on 2019/8/26.
//

#ifndef LEETCODE_SOLUTION_HPP
#define LEETCODE_SOLUTION_HPP

#include <vector>
#include <algorithm>

using std::max;
using std::vector;

struct node
{
    node* one;
    node* zero;

    node() {
        one = nullptr;
        zero = nullptr;
    }
};

class Solution {
private:
    void insert(node* root, int num) {
        auto n = root;
        for (int i = 30; i >= 0; i--)
        {
            bool is_one = (num >> i) & 1; // 得到当前位是否为1
            if (is_one) {
                if (n->one == nullptr) {
                    n->one = new node();
                }
                n = n->one;
            }
            else {
                if (n->zero == nullptr) {
                    n->zero = new node();
                }
                n = n->zero;
            }
        }
    }

    int search(node* root, int num) {
        auto n = root;
        int res = 0;
        for (int i = 30; i >= 0; i--)
        {
            // 从最高位开始到最低位开始检测
            bool is_one = (num >> i) & 1;// 检测当前位是否为1
            if (is_one) {
                // 当前位为1
                // 如果当前位有为0的 切换到这个分支 因为这样可以让当前异或之后可以使得最高位值为1 使得结果最大
                if (n->zero) {
                    n = n->zero;
                    res += (1 << i);
                }
                else {
                    // 只有相同的
                    n = n->one;
                }
            }
            else {
                // 当前位为0
                // 如果当前位有为1的 切换到这个分支 因为这样可以让当前异或之后可以使得最高位值为1 使得结果最大
                if (n->one) {
                    n = n->one;
                    res += (1 << i);
                }
                else {
                    // 只有相同的
                    n = n->zero;
                }
            }
        }
        return res;
    }
public:
    int findMaximumXOR(const vector<int>& nums) {
        auto root = new node();
        for (auto num : nums) {
            insert(root, num);
        }

        int max_val = 0;
        for (auto num : nums) {
            max_val = max(max_val, (search(root, num)));
        }
        return max_val;
    }
};


#endif //LEETCODE_SOLUTION_HPP
