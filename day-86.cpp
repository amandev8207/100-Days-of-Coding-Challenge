// #2661. First Completely Painted Row or Column

// You are given a 0-indexed integer array arr, and an m x n integer matrix mat. arr and mat both contain all the integers in the range [1, m * n].

// Go through each index i in arr starting from index 0 and paint the cell in mat containing the integer arr[i].

// Return the smallest index i at which either a row or a column will be completely painted in ma



// class Solution {
// public:
//     int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
//         const int m=mat.size(), n=mat[0].size(), N=m*n;
//         vector<int> idx(N+1);
//         for(int i=0; i<N; i++)
//             idx[arr[i]]=i;

//         vector<int> to_i(N), to_j(N);
//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 int pos=idx[mat[i][j]];
//                 to_i[pos]=i;
//                 to_j[pos]=j;
//             }
//         }
//         vector<int> row(m), col(n);
//         for(int i=0; i<N; i++){
//             int pos=idx[arr[i]];
//             if (++row[to_i[pos]]==n || ++col[to_j[pos]]==m) return i;
//         }
//         return -1;
//     }
// };