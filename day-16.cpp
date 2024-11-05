// #2914. Minimum Number of Changes to Make Binary String Beautiful

// You are given a 0-indexed binary string s having an even length.

// A string is beautiful if it's possible to partition it into one or more substrings such that:

// Each substring has an even length.
// Each substring contains only 1's or only 0's.
// You can change any character in s to 0 or 1.

// Return the minimum number of changes required to make the string s beautiful.


// class Solution {
// public:
//     int minChanges(const std::string& s) {
//     int count = 0;
//     for (int i = 0; i < s.size() - 1; i += 2) {
//         if (s[i] != s[i + 1]) {
//             count++;
//         }
//     }
//     return count;
// }
// };
// #include <string>

