// SORTING AND SEARCHING
// Demonstrates common sorting and searching algorithms in C

#include <stdio.h>
#include <string.h>

// Bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Quick sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

// Linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    
    printf("Original array: ");
    printArray(numbers, n);
    
    // Bubble sort
    int arr1[7];
    memcpy(arr1, numbers, sizeof(numbers));
    bubbleSort(arr1, n);
    printf("After bubble sort: ");
    printArray(arr1, n);
    
    // Quick sort
    int arr2[7];
    memcpy(arr2, numbers, sizeof(numbers));
    quickSort(arr2, 0, n - 1);
    printf("After quick sort: ");
    printArray(arr2, n);
    
    // Linear search
    int found = linearSearch(arr2, n, 22);
    if (found != -1) {
        printf("Found 22 at index: %d\n", found);
    } else {
        printf("22 not found\n");
    }
    
    return 0;
}
