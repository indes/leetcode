#include <iostream>
#include <vector>
#include <list>
#include "MaxProfit/MaxProfit.h"

using namespace std;

int main() {

    vector<int> nums = {1, 2, 3, 4};
    MaxProfit s;

//    s.moveZeroes(nums);
    cout<<s.maxProfit(nums);
    return 0;
}


