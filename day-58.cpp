// #2940. Find Building Where Alice and Bob Can Meet

// You are given a 0-indexed array heights of positive integers, where heights[i] represents the height of the ith building.

// If a person is in building i, they can move to any other building j if and only if i < j and heights[i] < heights[j].

// You are also given another array queries where queries[i] = [ai, bi]. On the ith query, Alice is in building ai while Bob is in building bi.

// Return an array ans where ans[i] is the index of the leftmost building where Alice and Bob can meet on the ith query. If Alice and Bob cannot move to a common building on query i, set ans[i] to -1.


// class Solution {
// public:
//     vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
//         int n = heights.size();
//         int queryCount = queries.size();

//         // Initialize the result array with -1 (default for no meeting place)
//         vector<int> result(queryCount, -1);

//         // Deferred queries grouped by the larger index
//         vector<vector<pair<int, int>>> deferredQueries(n);

//         // Min-Heap for processing deferred queries efficiently
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

//         // Step 1: Handle direct cases and defer others
//         for (int queryIndex = 0; queryIndex < queryCount; ++queryIndex) {
//             int aliceStart = queries[queryIndex][0];
//             int bobStart = queries[queryIndex][1];

//             if (aliceStart == bobStart) {
//                 // Alice and Bob are already in the same building
//                 result[queryIndex] = aliceStart;
//             } else if (aliceStart < bobStart && heights[aliceStart] < heights[bobStart]) {
//                 // Alice can directly move to Bob's building
//                 result[queryIndex] = bobStart;
//             } else if (aliceStart > bobStart && heights[aliceStart] > heights[bobStart]) {
//                 // Bob can directly move to Alice's building
//                 result[queryIndex] = aliceStart;
//             } else {
//                 // Defer queries where direct movement isn't possible
//                 int maxHeight = max(heights[aliceStart], heights[bobStart]);
//                 int maxIndex = max(aliceStart, bobStart);
//                 deferredQueries[maxIndex].emplace_back(maxHeight, queryIndex);
//             }
//         }

//         // Step 2: Process buildings in order
//         for (int currentBuilding = 0; currentBuilding < n; ++currentBuilding) {
//             // Process queries in the priority queue for buildings shorter than the current one
//             while (!minHeap.empty() && minHeap.top().first < heights[currentBuilding]) {
//                 int queryIndex = minHeap.top().second;
//                 minHeap.pop();
//                 result[queryIndex] = currentBuilding; // Assign current building index as the answer
//             }

//             // Add deferred queries for the current building to the priority queue
//             for (auto& query : deferredQueries[currentBuilding]) {
//                 minHeap.emplace(query.first, query.second);
//             }
//         }

//         return result;
//     }
// };