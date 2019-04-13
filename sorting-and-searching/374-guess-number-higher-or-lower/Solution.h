//
// Created by Li on 2019/4/13.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int l = 0, h = n;
        while (l < h) {
            int mid = l + (h - l) / 2;

            switch (guess(mid)) {
                case -1:
                    h = mid - 1;
                    break;
                case 1:
                    l = mid + 1;
                    break;
                case 0:
                    return mid;
            }

        }
        return l;
    }
};


#endif //LEETCODE_SOLUTION_H
