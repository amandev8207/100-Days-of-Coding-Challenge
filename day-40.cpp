// #2109. Adding Spaces to a String

// You are given a 0-indexed string s and a 0-indexed integer array spaces that describes the indices in the original string where spaces will be added. Each space should be inserted before the character at the given index.

// For example, given s = "EnjoyYourCoffee" and spaces = [5, 9], we place spaces before 'Y' and 'C', which are at indices 5 and 9 respectively. Thus, we obtain "Enjoy Your Coffee".
// Return the modified string after the spaces have been added.


// class Solution {
// public:
//     string addSpaces(string s, vector<int>& spaces) {
//         int len = s.size() + spaces.size();        // Total length of the result
//         string res(len, ' ');                      // Pre-allocate result string
//         int skip = 0, it = 0;                      // Initialize pointers

//         for (int i = 0; i < s.size(); i++) {
//             if (it < spaces.size() && i == spaces[it]) { // Insert space if index matches
//                 it++;
//                 skip++;
//             }
//             res[i + skip] = s[i];                  // Place character in result
//         }

//         return res;
//     }
// };