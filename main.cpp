#include <iostream>
#include <vector>
#include "ContainsDuplicate/ContainsDuplicate.h"

using namespace std;

int main() {

    vector<int> nums = {1, 2, 3, 4};
    ContainsDuplicate s;

    cout << s.containsDuplicate(nums) << endl;

    return 0;
}


