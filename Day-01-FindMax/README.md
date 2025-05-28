# Day 1: Find Maximum Number in an Array

## 📜 Problem Statement
Given an array of integers, write a function to find the largest number in the array.

**Example:**
Input: [3, 7, 2, 9, 5]
Output: 9



## 🛠️ Solution
### **Approach**
1. Initialize `max` with the first element of the array.
2. Iterate through the array starting from the second element.
3. Compare each element with `max`:
   - If the current element > `max`, update `max`.
4. Return `max` after the loop ends.

### **Solution Code**
```cpp
#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {3, 7, 2, 9, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "The maximum number is: " << findMax(numbers, size) << endl;
    return 0;
}

⏱️ Time Complexity
O(n): Linear time, where n is the size of the array (we traverse the array once).

🏔️ Space Complexity
O(1): Constant space (only one variable max is used).

📊 Testing the Code
Test Case 1
Input:  [10, 20, 30, 40]
Output: 40
Test Case 2
Input:  [-1, -5, -3]
Output: -1

🚀 How to Run
Compile the code:
g++ findMax.cpp -o findMax
Execute the binary:
./findMax