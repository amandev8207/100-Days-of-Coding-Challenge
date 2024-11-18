// #1652. Defuse the Bomb

// You have a bomb to defuse, and your time is running out! Your informer will provide you with a circular array code of length of n and a key k.

// To decrypt the code, you must replace every number. All the numbers are replaced simultaneously.

// If k > 0, replace the ith number with the sum of the next k numbers.
// If k < 0, replace the ith number with the sum of the previous k numbers.
// If k == 0, replace the ith number with 0.
// As code is circular, the next element of code[n-1] is code[0], and the previous element of code[0] is code[n-1].

// Given the circular array code and an integer key k, return the decrypted code to defuse the bomb!

// class Solution {
// public:
//     vector<int> decrypt(vector<int>& code, int k) {
//         int n=code.size();
//         vector<int> ans(n, 0);
//         if (k==0) return ans;
//         if (k>0){
//             int wsum=accumulate(code.begin()+1, code.begin()+k+1, 0);
//             ans[0]=wsum;
//             for(int l=1, r=k+1; l<n ; r++, l++){
//                 wsum+=-code[l]+code[r%n];
//                 ans[l]=wsum;
//             }
//             return ans;
//         }
//         // k<0
//         k=-k;
//         int wsum=accumulate(code.end()-k , code.end(), 0);
//         ans[0]=wsum;
//         for(int r=0, l=n-k; r<n-1; r++, l++){
//             wsum+=-code[l%n]+code[r];
//             ans[r+1]=wsum;
//         }
//         return ans;
//     }
// };