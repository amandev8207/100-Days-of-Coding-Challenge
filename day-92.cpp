// #2127. Maximum Employees to Be Invited to a Meeting

// A company is organizing a meeting and has a list of n employees, waiting to be invited. They have arranged for a large circular table, capable of seating any number of employees.

// The employees are numbered from 0 to n - 1. Each employee has a favorite person and they will attend the meeting only if they can sit next to their favorite person at the table. The favorite person of an employee is not themself.

// Given a 0-indexed integer array favorite, where favorite[i] denotes the favorite person of the ith employee, return the maximum number of employees that can be invited to the meeting.



// class Solution {
// public:
//     int maximumInvitations(vector<int>& fav) {
//         int n = fav.size();
//         vector<int> inDeg(n, 0), depth(n, 1);
//         for (int i{0}; i < n; ++i) inDeg[fav[i]]++;
//         queue<int> q;
//         for (int i{0}; i < n; ++i) if (inDeg[i] == 0) q.push(i);
//         while (!q.empty()) {
//             int cur = q.front(); q.pop();
//             int nxt = fav[cur];
//             depth[nxt] = max(depth[nxt], depth[cur] + 1);
//             if (--inDeg[nxt] == 0) q.push(nxt);
//         }
//         int maxCycle{0}, twoCycleSum{0};
//         for (int i{0}; i < n; ++i) {
//             if (inDeg[i] == 0) continue;
//             int len{0}, cur = i;
//             while (inDeg[cur] != 0) {
//                 inDeg[cur]=0;
//                 len++;
//                 cur = fav[cur];
//             }
//             if (len == 2) {
//                 twoCycleSum += depth[i] + depth[fav[i]];
//             } else {
//                 maxCycle = max(maxCycle, len);
//             }
//         }
//         return max(maxCycle, twoCycleSum);
//     }
// };
// static auto init = []() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return nullptr; }();