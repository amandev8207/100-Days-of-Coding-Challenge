// #2657. Find the Prefix Common Array of Two Arrays

// You are given two 0-indexed integer permutations A and B of length n.

// A prefix common array of A and B is an array C such that C[i] is equal to the count of numbers that are present at or before the index i in both A and B.

// Return the prefix common array of A and B.

// A sequence of n integers is called a permutation if it contains all integers from 1 to n exactly once.





// class Solution {
// public:
//     vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
//         int n = A.size();
//         unordered_set<int> seen; 
//         vector<int> C(n, 0);
//         int commonCount{0};
//         for (int i{0}; i < n; ++i) {
//             if (seen.count(A[i])) ++commonCount;
//             else seen.insert(A[i]);
//             if (seen.count(B[i])) ++commonCount;
//             else seen.insert(B[i]);
//             C[i] = commonCount;
//         }
//         return C;
//     }
// };