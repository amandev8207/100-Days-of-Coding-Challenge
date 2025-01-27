// #1462. Course Schedule IV

// There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course ai first if you want to take course bi.

// For example, the pair [0, 1] indicates that you have to take course 0 before you can take course 1.
// Prerequisites can also be indirect. If course a is a prerequisite of course b, and course b is a prerequisite of course c, then course a is a prerequisite of course c.

// You are also given an array queries where queries[j] = [uj, vj]. For the jth query, you should answer whether course uj is a prerequisite of course vj or not.

// Return a boolean array answer, where answer[j] is the answer to the jth query.




// static auto init = [](){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     return nullptr;
// }();

// class Solution {
// public:
//     vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
//         vector<vector<int>> adj(n);
//         for (auto &p : prerequisites) adj[p[0]].push_back(p[1]);
//         vector<bitset<101>> memo(n);
//         vector<bool> visited(n, false);

//         function<void(int)> dfs = [&](int s) {
//             visited[s] = true;
//             for (auto t : adj[s]) {
//                 if (!visited[t]) dfs(t);
//                 memo[s] |= memo[t];
//                 memo[s].set(t);
//             }
//         };

//         for (int i = 0; i < n; ++i) {
//             if (!visited[i]) dfs(i);
//         }

//         vector<bool> ans;
//         ans.reserve(queries.size());
//         for (auto &q : queries) {
//             ans.push_back(memo[q[0]][q[1]]);
//         }
//         return ans;
//     }
// };