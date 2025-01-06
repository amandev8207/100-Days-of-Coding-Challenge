// #1769. Minimum Number of Operations to Move All Balls to Each Box
// You have n boxes. You are given a binary string boxes of length n, where boxes[i] is '0' if the ith box is empty, and '1' if it contains one ball.

// In one operation, you can move one ball from a box to an adjacent box. Box i is adjacent to box j if abs(i - j) == 1. Note that after doing so, there may be more than one ball in some boxes.

// Return an array answer of size n, where answer[i] is the minimum number of operations needed to move all the balls to the ith box.

// Each answer[i] is calculated considering the initial state of the boxes.







// class Solution {
// public:
//     static vector<int> minOperations(string& boxes) {
//         const int n = boxes.size();
//         vector<int> ans(n, 0);
//         vector<int> P;

//         //positions of '1's
//         for (int i = 0; i < n; i++) {
//             if (boxes[i]=='1') {
//                 P.push_back(i);
//                 ans[0]+=i; //Initial cost for position 0
//             }
//         }

//         int pz=P.size(), L=0, R=pz;

//         // Calculate answer for the remaining indices
//         for (int i=1, j= 0; i<n; i++) {
//             if (j<pz && i>P[j]) {
//                 L++;
//                 R--;
//                 j++;
//             }
//             ans[i]=ans[i-1]+L-R;
//         }

//         return ans;
//     }
// };