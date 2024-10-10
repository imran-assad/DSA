#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i; // Assume the minimum is the first element

        // Find the index of the minimum element in the remaining unsorted array
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j; // Update the index of the minimum element
            }
        }

        // Swap the found minimum element with the first element of the unsorted array
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {4, 5, 1, 24, 6, 7, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size); // Sort the array

    cout << "The sorted array is: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl;

    return 0;
}
