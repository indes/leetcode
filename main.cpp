
#include "dynamic-programming/53-maximum-subarray/Solution.h"


using namespace std;

int main() {
    Solution s;
//    ListNode n5(5), n4(4), n3(3, &n4), n2(2, &n3), n1(1, &n2);
//    s.simplifyPath("/a//b////c/d//././/..");
    vector<int> v = {-1, -3, 4, -1, 2};
    s.maxSubArray(v);
    return 0;
}


