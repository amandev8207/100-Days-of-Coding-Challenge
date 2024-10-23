// #2641. Cousins in Binary Tree II

// Given the root of a binary tree, replace the value of each node in the tree with the sum of all its cousins' values.

// Two nodes of a binary tree are cousins if they have the same depth with different parents.

// Return the root of the modified tree.

// Note that the depth of a node is the number of edges in the path from the root node to it.

 

// Example 1:


// Input: root = [5,4,9,1,10,null,7]
// Output: [0,0,0,7,7,null,11]
// Explanation: The diagram above shows the initial binary tree and the binary tree after changing the value of each node.
// - Node with value 5 does not have any cousins so its sum is 0.
// - Node with value 4 does not have any cousins so its sum is 0.
// - Node with value 9 does not have any cousins so its sum is 0.
// - Node with value 1 has a cousin with value 7 so its sum is 7.
// - Node with value 10 has a cousin with value 7 so its sum is 7.
// - Node with value 7 has cousins with values 1 and 10 so its sum is 11.
// Example 2:


// Input: root = [3,1,2]
// Output: [0,0,0]
// Explanation: The diagram above shows the initial binary tree and the binary tree after changing the value of each node.
// - Node with value 3 does not have any cousins so its sum is 0.
// - Node with value 1 does not have any cousins so its sum is 0.
// - Node with value 2 does not have any cousins so its sum is 0.


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x, left, right) {}
 * };
 */
// class Solution {
// public:
//     TreeNode* replaceValueInTree(TreeNode* root) {
//         map<TreeNode*, long long> m; // sum of children
//         TreeNode* bigroot = new TreeNode();
//         m[bigroot] = root->val;
        
//         map<TreeNode*, TreeNode*> parent; // node->parent
//         parent[root] = bigroot;
//         vector<long long> levelsum;
//         levelsum.push_back(root->val);
        
//         queue<TreeNode*> q;
//         q.push(root);
        
//         // Calculate the sum of each level and children's sum for each node
//         while (!q.empty()) {
//             int levelSize = q.size();
//             long long thislevelsum = 0;
//             for (int i = 0; i < levelSize; ++i) {
//                 TreeNode* node = q.front();
//                 q.pop();
//                 m[node] = 0;
                
//                 if (node->left) {
//                     m[node] += node->left->val;
//                     parent[node->left] = node;
//                     q.push(node->left);
//                 }
//                 if (node->right) {
//                     m[node] += node->right->val;
//                     parent[node->right] = node;
//                     q.push(node->right);
//                 }
//                 thislevelsum += m[node];
//             }
//             levelsum.push_back(thislevelsum);
//         }

//         int le = 0;
//         q.push(root);

//         // Update each node's value based on the level sum and parent's children sum
//         while (!q.empty()) {
//             int levelSize = q.size();
//             for (int i = 0; i < levelSize; ++i) {
//                 TreeNode* node = q.front();
//                 q.pop();
//                 node->val = levelsum[le] - m[parent[node]];
                
//                 if (node->left) {
//                     q.push(node->left);
//                 }
//                 if (node->right) {
//                     q.push(node->right);
//                 }
//             }
//             le++;
//         }

//         return root;
//     }
// };
 