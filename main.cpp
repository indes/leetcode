
#include "greedy/406-queue-reconstruction-by-height/Solution.h"


using namespace std;

int main() {
    Solution s;
//    ListNode n3(3), n2(2, &n3), n1(1, &n2);
    //[[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]
    vector<pair<int, int>> p = {{7, 0},
                                {4, 4},
                                {7, 1},
                                {5, 0},
                                {6, 1},
                                {5, 2}};
    auto r = s.reconstructQueue(p);
    return 0;
}


