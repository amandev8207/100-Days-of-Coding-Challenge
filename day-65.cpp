// #1639. Number of Ways to Form a Target String Given a Dictionary
// You are given a list of strings of the same length words and a string target.

// Your task is to form target using the given words under the following rules:

// target should be formed from left to right.
// To form the ith character (0-indexed) of target, you can choose the kth character of the jth string in words if target[i] = words[j][k].
// Once you use the kth character of the jth string of words, you can no longer use the xth character of any string in words where x <= k. In other words, all characters to the left of or at index k become unusuable for every string.
// Repeat the process until you form the string target.
// Notice that you can use multiple characters from the same string in words provided the conditions above are met.

// Return the number of ways to form target from words. Since the answer may be too large, return it modulo 109 + 7.






// class Solution {
// public:
//     const int MOD = 1e9 + 7;

//     int numWays(vector<string>& words, string target) {
//         int n = words[0].size();
//         int m = target.size();

//         vector<unordered_map<char, int>> freq(n);

//         for (const string& word : words) {
//             for (int i = 0; i < n; i++) {
//                 freq[i][word[i]]++;
//             }
//         }

//         vector<vector<int>> memo(n + 1, vector<int>(m + 1, -1));

//         function<int(int, int)> traverse = [&](int level, int index) -> int {
//             if (index == m) return 1;
//             if (level == n) return 0;

//             if (memo[level][index] != -1) return memo[level][index];

//             int ways = traverse(level + 1, index);

//             if (freq[level].count(target[index])) {
//                 long long count = freq[level][target[index]];
//                 ways = (ways + count * traverse(level + 1, index + 1)) % MOD;
//             }

//             return memo[level][index] = ways;
//         };

//         return traverse(0, 0);
//     }
// };