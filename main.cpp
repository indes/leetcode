
#include "tree/construct-binary-tree-from-preorder-and-inorder-traversal/Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<vector<int>> v = {{1, 1, 0},
                             {1, 1, 0},
                             {0, 0, 1}};
    vector<int> v1 = {1, 2, 4, 5, 3, 6, 7};
    vector<int> v2 = {4, 2, 5, 1, 6, 3, 7};
    auto res = s.buildTree(v1, v2);
//    cout << v2 << endl;
    return 0;
}


