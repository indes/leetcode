
#include "tree/235-lowest-common-ancestor-of-a-binary-search-tree/Solution.h"

using namespace std;

int main() {
    Solution s;
    TreeNode n0(0), n4(4), n7(7), n9(8);
    TreeNode n2(2, &n0, &n4), n8(8, &n7, &n9), n6(6, &n2, &n8);

    auto res = s.lowestCommonAncestor(&n6, &n0, &n4);

    return 0;
}


