
#include "tree/construct-binary-tree-from-inorder-and-postorder-traversal/Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<vector<int>> v = {{1, 1, 0},
                             {1, 1, 0},
                             {0, 0, 1}};
    vector<int> v1 = {4, 5, 2, 6, 7, 3, 1};
    vector<int> v2 = {4, 2, 5, 1, 6, 3, 7};
    auto res = s.buildTree2(v2, v1);
//    cout << v2 << endl;
    return 0;
}


