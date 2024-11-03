// #2490. Circular Sentence

// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

// For example, "Hello World", "HELLO", "hello world hello world" are all sentences.
// Words consist of only uppercase and lowercase English letters. Uppercase and lowercase English letters are considered different.

// A sentence is circular if:

// The last character of a word is equal to the first character of the next word.
// The last character of the last word is equal to the first character of the first word.
// For example, "leetcode exercises sound delightful", "eetcode", "leetcode eats soul" are all circular sentences. However, "Leetcode is cool", "happy Leetcode", "Leetcode" and "I like Leetcode" are not circular sentences.

// Given a string sentence, return true if it is circular. Otherwise, return false.

// class Solution {
// public:
//     bool isCircularSentence(string sentence) {
//         // Get the length of the sentence
//         int n = sentence.size();

//         // First check: Compare first and last character of sentence
//         // For a circular sentence, they must match
//         if(sentence[0] != sentence[n-1]) return false;

//         // Iterate through the sentence, starting from index 1 to n-2
//         // We don't need to check first and last characters again
//         for(int i=1; i<n-1; i++){
//             // When we find a space character
//             if(sentence[i] == ' '){
//                 // Check if the character before space (last char of current word)
//                 // matches the character after space (first char of next word)
//                 if(sentence[i-1] != sentence[i+1]) return false;
//             }
//         }

//         // If we made it through all checks, the sentence is circular
//         return true;
//     }
// };