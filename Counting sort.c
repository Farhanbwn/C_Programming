#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to find the maximum value in an array
int findMax(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to perform Counting Sort
void countingSort(int arr[], int n) {
    // Find the maximum value in the array
    int max = findMax(arr, n);

    // Create a count array and initialize all elements to 0
    int *count = (int *)calloc(max + 1, sizeof(int));
    if (count == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Store the count of each element in the count array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Update the original array with sorted values
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }

    // Free the allocated memory
    free(count);
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    countingSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
