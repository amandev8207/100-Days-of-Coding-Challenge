// #3133. Minimum Array End

// You are given two integers n and x. You have to construct an array of positive integers nums of size n where for every 0 <= i < n - 1, nums[i + 1] is greater than nums[i], and the result of the bitwise AND operation between all elements of nums is x.

// Return the minimum possible value of nums[n - 1].
// class Solution {
// public:
//     long long minEnd(int n, int x) {
//         bitset<64> X(x), N(n-1), ans=0;
//         for(int i=0, j=0; i<56; i++){
//             ans[i]=(X[i])?1:N[j++];
//         }
//         return ans.to_ullong();
//     }
// };
 