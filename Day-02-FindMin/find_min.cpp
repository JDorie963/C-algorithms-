#include <iostream>
using namespace std;

int findMin (int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int numbers[] {369, 97, 43, 10 ,693};
    int size  = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Min number: " << findMin(numbers, size) << endl;
    return 0;
}