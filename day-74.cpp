// #3042. Count Prefix and Suffix Pairs I

// You are given a 0-indexed string array words.

// Let's define a boolean function isPrefixAndSuffix that takes two strings, str1 and str2:

// isPrefixAndSuffix(str1, str2) returns true if str1 is both a 
// prefix
//  and a 
// suffix
//  of str2, and false otherwise.
// For example, isPrefixAndSuffix("aba", "ababa") is true because "aba" is a prefix of "ababa" and also a suffix, but isPrefixAndSuffix("abc", "abcd") is false.

// Return an integer denoting the number of index pairs (i, j) such that i < j, and isPrefixAndSuffix(words[i], words[j]) is true.





// struct TrieNode {
//     TrieNode* next[26];
//     int count = 0;

//     TrieNode() { fill(next, next+26, (TrieNode*)NULL); }
// /*
//     ~TrieNode() {
//         //    cout<<"Desturctor\n";
//         for (int i = 0; i < 26; ++i) {
//             if (next[i] != NULL) {
//                 delete next[i];
//             }
//         }
//     }
//     */
// };
// class Solution {
// public:
//     int countPrefixSuffixPairs(vector<string>& words) {
//         TrieNode root = TrieNode();
//         int ans = 0;
//         for (string& s : words) {
//             TrieNode* Node=&root;
//             int n = s.size();
//             for (int i = 0; i < n; i++) {
//                 // "ac"->(ac)(ca) "acbac"->(ac)(ca)(bb)(ac)(ca)
//                 int index = s[i] - 'a';
//                 if (Node->next[index] == 0)
//                     Node->next[index] = new TrieNode();
//                 Node = Node->next[index];

//                 index = s[n-1-i] - 'a';
//                 if (Node->next[index] == 0)
//                     Node->next[index] = new TrieNode();
//                 Node = Node->next[index];
//                 ans += Node->count;
//             }
//             Node->count++;
//         }
//         return ans;
//     }
// };