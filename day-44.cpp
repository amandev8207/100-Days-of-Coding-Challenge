
// #2054. Two Best Non-Overlapping Events

// You are given a 0-indexed 2D integer array of events where events[i] = [startTimei, endTimei, valuei]. The ith event starts at startTimei and ends at endTimei, and if you attend this event, you will receive a value of valuei. You can choose at most two non-overlapping events to attend such that the sum of their values is maximized.

// Return this maximum sum.

// Note that the start time and end time is inclusive: that is, you cannot attend two events where one of them starts and the other ends at the same time. More specifically, if you attend an event with end time t, the next event must start at or after t + 1.




// #include <vector>
// #include <queue>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     int maxTwoEvents(vector<vector<int>>& events) {
//         sort(events.begin(), events.end()); // Sort events by start time
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
//         int maxVal = 0, ans = 0;

//         for (auto& event : events) {
//             int start = event[0], end = event[1], value = event[2];

//             // Remove events that end before the current event's start time
//             while (!pq.empty() && pq.top().first < start) {
//                 maxVal = max(maxVal, pq.top().second);
//                 pq.pop();
//             }

//             // Update the maximum sum of values
//             ans = max(ans, maxVal + value);

//             // Add the current event to the priority queue
//             pq.push({end, value});
//         }

//         return ans;
//     }
// };