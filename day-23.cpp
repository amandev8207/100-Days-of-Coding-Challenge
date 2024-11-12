// #2070. Most Beautiful Item for Each Query

// You are given a 2D integer array items where items[i] = [pricei, beautyi] denotes the price and beauty of an item respectively.

// You are also given a 0-indexed integer array queries. For each queries[j], you want to determine the maximum beauty of an item whose price is less than or equal to queries[j]. If no such item exists, then the answer to this query is 0.

// Return an array answer of the same length as queries where answer[j] is the answer to the jth query.


// class Solution {
// public:
//     static vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
//         sort(items.begin(), items.end()); // Sort items by price
//         const int n = items.size(), m = queries.size();

//         vector<int> mostBeauty(n);
//         mostBeauty[0] = items[0][1];

//         // Build up the mostBeauty array
//         for (int i = 1; i < n; i++)
//             mostBeauty[i] = max(mostBeauty[i-1], items[i][1]);

//         vector<int> ans(m);
//         for (int i = 0; i < m; i++) {
//             int query = queries[i];
//             vector<int>&& target={query, INT_MAX};
//             // Use upper_bound to find the first item with a price > query
//             int j = upper_bound(items.begin(), items.end(), target)-items.begin();
//             // If j is 0, no items have price <= query
//             if (j == 0) ans[i] = 0;
//             else ans[i] = mostBeauty[j - 1];
//         }

//         return ans;
//     }
// };