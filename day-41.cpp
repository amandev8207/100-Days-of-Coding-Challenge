// #2337. Move Pieces to Obtain a String

// You are given two strings start and target, both of length n. Each string consists only of the characters 'L', 'R', and '_' where:

// The characters 'L' and 'R' represent pieces, where a piece 'L' can move to the left only if there is a blank space directly to its left, and a piece 'R' can move to the right only if there is a blank space directly to its right.
// The character '_' represents a blank space that can be occupied by any of the 'L' or 'R' pieces.
// Return true if it is possible to obtain the string target by moving the pieces of the string start any number of times. Otherwise, return false.


// class Solution {
// public:
//     static bool canChange(string& s, string& t) {
//         const int n=s.size();
//         for(int i=0, j=0; i<n || j<n; i++, j++){
//             while(i<n && s[i]=='_') i++;
//             while(j<n && t[j]=='_') j++;
//         //    cout<<i<<", "<<j<<endl;
//             char c=s[i];
//             if (c !=t[j]) return 0;
//             if (c =='L' && i<j) return 0;
//             if (c =='R' && i>j) return 0;
//         }
//         return 1;
//     }
// };



// auto init = []() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return 'c';
// }();