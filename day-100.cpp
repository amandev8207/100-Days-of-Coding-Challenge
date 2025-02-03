// #3105. Longest Strictly Increasing or Strictly Decreasing Subarray

// You are given an array of integers nums. Return the length of the longest 
// subarray
//  of nums which is either 
// strictly increasing
//  or 
// strictly decreasing


// class Solution {
// public:
//     int longestMonotonicSubarray(vector<int>& nums) {
//         if (nums.empty()) return 0;
//         int maxLen = 1, inc = 1, dec = 1;
//         for (int i = 1; i < nums.size(); ++i) {
//             if (nums[i] > nums[i-1]) inc++, dec = 1;      // ↗️ Case
//             else if (nums[i] < nums[i-1]) dec++, inc = 1; // ↘️ Case
//             else inc = dec = 1;                           // 🟡 Case
//             maxLen = max(maxLen, max(inc, dec));          // Update global max
//         }
//         return maxLen;
//     }
// };  