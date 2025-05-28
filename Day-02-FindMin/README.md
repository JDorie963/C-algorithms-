# Day 2: Find Minimum in Array Algorithm

## 📖 Description
This C++ implementation finds the smallest element in an integer array using an efficient linear search approach. It serves as a counterpart to the "Find Maximum" algorithm from Day 1.

## 🚀 Features
- **Linear Time Complexity** (O(n)) - Efficiently scans array once
- **Edge Case Handling** - Clear error handling for empty arrays
- **Template Version** - Supports generic data types (see bonus section)
- **Clean Interface** - Simple, self-documenting code structure

## 🧮 Algorithm Logic
```plaintext
1. Initialize min with first array element
2. Iterate through remaining elements:
   a. Compare current element with min
   b. Update min if current element is smaller
3. Return final min value


📝 Code Implementation
#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    if (size == 0) {
        cerr << "Error: Empty array!" << endl;
        return INT_MIN; // Requires #include <climits>
    }
    
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int numbers[] = {369, 97, 43, 10, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Min number: " << findMin(numbers, size) << endl;
    return 0;
}



📊 Complexity Analysis
Metric	Value	Explanation
Time	O(n)	Single array traversal
Space	O(1)	Constant extra space
Comparisons	n-1	Worst case: all elements checked



🧪 Test Cases
Test 1: [5, 2, 9, 1, 5] → 1
Test 2: [-3, -10, -2] → -10
Test 3: [42] → 42
Test 4: [] → Error (handled)


🎛️ How to Run
Compile:
g++ find_min.cpp -o find_min
Execute:
./find_min
Expected Output:
Min number: 3