#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {3, 10, 43, 97, 369};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Max number: " << findMax(numbers, size) << endl;
    return 0;
}