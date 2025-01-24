// #802. Find Eventual Safe States

// There is a directed graph of n nodes with each node labeled from 0 to n - 1. The graph is represented by a 0-indexed 2D integer array graph where graph[i] is an integer array of nodes adjacent to node i, meaning there is an edge from node i to each node in graph[i].

// A node is a terminal node if there are no outgoing edges. A node is a safe node if every possible path starting from that node leads to a terminal node (or another safe node).

// Return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order.





// class Solution {
// public:
//     bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visit,
//              vector<bool>& inStack) {
//         if (inStack[node]) {
//             return true;
//         }
//         if (visit[node]) {
//             return false;
//         }
//         visit[node] = true;
//         inStack[node] = true;
//         for (auto neighbor : adj[node]) {
//             if (dfs(neighbor, adj, visit, inStack)) {
//                 return true;
//             }
//         }
//         inStack[node] = false;
//         return false;
//     }
//     vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
//         int n = graph.size();
//         vector<bool> visit(n), inStack(n);
//         for (int i = 0; i < n; i++) {
//             dfs(i, graph, visit, inStack);
//         }
//         vector<int> safeNodes;
//         for (int i = 0; i < n; i++) {
//             if (!inStack[i]) {
//                 safeNodes.push_back(i);
//             }
//         }
//         return safeNodes;
//     }
// };
