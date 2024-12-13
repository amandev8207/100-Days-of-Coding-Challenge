// #2593. Find Score of an Array After Marking All Elements

// You are given an array nums consisting of positive integers.

// Starting with score = 0, apply the following algorithm:

// Choose the smallest integer of the array that is not marked. If there is a tie, choose the one with the smallest index.
// Add the value of the chosen integer to score.
// Mark the chosen element and its two adjacent elements if they exist.
// Repeat until all the array elements are marked.
// Return the score you get after applying the above algorithm.


// class Solution {
// public:
//     long long findScore(vector<int>& nums) {
//         long long score = 0; // Change to long long to avoid overflow
//         int n = nums.size();
//         deque<int> q;

//         // Traverse through the array
//         for (int i = 0; i < n; i++) {
//             // If queue is not empty and the current number is greater than or equal to the last in queue
//             if (!q.empty() && nums[i] >= q.back()) {
//                 bool skip = false;
//                 // Process the elements in the queue
//                 while (!q.empty()) {
//                     int add = q.back();
//                     q.pop_back();
//                     if (!skip) {
//                         score += add;
//                     }
//                     skip = !skip;
//                 }
//                 continue;
//             }

//             // Add current element to the queue
//             q.push_back(nums[i]);
//         }

//         // Final processing of remaining elements in the queue
//         bool skip = false;
//         while (!q.empty()) {
//             int add = q.back();
//             q.pop_back();
//             if (!skip) {
//                 score += add;
//             }
//             skip = !skip;
//         }

//         return score;
//     }
// };