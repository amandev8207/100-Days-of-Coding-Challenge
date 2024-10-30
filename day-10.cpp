// #1671. Minimum Number of Removals to Make Mountain Array

// You may recall that an array arr is a mountain array if and only if:

// arr.length >= 3
// There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given an integer array nums​​​, return the minimum number of elements to remove to make nums​​​ a mountain array.

// class Solution {
// public:
//     int minimumMountainRemovals(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> LIS(n, 1), LDS(n, 1);

//         // Compute LIS up to each index
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < i; ++j) {
//                 if (nums[i] > nums[j]) {
//                     LIS[i] = max(LIS[i], LIS[j] + 1);
//                 }
//             }
//         }

//         // Compute LDS from each index
//         for (int i = n - 1; i >= 0; --i) {
//             for (int j = n - 1; j > i; --j) {
//                 if (nums[i] > nums[j]) {
//                     LDS[i] = max(LDS[i], LDS[j] + 1);
//                 }
//             }
//         }

//         int maxMountainLength = 0;

//         // Find the maximum mountain length
//         for (int i = 1; i < n - 1; ++i) {
//             if (LIS[i] > 1 && LDS[i] > 1) {  // Valid peak
//                 maxMountainLength = max(maxMountainLength, LIS[i] + LDS[i] - 1);
//             }
//         }

//         return n - maxMountainLength;
//     }
// };