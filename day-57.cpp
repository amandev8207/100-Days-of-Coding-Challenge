// #2872. Maximum Number of K-Divisible Components

// There is an undirected tree with n nodes labeled from 0 to n - 1. You are given the integer n and a 2D integer array edges of length n - 1, where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

// You are also given a 0-indexed integer array values of length n, where values[i] is the value associated with the ith node, and an integer k.

// A valid split of the tree is obtained by removing any set of edges, possibly empty, from the tree such that the resulting components all have values that are divisible by k, where the value of a connected component is the sum of the values of its nodes.




// class Solution {
//     int k, ans;
//     vector<vector<int>> adj;
//     vector<int> values;
//     vector<long long> sum;

//     void dfs(int u, int p) {
//         sum[u] = values[u];
//         for (int v : adj[u]) {
//             if (v == p)
//                 continue;
//             dfs(v, u);
//             sum[u] += sum[v];
//         }
//         if (sum[u] % k == 0) {
//             ans++;
//             sum[u] = 0;
//         }
//     }

// public:
//     int maxKDivisibleComponents(int n, vector<vector<int>>& edges,
//                                 vector<int>& values, int k) {
//         adj.resize(n);
//         sum.resize(n);
//         for (auto& e : edges) {
//             adj[e[0]].push_back(e[1]);
//             adj[e[1]].push_back(e[0]);
//         }
//         this->values = values;
//         this->k = k;

//         ans = 0;
//         dfs(0, -1);
//         return ans;
//     }
// };