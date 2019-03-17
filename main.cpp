
#include "array/find-peak-element/Solution.h"
#include <iostream>

using namespace std;

int main() {
    Solution s;
    vector<int> v = {1, 2, 3, 1};
    auto res = s.findPeakElement(v);
//    auto res = s.partition("aab");
//    cout << v2 << endl;
    cout << res << endl;
    return 0;
}


