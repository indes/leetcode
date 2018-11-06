
#include "merge_sorted_array/merge_sorted_array.h"

using namespace std;

int main() {
    merge_sorted_array s;
    vector<int> v1 = {4, 0, 0, 0, 0, 0}, v2 = {1,2,3,5,6};
    s.merge(v1, 1, v2, 5);


    return 0;
}


