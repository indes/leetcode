
//#include "leetcode/899-orderly-queue/solution.hpp"
#include "./linked-list/odd-even-linked-list/Solution.h"
#include <iostream>
#include <vector>

#include <deque>

using namespace std;

int main() {
    Solution s;

    ListNode n5({5, nullptr});
    ListNode n4({4, &n5});
    ListNode n3({3, &n4});
    ListNode n2({2, &n3});
    ListNode n1({1, &n2});


    deque<int> dq;

    //    vector<int> v{2,3,4,5,1,3,4};

//    auto res = s.orderlyQueue("baaca", 3);
    auto a = s.oddEvenList(&n1);
    return 0;
}
