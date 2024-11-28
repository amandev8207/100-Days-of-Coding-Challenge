// #2290. Minimum Obstacle Removal to Reach Corner

// You are given a 0-indexed 2D integer array grid of size m x n. Each cell has one of two values:

// 0 represents an empty cell,
// 1 represents an obstacle that may be removed.
// You can move up, down, left, or right from and to an empty cell.

// Return the minimum number of obstacles to remove so you can move from the upper left corner (0, 0) to the lower right corner (m - 1, n - 1).

// using pii = pair<int, int>;
// const int d[] = {0, 1, 0, -1, 0};
// class Solution {
// public:
//     static int minimumObstacles(vector<vector<int>>& g) {
//         const int n = g.size(), m = g[0].size();
//         vector<unsigned> dist(n * m, INT_MAX);
//         deque<pii> q;
//         dist[0] = 0;
//         q.push_front({0, 0});
//         while (!q.empty()) {
//             auto [d1, idx] = q.front();
//             q.pop_front();
//             int i = idx / m, j = idx % m;
//             if (i == n - 1 && j == m - 1) return d1;
//             for (int a = 0; a < 4; ++a) {
//                 int r = i + d[a], c = j + d[a + 1];
//                 if (r < 0 || r >= n || c < 0 || c >= m) continue;
//                 int d2 = d1 + g[r][c], idx2 = r * m + c;
//                 if (d2 < dist[idx2]) {
//                     dist[idx2] = d2;
//                     if (g[r][c] == 0)
//                         q.push_front({d2, idx2});
//                     else
//                         q.push_back({d2, idx2});
//                 }
//             }
//         }
//         return -1;
//     }
// };