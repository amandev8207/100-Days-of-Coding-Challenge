// #3223. Minimum Length of String After Operations


// You are given a string s.

// You can perform the following process on s any number of times:

// Choose an index i in the string such that there is at least one character to the left of index i that is equal to s[i], and at least one character to the right that is also equal to s[i].
// Delete the closest character to the left of index i that is equal to s[i].
// Delete the closest character to the right of index i that is equal to s[i].
// Return the minimum length of the final string s that you can achieve.


// class Solution {
// public:
//     int minimumLength(string s) {
//         int n = s.size(), removableLen = 0;
//         vector<int> freq(26, 0);
//         for (int i = 0; i < n; i++) {
//             freq[s[i] - 'a']++;
//         }
//         for (int i = 0; i < 26; i++) {
//             int frequency = freq[i];
//             if (frequency % 2 != 0)
//                 removableLen += frequency - 1;
//             else if (frequency != 0)
//                 removableLen += frequency - 2;
//         }
//         return n - removableLen;
//     }
// };   