
#include "dynamic-programming/188-best-time-to-buy-and-sell-stock-iv/Solution.h"

#include <iostream>

using namespace std;

int main() {
    Solution s;
    vector<int> v({3, 3, 5, 0, 0, 3, 1, 4});
    auto res = s.maxProfit(2, v);
    cout << res << endl;
    return 0;
}


