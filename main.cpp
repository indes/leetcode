
#include "sorting-and-searching/merge_sort/MergeSort.h"

using namespace std;

#include <iostream>

int main() {

    MergeSort h;
    vector<int> v1{3, 1, 5, 6, 4, 7, 8, 2, 9};
    h.sort(v1);
    for (auto i:v1) {
        std::cout << i << " ";
    }
}


