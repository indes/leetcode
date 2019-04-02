
#include "greedy/874-walking-robot-simulation/Solution.h"


using namespace std;

int main() {
    Solution s;
//    ListNode n3(3), n2(2, &n3), n1(1, &n2);
    //{{7,0}, {4,4}, {7,1}, {5,0}, {6,1}, {5,2}}
    vector<int> commands ={-2,-1,8,9,6};
    vector<vector<int>> obstacles = {{-1,3},{0,1},{-1,5},{-2,-4},{5,4},{-2,-3},{5,-1},{1,-1},{5,5},{5,2}};

    
    auto r = s.robotSim(commands, obstacles);
    return 0;
}


