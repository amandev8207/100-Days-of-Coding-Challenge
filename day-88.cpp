// #1765. Map of Highest Peak

// You are given an integer matrix isWater of size m x n that represents a map of land and water cells.

// If isWater[i][j] == 0, cell (i, j) is a land cell.
// If isWater[i][j] == 1, cell (i, j) is a water cell.
// You must assign each cell a height in a way that follows these rules:

// The height of each cell must be non-negative.
// If the cell is a water cell, its height must be 0.
// Any two adjacent cells must have an absolute height difference of at most 1. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).
// Find an assignment of heights such that the maximum height in the matrix is maximized.

// Return an integer matrix height of size m x n where height[i][j] is cell (i, j)'s height. If there are multiple solutions, return any of them.





// class Solution {
// public:
//     vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
//         const int r=isWater.size(), c=isWater[0].size();
//         const int d[5]={0, 1, 0, -1, 0};
//         vector<vector<int>> H(r, vector<int>(c, -1));
//         queue<int> q;
//         for(int i=0; i<r; i++){
//             for(int j=0; j<c; j++){
//                 if (isWater[i][j]){
//                     int idx=(i<<10)+j;
//                     H[i][j]=0;
//                     q.push(idx);
//                 }
//             }
//         }
//         for(int h=0; !q.empty(); h++){
//             int qz=q.size();
//             for(int a=0; a<qz; a++){
//                 int idx=q.front(), i=idx>>10, j=idx&((1<<10)-1);
//                 q.pop();
//                 for(int b=0; b<4; b++){
//                     int s=i+d[b], t=j+d[b+1];
//                     if (s<0||s>=r||t<0||t>=c|| H[s][t]!=-1) continue;
//                     q.push((s<<10)+t);
//                     H[s][t]=h+1;
//                 }
//             }
//         }
//         return H;
//     }
// };