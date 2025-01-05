// #2381. Shifting Letters II

// You are given a string s of lowercase English letters and a 2D integer array shifts where shifts[i] = [starti, endi, directioni]. For every i, shift the characters in s from the index starti to the index endi (inclusive) forward if directioni = 1, or shift the characters backward if directioni = 0.

// Shifting a character forward means replacing it with the next letter in the alphabet (wrapping around so that 'z' becomes 'a'). Similarly, shifting a character backward means replacing it with the previous letter in the alphabet (wrapping around so that 'a' becomes 'z').

// Return the final string after all such shifts to s are applied.





// class Solution {
// public:
//     string shiftingLetters(string& s, vector<vector<int>>& shifts) {
//         const int n=s.size(), sz=shifts.size();
//         vector<int> apply(n+1, 0);
//         for(int i=0; i<sz; i++){
//             auto& sh=shifts[i];
//             int s=sh[0], e=sh[1]+1, d=sh[2]==1?1:-1;
//             apply[s]+=d;
//             apply[e]-=d;    
//         }
//         partial_sum(apply.begin(), apply.end(), apply.begin());
//         for(int i=0; i<n; i++){
//             char& c=s[i];
//             c=(apply[i]+c-'a')%26+'a';
//             if (c<'a') c+=26; 
//         }
//         return s;  
//     }
// };