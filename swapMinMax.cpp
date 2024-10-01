#include <iostream>
using namespace std;

void swapMinMax(int array[], int size) {
    if (size <= 0) {
        cout << "Array is empty." << endl;
        return;
    }

    int minIndex = 0;
    int maxIndex = 0;

    // Find the indices of the minimum and maximum elements
    for (int i = 1; i < size; i++) {
        if (array[i] < array[minIndex]) {
            minIndex = i; // Update minIndex if current element is smaller
        }
        if (array[i] > array[maxIndex]) {
            maxIndex = i; // Update maxIndex if current element is larger
        }
    }

    // Swap the minimum and maximum elements
    swap(array[minIndex], array[maxIndex]);
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {5, 3, 8, 1, 9, 2};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original array: ";
    printArray(array, size);

    swapMinMax(array, size); // Call the function to swap min and max

    cout << "Array after swapping min and max: ";
    printArray(array, size); // Print the modified array

    return 0;
}
