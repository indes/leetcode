
#include "Intersect/Intersect.h"

using namespace std;

int main() {

    std::vector<int> v1 = {4, 9, 5};
    std::vector<int> v2 = {9, 4, 9, 8, 4};
    Intersect solution;
    vector<int> a = solution.intersect(v1, v2);

    return 0;
}


