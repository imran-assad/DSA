#include <iostream>
#include <string>
using namespace std;

// Function to perform binary search on an array of strings
int binarySearch(string arr[], int size, string target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
            int mid = (low + high) / 2;

        // Compare the middle element with the target
        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    // Sorted array of student names
    string students[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int size = sizeof(students) / sizeof(students[0]);

    // Target string to search for
    string target = "Charlie";
    
    // Perform binary search
    int result = binarySearch(students, size, target);

    // Output the result
    if (result != -1) {
        cout << "Found " << target << " at index " << result << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }

    // Example of searching for another name
    target = "Bob";
    result = binarySearch(students, size, target);

    // Output the result for the new target
    if (result != -1) {
        cout << "Found " << target << " at index " << result << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }
    cout<<1/2;
    

    return 0;
}
