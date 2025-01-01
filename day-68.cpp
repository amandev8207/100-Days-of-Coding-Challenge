// #1422. Maximum Score After Splitting a String

// Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).

// The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring





// class Solution {
// public:
//     int maxScore(string s) {
//         int ans = 0;
//         int n = s.size();

//         int zero = 0;
//         for(int i=0; i<n-1; i++){
//             if(s[i] == '0') zero++;
//             int one=0;
//             for(int j = i+1; j<n; j++){
//                 if(s[j] == '1'){
//                     one++;
//                 }
//             }
//             ans = max(ans, one+zero);
//         }
//         return ans;
//     }
// };