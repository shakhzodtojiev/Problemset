// SORTING AND SEARCHING
// Demonstrates common sorting and searching algorithms

import java.util.Arrays;

public class SortingAndSearching {
    
    // Bubble sort - O(n²)
    static void bubbleSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    
    // Quick sort - O(n log n) average
    static void quickSort(int[] arr, int low, int high) {
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
    
    // Merge sort - O(n log n)
    static void mergeSort(int[] arr, int left, int right) {
        if (left < right) {
            int mid = (left + right) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }
    
    static void merge(int[] arr, int left, int mid, int right) {
        int[] temp = new int[right - left + 1];
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
    
    // Linear search - O(n)
    static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }
    
    // Binary search - O(log n), requires sorted array
    static int binarySearch(int[] arr, int target) {
        int left = 0, right = arr.length - 1;
        
        while (left <= right) {
            int mid = (left + right) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
    
    // Print array
    static void printArray(int[] arr) {
        System.out.println(Arrays.toString(arr));
    }
    
    public static void main(String[] args) {
        int[] numbers = {64, 34, 25, 12, 22, 11, 90, 88};
        
        System.out.print("Original array: ");
        printArray(numbers);
        
        // Bubble sort
        int[] arr1 = numbers.clone();
        bubbleSort(arr1);
        System.out.print("Bubble sort: ");
        printArray(arr1);
        
        // Quick sort
        int[] arr2 = numbers.clone();
        quickSort(arr2, 0, arr2.length - 1);
        System.out.print("Quick sort: ");
        printArray(arr2);
        
        // Merge sort
        int[] arr3 = numbers.clone();
        mergeSort(arr3, 0, arr3.length - 1);
        System.out.print("Merge sort: ");
        printArray(arr3);
        
        // Using Arrays.sort (built-in)
        int[] arr4 = numbers.clone();
        Arrays.sort(arr4);
        System.out.print("Built-in sort: ");
        printArray(arr4);
        
        // Linear search
        int found = linearSearch(arr4, 22);
        System.out.println("Linear search for 22: index " + found);
        
        // Binary search
        found = binarySearch(arr4, 25);
        System.out.println("Binary search for 25: index " + found);
        
        // Using Arrays.binarySearch
        found = Arrays.binarySearch(arr4, 11);
        System.out.println("Binary search for 11 (using Arrays): index " + found);
    }
}
