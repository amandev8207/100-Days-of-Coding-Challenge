// #2182. Construct String With Repeat Limit

// You are given a string s and an integer repeatLimit. Construct a new string repeatLimitedString using the characters of s such that no letter appears more than repeatLimit times in a row. You do not have to use all characters from s.

// Return the lexicographically largest repeatLimitedString possible.

// A string a is lexicographically larger than a string b if in the first position where a and b differ, string a has a letter that appears later in the alphabet than the corresponding letter in b. If the first min(a.length, b.length) characters do not differ, then the longer string is the lexicographically larger one.





// class Solution {
// public:
//     string repeatLimitedString(string s, int k) {
//         vector<int> freq(26, 0);
//         for (char c : s) freq[c - 'a']++;
        
//         priority_queue<pair<char, int>> pq;
//         for (int i = 0; i < 26; i++) {
//             if (freq[i] > 0) pq.push({'a' + i, freq[i]});
//         }
        
//         string result;
//         while (!pq.empty()) {
//             auto [ch, count] = pq.top(); pq.pop();
//             int used = min(k, count);
//             result.append(used, ch);
//             count -= used;

//             if (count > 0) {
//                 if (pq.empty()) break;
//                 auto [nextCh, nextCount] = pq.top(); pq.pop();
//                 result += nextCh;
//                 nextCount--;

//                 if (nextCount > 0) pq.push({nextCh, nextCount});
//                 pq.push({ch, count});
//             }
//         }
//         return result;
//     }
// };