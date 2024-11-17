// #862. Shortest Subarray with Sum at Least K

// Given an integer array nums and an integer k, return the length of the shortest non-empty subarray of nums with a sum of at least k. If there is no such subarray, return -1.

// A subarray is a contiguous part of an array.

// class Solution {
// public:
//     int shortestSubarray(vector<int>& nums, int k) {
//         int res = INT_MAX;
//         long long curSum = 0;
//         deque<pair<long long, int>> q;  // (prefix_sum, end_idx)
        
//         for (int r = 0; r < nums.size(); r++) {
//             curSum += nums[r];
            
//             if (curSum >= k) {
//                 res = min(res, r + 1);
//             }
            
//             // Find the minimum valid window ending at r
//             while (!q.empty() && curSum - q.front().first >= k) {
//                 auto [prefix, endIdx] = q.front();
//                 q.pop_front();
//                 res = min(res, r - endIdx);
//             }
            
//             // Validate the monotonic deque
//             while (!q.empty() && q.back().first > curSum) {
//                 q.pop_back();
//             }
//             q.push_back({curSum, r});
//         }
        
//         return res == INT_MAX ? -1 : res;
//     }
// };