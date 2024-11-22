// #1072. Flip Columns For Maximum Number of Equal Rows

// You are given an m x n binary matrix matrix.

// You can choose any number of columns in the matrix and flip every cell in that column (i.e., Change the value of the cell from 0 to 1 or vice versa).

// Return the maximum number of rows that have all values equal after some number of flips.

// class Solution {
// public:
//     int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
//         const int r = matrix.size(), c = matrix[0].size();
//         unordered_map<bitset<300>, int, hash<bitset<300>>> mp;
//         mp.reserve(r);

//         for (int i = 0; i < r; i++) {
//             bitset<300> pattern;
//             bool term0=matrix[i][0];
//             for (int j = 0; j < c; j++) 
//                 pattern[j] = matrix[i][j]^term0;
//             mp[pattern]++;
//         }

//         int max_rows = 0;
//         for (auto& [key, count] : mp)
//             max_rows = max(max_rows, count);

//         return max_rows;
//     }
// };