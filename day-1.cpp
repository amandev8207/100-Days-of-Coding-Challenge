// C++ Hello World
// Let's begin your journey towards coding with the very first question of the coding world. Your task is to write code that prints Hello World.

// Example 1:

// Input:
// No Input
// Output:
// Hello World
// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

// Your Task:
// In the function helloWorld(), output a line "Hello World" (without quotes).

#include <iostream>  // Include the iostream library

using  namespace std;  // Use the standard namespace

class Solution {
  public:
    void helloWorld() {
        cout << "Hello World";  // Print "Hello World"
    }
};

int main() {
    Solution sol;  // Create an object of the Solution class
    sol.helloWorld();  // Call the helloWorld method
    return 0;
}
