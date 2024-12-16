// #3264. Final Array State After K Multiplication Operations I

// You are given an integer array nums, an integer k, and an integer multiplier.

// You need to perform k operations on nums. In each operation:

// Find the minimum value x in nums. If there are multiple occurrences of the minimum value, select the one that appears first.
// Replace the selected minimum value x with x * multiplier.
// Return an integer array denoting the final state of nums after performing all k operations.




// #include <vector>
// #include <queue>
// using namespace std;

// class Solution {
// public:
//     vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
//         int n = nums.size();

//         // Min-heap to store pairs of (value, index)
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

//         // Add all elements with their indices to the heap
//         for (int i = 0; i < n; i++) {
//             pq.push({nums[i], i});
//         }

//         // Perform k modifications
//         while (k-- > 0) {
//             auto [val, idx] = pq.top(); // Get the smallest value and its index
//             pq.pop(); // Remove it from the heap

//             nums[idx] = val * multiplier; // Update the value in the array
//             pq.push({nums[idx], idx}); // Push the updated value back to the heap
//         }

//         return nums; // Return the modified array
//     }
// };