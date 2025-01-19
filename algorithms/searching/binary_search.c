#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int size, int target) {
    // Initializing the left and right pointers for the search range
    int left = 0, right = size - 1;

    // Loop continues as long as the search range is valid (left <= right)
    while (left <= right) {
        // Calculate the mid index to avoid overflow
        int mid = left + (right - left) / 2;

        // Check if the target is found at the mid index
        if (arr[mid] == target) {
            return mid;  // Target found, return the index
        }

        // If target is greater than mid element, search the right half
        if (arr[mid] < target) {
            left = mid + 1;  // Narrow the search to the right part
        }
        // If target is smaller than mid element, search the left half
        else {
            right = mid - 1;  // Narrow the search to the left part
        }
    }

    // If the target is not found, return -1
    return -1;
}

int main() {
    // Example sorted array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // Target element to search for
    int target = 5;

    // Call binarySearch function and store the result
    int result = binarySearch(arr, sizeof(arr) / sizeof(arr[0]), target);

    // Print the result based on whether the target was found
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
