// #1267. Count Servers that Communicate

// You are given a map of a server center, represented as a m * n integer matrix grid, where 1 means that on that cell there is a server and 0 means that it is no server. Two servers are said to communicate if they are on the same row or on the same column.

// Return the number of servers that communicate with any other server.



// class Solution {
// public:
//     int countServers(vector<vector<int>>& grid) {
//         const int m=grid.size(), n=grid[0].size();
//         int row[250]={0}, col[250]={0}, cnt=0;
//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 if (grid[i][j]){
//                     cnt++;
//                     row[i]++;
//                     col[j]++;
//                 }
//             }
//         }
//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 if (grid[i][j]&& row[i]==1 && col[j]==1){
//                     cnt--;
//                 }
//             }
//         }
//         return cnt;
//     }
// };