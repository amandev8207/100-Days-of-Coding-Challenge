// #3163. String Compression III

// Given a string word, compress it using the following algorithm:

// Begin with an empty string comp. While word is not empty, use the following operation:
// Remove a maximum length prefix of word made of a single character c repeating at most 9 times.
// Append the length of the prefix followed by c to comp.
// Return the string comp



// class Solution {
// public:
//     string compressedString(string word) {
//         string comp = "";
//         int cnt = 1, n = word.size();
//         char ch = word[0];
//         for(int i=1;i<n;i++){
//             if(word[i] == ch && cnt < 9)cnt++;
//             else{
//                 comp.push_back(cnt+'0');
//                 comp.push_back(ch);
//                 ch = word[i];
//                 cnt = 1;
//             }
//         }
//         comp.push_back(cnt+'0');
//         comp.push_back(ch);
//         return comp;
//     }
// };