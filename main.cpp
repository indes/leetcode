#include <iostream>
#include <vector>
#include "RemoveDuplicates/RemoveDuplicates.h"

using namespace std;

int main() {

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    RemoveDuplicates s;

    cout << s.removeDuplicates(nums) << endl;

    return 0;
}


