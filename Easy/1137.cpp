/****************************************************************
 *
 * LeetCode 1137. N-th Tribonacci Number
 *
 * *************************************************************/

#include<iostream>
#include<vector>

class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        std::vector<int> trib(n + 1, 0);
        trib[1] = 1;
        trib[2] = 1;

        for (int i = 3; i <= n; i++) {
            trib[i] = trib[i - 1] + trib[i - 2] + trib[i - 3];
        }
        return trib[n];

    }
};