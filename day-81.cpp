// #2429. Minimize XOR

// Given two positive integers num1 and num2, find the positive integer x such that:

// x has the same number of set bits as num2, and
// The value x XOR num1 is minimal.
// Note that XOR is the bitwise XOR operation.

// Return the integer x. The test cases are generated such that x is uniquely determined.

// The number of set bits of an integer is the number of 1's in its binary representation.




// class Solution {
// public:
//     int minimizeXor(int num1, int num2) {
//         int countBitsNum2 = 0, temp2 = num2;
//         while (temp2 > 0) {
//             if (temp2 % 2 != 0)
//                 countBitsNum2++;
//             temp2 = temp2 >> 1;
//         }
//         int res = 0;
//         for (int i = 31; i > 0 && countBitsNum2 > 0; i--) {
//             if (num1 & (1 << i)) {
//                 res |= (1 << i);
//                 countBitsNum2--;
//             }
//         }
//         for (int i = 0; i < 32 && countBitsNum2 > 0; i++) {
//             if (!(res & (1 << i))) {
//                 res |= (1 << i);
//                 countBitsNum2--;
//             }
//         }
//         return res;
//     }
// };