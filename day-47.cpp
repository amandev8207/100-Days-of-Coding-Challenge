// #2779. Maximum Beauty of an Array After Applying Operation

// You are given a 0-indexed array nums and a non-negative integer k.

// In one operation, you can do the following:

// Choose an index i that hasn't been chosen before from the range [0, nums.length - 1].
// Replace nums[i] with any integer from the range [nums[i] - k, nums[i] + k].
// The beauty of the array is the length of the longest subsequence consisting of equal elements.

// Return the maximum possible beauty of the array nums after applying the operation any number of times.

// Note that you can apply the operation to each index only once.

// A subsequence of an array is a new array generated from the original array by deleting some elements (possibly none) without changing the order of the remaining elements.






// class Solution {
// public:
//     int maximumBeauty(vector<int>& nums, int k) {
//         int n = nums.size();
//         int maxValue = 0;

//         // Find the maximum value in the array
//         for (int i = 0; i < n; i++) {
//             if (nums[i] > maxValue) {
//                 maxValue = nums[i];
//             }
//         }

//         // Create an array to track ranges
//         vector<int> range(maxValue + 10, 0);

//         // Mark ranges for each number in the array
//         for (int i = 0; i < n; i++) {
//             int left = max(0, nums[i] - k);
//             int right = min(maxValue, nums[i] + k) + 1;
//             range[left]++;
//             range[right]--;
//         }

//         // Calculate prefix sums and find the maximum value
//         int result = range[0];
//         for (int i = 1; i < range.size(); i++) {
//             range[i] += range[i - 1];
//             if (range[i] > result) {
//                 result = range[i];
//             }
//         }

//         return result;
//     }
// };