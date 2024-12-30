// 2466. Count Ways To Build Good Strings
// Solved
// Medium
// Topics
// Companies
// Hint
// Given the integers zero, one, low, and high, we can construct a string by starting with an empty string, and then at each step perform either of the following:

// Append the character '0' zero times.
// Append the character '1' one times.
// This can be performed any number of times.

// A good string is a string constructed by the above process having a length between low and high (inclusive).

// Return the number of different good strings that can be constructed satisfying these properties. Since the answer can be large, return it modulo 109 + 7.










// class Solution {
// public:
//     int M = 1e9+7;
//     vector<int> dp;
//     int solve(int low, int high, int zero, int one, int len) {
//         if (len > high) return 0;
//         if(dp[len] != -1) return dp[len];

//         int got = 0;
//         if(len >= low && len <= high) {
//             got = 1;
//         } 

//         int addOne = solve(low, high, zero, one, len + one) % M;
//         int addZero = solve(low, high, zero, one, len + zero) % M;

//         return dp[len] = (got + addOne + addZero) % M;
//     }
//     int countGoodStrings(int low, int high, int zero, int one) {
//         dp.assign(100001, -1);
//         return solve(low, high, zero, one, 0);
//     }
// };