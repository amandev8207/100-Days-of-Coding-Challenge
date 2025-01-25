// #2948. Make Lexicographically Smallest Array by Swapping Elements

// You are given a 0-indexed array of positive integers nums and a positive integer limit.

// In one operation, you can choose any two indices i and j and swap nums[i] and nums[j] if |nums[i] - nums[j]| <= limit.

// Return the lexicographically smallest array that can be obtained by performing the operation any number of times.

// An array a is lexicographically smaller than an array b if in the first position where a and b differ, array a has an element that is less than the corresponding element in b. For example, the array [2,10,3] is lexicographically smaller than the array [10,2,3] because they differ at index 0 and 2 < 10.

 


// class Solution {
// public:
//     static vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
//         const int n = nums.size();
//         vector<int> idx(n, 0);
//         iota(idx.begin(), idx.end(), 0);  // Initialize indices
        
//         // Sort indices based on values in nums
//         stable_sort(idx.begin(), idx.end(), [&](int i, int j) {
//             return nums[i] < nums[j];
//         });

//         vector<vector<int>> group = {{idx[0]}};
//         int prev = nums[idx[0]];

//         // Create groups based on the limit condition
//         for (int i = 1; i < n; i++) {
//             int I = idx[i], x = nums[I];
//             if (x - prev <= limit) 
//                 group.back().push_back(I);
//              else 
//                 group.push_back({I});
//             prev = x;
//         }

//         // Sort indices within each group and assign values to nums
//         for (auto& seq : group) {
//             vector<int> values;
//             for (int index : seq) 
//                 values.push_back(nums[index]);

//             sort(seq.begin(), seq.end());  
//             for (int i = 0; i < seq.size(); i++) {
//                 nums[seq[i]] = values[i];
//             }
//         }

//         return nums;
//     }
// };