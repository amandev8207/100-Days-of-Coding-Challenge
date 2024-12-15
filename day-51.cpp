// #1792. Maximum Average Pass Ratio

// There is a school that has classes of students and each class will be having a final exam. You are given a 2D integer array classes, where classes[i] = [passi, totali]. You know beforehand that in the ith class, there are totali total students, but only passi number of students will pass the exam.

// You are also given an integer extraStudents. There are another extraStudents brilliant students that are guaranteed to pass the exam of any class they are assigned to. You want to assign each of the extraStudents students to a class in a way that maximizes the average pass ratio across all the classes.

// The pass ratio of a class is equal to the number of students of the class that will pass the exam divided by the total number of students of the class. The average pass ratio is the sum of pass ratios of all the classes divided by the number of the classes.

// Return the maximum possible average pass ratio after assigning the extraStudents students. Answers within 10-5 of the actual answer will be accepted.





// class Solution {
// public:
//     double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {

//         int n = classes.size();
//         double total = 0;
//         // Create a heap to store the profit for each class along with the current pass and total student counts
//         vector<tuple<double, int, int>> heap;

//         // Populate the heap with initial values and calculate the total pass ratio
//         for (int i = 0; i < n; i++) 
//         {
//             int pass = classes[i][0], totalStudents = classes[i][1];
//             // Add the pass ratio for the current class to the total
//             total += (double)pass / totalStudents;
//             // Calculate the potential increment in pass ratio by adding 1 extra student
//             heap.push_back(make_tuple(CalculateProfit(pass, totalStudents), pass, totalStudents));
//         }

//         // Build the heap to prioritize the class with the highest profit
//         MakeHeap(heap);

//         // Assign extra students to the classes with the highest potential profit
//         while (extraStudents-- > 0) 
//         {
//             auto [maxIncrement, pass, totalStudents] = heap[0];

//             // If there is no increment possible, break
//             if (maxIncrement <= 0)
//             break;

//             total += maxIncrement;
//             pass++;
//             totalStudents++;
//             // Recalculate the new increment profit after adding a student
//             heap[0] = make_tuple(CalculateProfit(pass, totalStudents), pass, totalStudents);
//             // Reheapify the heap to maintain the heap property
//             HeapifyDown(heap, 0);
//         }

//         // Calculate and return the average pass ratio across all classes
//         return total / n;
//     }

// private:
//     // Calculate the profit, increase in pass ratio when adding a student to a class
//     double CalculateProfit(int pass, int total) {

//         double current_pass = (double)pass / total;
//         double new_pass = (double)(pass + 1) / (total + 1);

//         return new_pass - current_pass;
//     }

//     // Build the max heap by reheapifying from the bottom to the top
//     void MakeHeap(vector<tuple<double, int, int>>& heap) {

//         // Start from the last non-leaf node and heapify upwards
//         for (int i = heap.size() / 2 - 1; i >= 0; i--) 
//         {
//             HeapifyDown(heap, i);
//         }
//     }

//     // Heapify the heap from index i downwards to ensure the heap property is maintained
//     void HeapifyDown(vector<tuple<double, int, int>>& heap, int i) {

//         int size = heap.size();

//         while (true) 
//         {
//             int largest = i;
//             int left = 2 * i + 1;
//             int right = 2 * i + 2;

//             // If left child exists and has a larger increment
//             if (left < size && get<0>(heap[left]) > get<0>(heap[largest])) 
//             {
//                 largest = left;
//             }
//             // If right child exists and has a larger increment
//             if (right < size && get<0>(heap[right]) > get<0>(heap[largest])) 
//             {
//                 largest = right;
//             }
//             // If the largest value is already at i, the heap property is satisfied
//             if (largest == i)
//             break;

//             // Swap the current node with the largest child
//             swap(heap[i], heap[largest]);
//             // Move to the child
//             i = largest;
//         }
//     }
// };