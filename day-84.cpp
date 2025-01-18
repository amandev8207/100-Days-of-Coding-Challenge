// #1368. Minimum Cost to Make at Least One Valid Path in a Grid

// Given an m x n grid. Each cell of the grid has a sign pointing to the next cell you should visit if you are currently in this cell. The sign of grid[i][j] can be:

// 1 which means go to the cell to the right. (i.e go from grid[i][j] to grid[i][j + 1])
// 2 which means go to the cell to the left. (i.e go from grid[i][j] to grid[i][j - 1])
// 3 which means go to the lower cell. (i.e go from grid[i][j] to grid[i + 1][j])
// 4 which means go to the upper cell. (i.e go from grid[i][j] to grid[i - 1][j])
// Notice that there could be some signs on the cells of the grid that point outside the grid.

// You will initially start at the upper left cell (0, 0). A valid path in the grid is a path that starts from the upper left cell (0, 0) and ends at the bottom-right cell (m - 1, n - 1) following the signs on the grid. The valid path does not have to be the shortest.

// You can modify the sign on a cell with cost = 1. You can modify the sign on a cell one time only.

// Return the minimum cost to make the grid have at least one valid path.





// class Solution {
//     int bfs(vector<vector<pair<int, int>>> & adj) {
//         int n = adj.size();
//         deque<pair<int, int>> q;
//         q.push_front({0,0});
//         vector<int> dis(n, 1e9);
//         dis[0] = 0;
//         while(! q.empty()) {
//             auto [curNode, curCost] = q.front();
//             q.pop_front();
//             for(auto it: adj[curNode]) {
//                 auto [nbr, nbrCost] = it;
//                 if(curCost + nbrCost < dis[nbr]) {
//                     dis[nbr] = curCost + nbrCost ;
//                     if (nbrCost == 0) {
//                         q.push_front({nbr, dis[nbr]}); 
//                     } else {
//                         q.push_back({nbr, dis[nbr]}); 
//                     }
//                 }
//             }
//         }
//         return dis[n-1];
//     }


// public:
//     int minCost(vector<vector<int>>& grid) {
//         int n = grid.size(), m = grid[0].size();
//         vector<vector<pair<int, int>>> adj(n*m);
//         int nodeCnt = 0;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(i == n-1 && j == m-1) continue;
//                 if(j+1  < m){
//                     if(grid[i][j] == 1) adj[nodeCnt].push_back({nodeCnt+1, 0});
//                     else adj[nodeCnt].push_back({nodeCnt+1, 1});
//                 }
//                 if(j-1 >= 0){
//                     if(grid[i][j] == 2) adj[nodeCnt].push_back({nodeCnt-1, 0});
//                     else adj[nodeCnt].push_back({nodeCnt-1, 1});
//                 }
//                 if(i+1 < n){
//                     if(grid[i][j] == 3) adj[nodeCnt].push_back({nodeCnt+m, 0});
//                     else adj[nodeCnt].push_back({nodeCnt+m, 1});
//                 }
//                 if(i-1 >= 0){
//                     if(grid[i][j] == 4) adj[nodeCnt].push_back({nodeCnt-m, 0});
//                     else adj[nodeCnt].push_back({nodeCnt-m, 1});
//                 }
//                 nodeCnt++;
//             }
//         }
        
//         int ans = bfs(adj);
//         return ans;
//     }
// };