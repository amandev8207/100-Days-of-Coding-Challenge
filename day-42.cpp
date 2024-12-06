// #2554. Maximum Number of Integers to Choose From a Range I

// You are given an integer array banned and two integers n and maxSum. You are choosing some number of integers following the below rules:

// The chosen integers have to be in the range [1, n].
// Each integer can be chosen at most once.
// The chosen integers should not be in the array banned.
// The sum of the chosen integers should not exceed maxSum.
// Return the maximum number of integers you can choose following the mentioned rules.


// class Solution {
// public:
//     int maxCount(vector<int>& banned, int n, int maxSum) {
//         map<int, int> mp;
//         for(auto it: banned) {
//             mp[it]++;
//         }
//         int sum = 0, cnt = 0;
//         for(int i = 1; i <= n; i++) {
//             if(mp[i] == 0 && sum + i <= maxSum) {
//                 cnt++;
//                 sum += i;
//             }
//         }
//         return cnt;
//     }
// };

 