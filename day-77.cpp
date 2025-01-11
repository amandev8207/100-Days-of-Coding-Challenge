// #1400. Construct K Palindrome Strings

// Given a string s and an integer k, return true if you can use all the characters in s to construct k palindrome strings or false otherwise.



// class Solution {
// public:
//     bool canConstruct(string& s, int k) {
//         const int n=s.size();
//         if (n<k) return 0;
//         bitset<26> freq=0;
//         for(char c: s)
//             freq.flip(c-'a');
//         return freq.count()<=k;
//     }
// };