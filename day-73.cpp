// #1408. String Matching in an Array

// Given an array of string words, return all strings in words that is a substring of another word. You can return the answer in any order.

// A substring is a contiguous sequence of characters within a string


// class Solution {
// public:
//     vector<string> stringMatching(vector<string>& words) {
//         vector<string> ans;  
//         for (int i = 0; i < words.size(); i++) {
//             for (int j = 0; j < words.size(); j++) {
//                 if (i != j && words[j].find(words[i]) != string::npos) {
//                     ans.push_back(words[i]);
//                     break; 
//                 }
//             }
//         }
//         return ans;
//     }
// };