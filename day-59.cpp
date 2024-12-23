// #2471. Minimum Number of Operations to Sort a Binary Tree by Level

// You are given the root of a binary tree with unique values.

// In one operation, you can choose any two nodes at the same level and swap their values.

// Return the minimum number of operations needed to make the values at each level sorted in a strictly increasing order.

// The level of a node is the number of edges along the path between it and the root node





// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int minSwaps(vector<int>& arr) {
//         int n = arr.size(), count = 0;
//         vector<pair<int, int>> vec;
//         for (int i = 0; i < n; i++) {
//             vec.push_back({arr[i], i});
//         }
//         sort(vec.begin(), vec.end());
//         for (int i = 0; i < n; i++) {
//             if (vec[i].first != arr[i]) {
//                 swap(vec[vec[i].second], vec[i]);
//                 i--;
//                 count++;
//             }
//         }
//         return count;
//     }

//     int minimumOperations(TreeNode* root) {
//         queue<TreeNode*> q;
//         q.push(root);
//         int ans = 0;
//         while (!q.empty()) {
//             int size = q.size();
//             vector<int> vec;
//             for (int i = 0; i < size; i++) {
//                 TreeNode* curr = q.front();
//                 q.pop();
//                 vec.push_back(curr->val);
//                 if (curr->left) q.push(curr->left);
//                 if (curr->right) q.push(curr->right);
//             }
//             ans += minSwaps(vec);
//         }
//         return ans;
//     }
// };