// #983. Minimum Cost For Tickets
// You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.

// Train tickets are sold in three different ways:

// a 1-day pass is sold for costs[0] dollars,
// a 7-day pass is sold for costs[1] dollars, and
// a 30-day pass is sold for costs[2] dollars.
// The passes allow that many days of consecutive travel.

// For example, if we get a 7-day pass on day 2, then we can travel for 7 days: 2, 3, 4, 5, 6, 7, and 8.
// Return the minimum number of dollars you need to travel every day in the given list of days





// class Solution {
// public:
//     int n;
//     vector<int> dp; 
    
//     int solve(int in, vector<int>& A, vector<int>& B) {
//         if (in >= n) {
//             return 0;
//         }
        
//         if (dp[in] != -1) {
//             return dp[in];
//         }
        
//         int ans = INT_MAX;
//         ans = min(ans, B[0] + solve(in + 1, A, B));
        
//         int num = in;
//         while (num < n && A[num] <= A[in] + 6) {
//             num++;
//         }
//         ans = min(ans, B[1] + solve(num, A, B));
        
//         int ij = in;
//         while (ij < n && A[ij] <= A[in] + 29) {
//             ij++;
//         }
//         ans = min(ans, B[2] + solve(ij, A, B));
        
//         return dp[in] = ans;
//     }
    
//     int mincostTickets(vector<int>& days, vector<int>& costs) {
//         n = days.size();
//         dp.assign(n, -1);
//         return solve(0, days, costs);
//     }
// };