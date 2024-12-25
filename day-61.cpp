// 515. Find Largest Value in Each Tree Row
// Solved
// Medium
// Topics
// Companies
// Given the root of a binary tree, return an array of the largest value in each row of the tree (0-indexed).




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
//     vector<int> largestValues(TreeNode* root) {
//         queue<TreeNode*> q;
//         if(root == NULL) return {};
//         q.push(root);
//         vector<int> ans;
//         while(!q.empty()){
//             int size = q.size();
//             int maxi = INT_MIN;
//             while(size--){
//                 auto it = q.front();
//                 q.pop();
//                 maxi = max(maxi, it->val);
//                 if(it->left) q.push(it->left);
//                 if(it->right) q.push(it->right);
//             }
//             ans.push_back(maxi);
//         }
//         return ans;
//     }
// };