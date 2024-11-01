// #1957. Delete Characters to Make Fancy String

// A fancy string is a string where no three consecutive characters are equal.

// Given a string s, delete the minimum possible number of characters from s to make it fancy.

// Return the final string after the deletion. It can be shown that the answer will always be unique.
// class Solution {
// public:
//     string makeFancyString(string s) {
//         string ans = "";
//         ans.push_back(s[0]);
//         int n = s.size(),cnt = 1;
//         for(int i=1;i<n;i++){
//             if(s[i] == ans.back()){
//                 cnt++;
//                 if(cnt < 3)ans.push_back(s[i]);
//             }
//             else{
//                 cnt = 1;
//                 ans.push_back(s[i]);
//             }
//         }
//         return ans;
//     }
// };