// #769. Max Chunks To Make Sorted

// You are given an integer array arr of length n that represents a permutation of the integers in the range [0, n - 1].

// We split arr into some number of chunks (i.e., partitions), and individually sort each chunk. After concatenating them, the result should equal the sorted array.

// Return the largest number of chunks we can make to sort the array.


// class Solution {
// public:
//     int maxChunksToSorted(vector<int>& arr) {
//         vector<int> s = arr;
//         sort(s.begin(), s.end());
//         int c = 0, ind = -1;
//         for (int i = 0; i < arr.size(); i++) {
//             ind = max(ind, int(find(s.begin(), s.end(), arr[i]) - s.begin()));
//             if (ind == i) {
//                 c++;
//             }
//         }
//         return c;
//     }
// };