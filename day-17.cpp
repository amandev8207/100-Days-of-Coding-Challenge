// #3011. Find if Array Can Be Sorted

// You are given a 0-indexed array of positive integers nums.

// In one operation, you can swap any two adjacent elements if they have the same number of 
// set bits
// . You are allowed to do this operation any number of times (including zero).

// Return true if you can sort the array, else return false.

// class Solution {
// public:
//     static bool canSortArray(const vector<int> &nums) {
//         const uint8_t n = nums.size();
//         uint16_t pmax = 0, cmin = 0, cmax = 0;
//         uint8_t pcnt = 0;
//         for (const uint16_t v : nums) {
//             if (const uint8_t ccnt = popcount(v); pcnt == ccnt) {
//                 cmin = min(cmin, v);
//                 cmax = max(cmax, v);
//             } else if (cmin < pmax) {
//                 return false;
//             } else {
//                 pmax = cmax;
//                 cmin = cmax = v;
//                 pcnt = ccnt;
//             }
//         }
//         return cmin >= pmax;
//     }
// };