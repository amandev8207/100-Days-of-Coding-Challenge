// #3151. Special Array I

// An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

// You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.


// class Solution {
// public:
//     bool isArraySpecial(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 1) return true;
        
//         for (int i = 0; i < n - 1; ++i) {
//             if (nums[i] % 2 == nums[i + 1] % 2) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };

// // class Solution {
// // public:
// //     bool isArraySpecial(vector<int>& nums) {
// //         int n = nums.size();
// //         if(n == 1) return true;
        
// //         int i = 0;
// //         while(i < n-1){
// //             if(nums[i]%2 != nums[i+1]%2) i++;
// //             else break;
// //         }
// //         if(i == n-1) return true;
// //         return false;
// //     }
// // };