
#include "backtracking/word-search/Solution.h"

using namespace std;

using namespace std;

int main() {
    Solution s;
//    vector<string> v = {3, 3, 0, 3};
    vector<vector<char>> v = {
            {'a', 'b'}
//            {'S', 'F', 'C', 'S'},
//            {'A', 'D', 'E', 'E'}
    };
    auto v2 = s.exist(v, "ba");
//    cout << v2 << endl;
    return 0;
}


