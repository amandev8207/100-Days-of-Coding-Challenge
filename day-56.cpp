// #2415. Reverse Odd Levels of Binary Tree

// Given the root of a perfect binary tree, reverse the node values at each odd level of the tree.

// For example, suppose the node values at level 3 are [2,1,3,4,7,11,29,18], then it should become [18,29,11,7,4,3,1,2].
// Return the root of the reversed tree.

// A binary tree is perfect if all parent nodes have two children and all leaves are on the same level.

// The level of a node is the number of edges along the path between it and the root node.


// class Solution {
// public:
//     TreeNode* reverseOddLevels(TreeNode* root) {
//         queue<TreeNode*> q;
//         q.push(root);
//         bool flag = false;  // Flag to track odd levels
//         while (!q.empty()) {
//             int sz = (int)q.size();  // Number of nodes at the current level
//             vector<TreeNode*> v;
//             // Traverse the current level
//             for (int i = 0; i < sz; i++) {
//                 if (q.front() == NULL) {
//                     q.pop();
//                     continue;
//                 }
//                 v.push_back(q.front());  // Collect nodes of this level
//                 q.push(q.front()->left);  // Add left child
//                 q.push(q.front()->right); // Add right child
//                 q.pop();  // Remove processed node
//             }
//             // Reverse the nodes at odd levels
//             if (flag) {
//                 int L = 0, R = (int)v.size() - 1;
//                 while (L <= R) {
//                     swap(v[L++]->val, v[R--]->val);  // Swap values
//                 }
//             }
//             flag = (!flag);  // Toggle flag for the next level
//         }
//         return root;
//     }
// };