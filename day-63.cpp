// #1014. Best Sightseeing Pair

// You are given an integer array values where values[i] represents the value of the ith sightseeing spot. Two sightseeing spots i and j have a distance j - i between them.

// The score of a pair (i < j) of sightseeing spots is values[i] + values[j] + i - j: the sum of the values of the sightseeing spots, minus the distance between them.

// Return the maximum score of a pair of sightseeing spots.





// class Solution {
// public:
//     int maxScoreSightseeingPair(vector<int>& values) {
//         int n = values.size();
//         vector<int> leftMax(n), rightMax(n);

//         // Compute leftMax array
//         leftMax[0] = values[0];
//         for (int i = 1; i < n; i++) {
//             leftMax[i] = max(leftMax[i - 1], values[i] + i);
//         }

//         // Compute rightMax array
//         rightMax[n - 1] = values[n - 1] - (n - 1);
//         for (int i = n - 2; i >= 0; i--) {
//             rightMax[i] = max(rightMax[i + 1], values[i] - i);
//         }

//         // Compute the maximum score
//         int maxi = 0;
//         for (int i = 1; i < n; i++) {
//             maxi = max(maxi, leftMax[i - 1] + rightMax[i]);
//         }

//         return maxi;
//     }
// };