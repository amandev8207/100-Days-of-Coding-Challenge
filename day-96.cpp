// #2493. Divide Nodes Into the Maximum Number of Groups

// You are given a positive integer n representing the number of nodes in an undirected graph. The nodes are labeled from 1 to n.

// You are also given a 2D integer array edges, where edges[i] = [ai, bi] indicates that there is a bidirectional edge between nodes ai and bi. Notice that the given graph may be disconnected.

// Divide the nodes of the graph into m groups (1-indexed) such that:

// Each node in the graph belongs to exactly one group.
// For every pair of nodes in the graph that are connected by an edge [ai, bi], if ai belongs to the group with index x, and bi belongs to the group with index y, then |y - x| = 1.
// Return the maximum number of groups (i.e., maximum m) into which you can divide the nodes. Return -1 if it is impossible to group the nodes with the given conditions.

 

//  class Solution {
// public:
//     int magnificentSets(int n, vector<vector<int>>& edges) {
//         vector<vector<int>> adj(n + 1);
//         for (auto& e : edges) {
//             adj[e[0]].push_back(e[1]);
//             adj[e[1]].push_back(e[0]);
//         }

//         vector<bool> visited(n + 1, false);
//         vector<vector<int>> components;

//         // Check bipartition and collect components
//         for (int u = 1; u <= n; ++u) {
//             if (!visited[u]) {
//                 queue<int> q;
//                 q.push(u);
//                 visited[u] = true;
//                 vector<int> component;
//                 component.push_back(u);
//                 vector<int> color(n + 1, -1);
//                 color[u] = 0;
//                 bool is_bipartite = true;

//                 while (!q.empty()) {
//                     int v = q.front();
//                     q.pop();

//                     for (int neighbor : adj[v]) {
//                         if (!visited[neighbor]) {
//                             visited[neighbor] = true;
//                             component.push_back(neighbor);
//                             color[neighbor] = color[v] ^ 1;
//                             q.push(neighbor);
//                         } else if (color[neighbor] == color[v]) {
//                             is_bipartite = false;
//                         }
//                     }
//                 }

//                 if (!is_bipartite) {
//                     return -1;
//                 }

//                 components.push_back(component);
//             }
//         }

//         int total = 0;
//         for (auto& comp : components) {
//             int max_diameter = 0;
//             for (int u : comp) {
//                 vector<int> dist(n + 1, -1);
//                 queue<int> q;
//                 q.push(u);
//                 dist[u] = 0;
//                 int current_max = 0;

//                 while (!q.empty()) {
//                     int v = q.front();
//                     q.pop();

//                     for (int neighbor : adj[v]) {
//                         if (dist[neighbor] == -1) {
//                             dist[neighbor] = dist[v] + 1;
//                             current_max = max(current_max, dist[neighbor]);
//                             q.push(neighbor);
//                         }
//                     }
//                 }

//                 max_diameter = max(max_diameter, current_max);
//             }

//             total += max_diameter + 1;
//         }

//         return total;
//     }
// };