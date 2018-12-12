
#include "tree/populating-next-right-pointers-in-each-node/Solution.h"

using namespace std;

int main() {
    Solution s;



    TreeLinkNode n1 = {1, &n2, &n3, nullptr};
    TreeLinkNode n2 = {2, nullptr, nullptr, nullptr};
    TreeLinkNode n3 = {3, &n1, &n2, nullptr};



    s.connect(&n3);
    return 0;

}


