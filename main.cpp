
#include "dynamic-programming/72-edit-distance/Solution.h"

#include <iostream>

using namespace std;

int main() {
    Solution s;
    string s1 = "horse", s2 = "ros";
    auto res = s.minDistance(s1, s2);
    cout << res << endl;
    return 0;
}


