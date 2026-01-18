// SORTING AND SEARCHING
// Demonstrates common sorting and searching algorithms in C++

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Bubble sort
void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Quick sort
void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        
        swap(arr[i + 1], arr[high]);
        
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

// Merge sort
void merge(vector<int> &arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;
    
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}

void mergeSort(vector<int> &arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Linear search
int linearSearch(vector<int> &arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Print vector
void printVector(vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original array: ";
    printVector(numbers);
    
    // Bubble sort
    vector<int> arr1 = numbers;
    bubbleSort(arr1);
    cout << "After bubble sort: ";
    printVector(arr1);
    
    // Quick sort
    vector<int> arr2 = numbers;
    quickSort(arr2, 0, arr2.size() - 1);
    cout << "After quick sort: ";
    printVector(arr2);
    
    // Merge sort
    vector<int> arr3 = numbers;
    mergeSort(arr3, 0, arr3.size() - 1);
    cout << "After merge sort: ";
    printVector(arr3);
    
    // Using STL sort
    vector<int> arr4 = numbers;
    sort(arr4.begin(), arr4.end());
    cout << "After STL sort: ";
    printVector(arr4);
    
    // Linear search
    int found = linearSearch(arr4, 22);
    if (found != -1) {
        cout << "Found 22 at index: " << found << endl;
    } else {
        cout << "22 not found" << endl;
    }
    
    // Binary search (requires sorted array)
    auto it = binary_search(arr4.begin(), arr4.end(), 25);
    cout << "Binary search for 25: " << (it ? "Found" : "Not found") << endl;
    
    return 0;
}
