// #2501. Longest Square Streak in an Array

// You are given an integer array nums. A subsequence of nums is called a square streak if:

// The length of the subsequence is at least 2, and
// after sorting the subsequence, each element (except the first element) is the square of the previous number.
// Return the length of the longest square streak in nums, or return -1 if there is no square streak.

// A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

// class Solution {
// public:
//     int longestSquareStreak(vector<int>& nums) {
//         map<int, int>mp;
//         sort(nums.begin(), nums.end());
//         int res = -1;
//         for(int num: nums) {
//             int _sqrt = sqrt(num);
//             if(_sqrt*_sqrt == num && mp.find(_sqrt)!=mp.end()) {
//                 mp[num] = mp[_sqrt]+1;
//                 res = max(res, mp[num]);
//             } else mp[num] = 1;
//         }
//         return res;
//     }
// };