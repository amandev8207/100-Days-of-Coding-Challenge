// #2563. Count the Number of Fair Pairs

// Given a 0-indexed integer array nums of size n and two integers lower and upper, return the number of fair pairs.

// A pair (i, j) is fair if:

// 0 <= i < j < n, and
// lower <= nums[i] + nums[j] <= upper


// class Solution {
// public:
//     long long countFairPairs(vector<int>& v, int lower, int upper) {
//         long long ans = 0;
//         sort(v.begin(), v.end());

//         for (int i = 0; i < v.size() - 1; i++) {
//             auto up = upper_bound(v.begin() + i + 1, v.end(), upper - v[i]);
//             auto low = lower_bound(v.begin() + i + 1, v.end(), lower - v[i]);
//             ans += (up - low);
//         }
//         return ans;
//     }
// };