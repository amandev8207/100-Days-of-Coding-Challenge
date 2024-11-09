// // #1829. Maximum XOR for Each Query

// // You are given a sorted array nums of n non-negative integers and an integer maximumBit. You want to perform the following query n times:

// // Find a non-negative integer k < 2maximumBit such that nums[0] XOR nums[1] XOR ... XOR nums[nums.length-1] XOR k is maximized. k is the answer to the ith query.
// // Remove the last element from the current array nums.
// // Return an array answer, where answer[i] is the answer to the ith query

// class Solution {
// public:
//     vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
//         int mask = (1LL << maximumBit) - 1, n = nums.size();
//         vector<int> res(n);
//         for(int i = 0, curr = 0; i < n; i++) {
//             curr ^= nums[i];
//             res[n-i-1] = ~curr & mask;
//         }
//         return res;
//     }
// };