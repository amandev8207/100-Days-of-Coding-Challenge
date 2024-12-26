// #494. Target Sum

// You are given an integer array nums and an integer target.

// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that you can build, which evaluates to target.


// class Solution {
// public:
//     int findTargetSumWays(vector<int>& nums, int target) {
//         int S = accumulate(nums.begin(), nums.end(), 0);
//         if (S < abs(target) || (S + target) % 2 != 0) return 0;

//         int P = (S + target) / 2;
//         vector<int> dp(P + 1, 0);
//         dp[0] = 1;

//         for (int num : nums) {
//             for (int j = P; j >= num; --j) {
//                 dp[j] += dp[j - num];
//             }
//         }

//         return dp[P];
//     }
// };