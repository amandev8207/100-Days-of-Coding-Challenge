// #3152. Special Array II




// An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

// You are given an array of integer nums and a 2D integer matrix queries, where for queries[i] = [fromi, toi] your task is to check that 
// subarray
//  nums[fromi..toi] is special or not.

// Return an array of booleans answer such that answer[i] is true if nums[fromi..toi] is special.




// class Solution {
// public:
//     vector<bool> isArraySpecial(vector<int>& nums,
//                                 vector<vector<int>>& queries) {
//         const int n=nums.size();
//         int prev=nums[0]&1;
//         vector<int> sameParity(n, 0);
        
//         for (int i = 1, j = 0; i < n; i++) {
//             bool x=nums[i]&1;
//             if (x==prev) j++;
//             sameParity[i]=j;
//             prev=x;
//         }
//         const int m=queries.size();
//         vector<bool> ans(m, 0);
//         for (int i=0; i<m; i++){
//             int s=queries[i][0], t=queries[i][1];
//             ans[i]=(sameParity[s]==sameParity[t]);
//         }
//         return ans;
//     }
// };




// auto init = []() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     return 'c';
// }();