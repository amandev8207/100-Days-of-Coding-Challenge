// #2558. Take Gifts From the Richest Pile

// You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

// Choose the pile with the maximum number of gifts.
// If there is more than one pile with the maximum number of gifts, choose any.
// Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
// Return the number of gifts remaining after k seconds.


// class Solution {
// public:
//     long long pickGifts(vector<int>& g, int k) {
//         // Create max-heap
//         make_heap(g.begin(), g.end());
//         for (int i = 0, x = INT_MAX; i < k && x > 1; i++) {
//             // Pop max element
//             pop_heap(g.begin(), g.end());
//             x = g.back();
//             // Update element
//             g.back() = sqrt(g.back());
//             push_heap(g.begin(), g.end());
//         }
//         // Return sum
//         return accumulate(g.begin(), g.end(), 0LL);
//     }
// };
        