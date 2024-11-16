// #3254. Find the Power of K-Size Subarrays I

// You are given an array of integers nums of length n and a positive integer k.

// The power of an array is defined as:

// Its maximum element if all of its elements are consecutive and sorted in ascending order.
// -1 otherwise.
// You need to find the power of all 
// subarrays
//  of nums of size k.

// Return an integer array results of size n - k + 1, where results[i] is the power of nums[i..(i + k - 1)].


// class Solution {
// public:
//     vector<int> resultsArray(vector<int>& nums, int k) {
//         const int n = nums.size();
//         if (n==1) return nums;
//         vector<int> ans(n-k+1, -1);
//         int len=1;

//         // Initial window
//         for (int r=1; r<k; r++) {
//             if (nums[r]==nums[r-1]+1) len++;
//             else len = 1;
//         }
//         //    cout<<len<<endl;
//         if (len==k) ans[0]=nums[k-1];

//         // Sliding window
//         for (int l=1, r=k; r<n; l++, r++) {
//             if (nums[r]==nums[r-1]+1) len++;
//             else len=1;
//             if (len>=k) ans[l]=nums[r];
//         }
//         return ans;
//     }
// };

// auto init = []() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return 'c';
// }();