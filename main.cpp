#include <iostream>
#include <vector>
#include "MaxProfit/MaxProfit.h"

using namespace std;

int main() {

    vector<int> nums = {7, 1, 5, 3, 6, 4};
    MaxProfit s;

    cout << s.maxProfit(nums) << endl;

    return 0;
}


