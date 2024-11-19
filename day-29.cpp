// #2461. Maximum Sum of Distinct Subarrays With Length K
// ies
// Hint
// You are given an integer array nums and an integer k. Find the maximum subarray sum of all the subarrays of nums that meet the following conditions:

// The length of the subarray is k, and
// All the elements of the subarray are distinct.
// Return the maximum subarray sum of all the subarrays that meet the conditions. If no subarray meets the conditions, return 0.

// A subarray is a contiguous non-empty sequence of elements within an array.

// class Solution {
// public:
//     long long maximumSubarraySum(vector<int>& nums, int k) {
//         long long n = nums.size(), ws = 0, mx = 0;
//         unordered_map<int, int> mp;

//         for (int i = 0; i < n; i++) {
//             // Add the current element to the window
//             mp[nums[i]]++;
//             ws += nums[i];

//             // If the window size exceeds 'k', slide the window
//             if (i >= k) {
//                 int le = nums[i - k];
//                 mp[le]--;
//                 ws -= le;
//                 if (mp[le] == 0) {
//                     mp.erase(le);
//                 }
//             }

//             // Check if the window has exactly 'k' distinct elements
//             if (i >= k - 1 && mp.size() == k) {
//                 mx = max(mx, ws);
//             }
//         }

//         return mx;
//     }
// };