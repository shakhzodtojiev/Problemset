// SORTING AND SEARCHING
// Demonstrates common sorting and searching algorithms

package main

import (
	"fmt"
	"sort"
)

// Bubble sort - O(n²)
func bubbleSort(arr []int) {
	n := len(arr)
	for i := 0; i < n-1; i++ {
		for j := 0; j < n-i-1; j++ {
			if arr[j] > arr[j+1] {
				arr[j], arr[j+1] = arr[j+1], arr[j]
			}
		}
	}
}

// Quick sort - O(n log n) average
func quickSort(arr []int, low, high int) {
	if low < high {
		pivot := arr[high]
		i := low - 1

		for j := low; j < high; j++ {
			if arr[j] < pivot {
				i++
				arr[i], arr[j] = arr[j], arr[i]
			}
		}

		arr[i+1], arr[high] = arr[high], arr[i+1]

		quickSort(arr, low, i)
		quickSort(arr, i+2, high)
	}
}

// Merge sort - O(n log n)
func mergeSort(arr []int, left, right int) {
	if left < right {
		mid := (left + right) / 2
		mergeSort(arr, left, mid)
		mergeSort(arr, mid+1, right)
		merge(arr, left, mid, right)
	}
}

func merge(arr []int, left, mid, right int) {
	leftArr := make([]int, mid-left+1)
	rightArr := make([]int, right-mid)

	copy(leftArr, arr[left:mid+1])
	copy(rightArr, arr[mid+1:right+1])

	i, j, k := 0, 0, left

	for i < len(leftArr) && j < len(rightArr) {
		if leftArr[i] <= rightArr[j] {
			arr[k] = leftArr[i]
			i++
		} else {
			arr[k] = rightArr[j]
			j++
		}
		k++
	}

	for i < len(leftArr) {
		arr[k] = leftArr[i]
		i++
		k++
	}

	for j < len(rightArr) {
		arr[k] = rightArr[j]
		j++
		k++
	}
}

// Linear search - O(n)
func linearSearch(arr []int, target int) int {
	for i, num := range arr {
		if num == target {
			return i
		}
	}
	return -1
}

// Binary search - O(log n), requires sorted array
func binarySearch(arr []int, target int) int {
	left, right := 0, len(arr)-1

	for left <= right {
		mid := (left + right) / 2
		if arr[mid] == target {
			return mid
		} else if arr[mid] < target {
			left = mid + 1
		} else {
			right = mid - 1
		}
	}

	return -1
}

// Print slice
func printSlice(arr []int) {
	fmt.Println(arr)
}

func main() {
	numbers := []int{64, 34, 25, 12, 22, 11, 90, 88}

	fmt.Printf("Original array: ")
	printSlice(numbers)

	// Bubble sort
	arr1 := make([]int, len(numbers))
	copy(arr1, numbers)
	bubbleSort(arr1)
	fmt.Printf("Bubble sort: ")
	printSlice(arr1)

	// Quick sort
	arr2 := make([]int, len(numbers))
	copy(arr2, numbers)
	quickSort(arr2, 0, len(arr2)-1)
	fmt.Printf("Quick sort: ")
	printSlice(arr2)

	// Merge sort
	arr3 := make([]int, len(numbers))
	copy(arr3, numbers)
	mergeSort(arr3, 0, len(arr3)-1)
	fmt.Printf("Merge sort: ")
	printSlice(arr3)

	// Using sort package (built-in)
	arr4 := make([]int, len(numbers))
	copy(arr4, numbers)
	sort.Ints(arr4)
	fmt.Printf("Built-in sort: ")
	printSlice(arr4)

	// Linear search
	found := linearSearch(arr4, 22)
	fmt.Printf("Linear search for 22: index %d\n", found)

	// Binary search
	found = binarySearch(arr4, 25)
	fmt.Printf("Binary search for 25: index %d\n", found)

	// Check if value exists using sort package
	exists := sort.SearchInts(arr4, 11)
	fmt.Printf("Binary search for 11 (using sort): index %d\n", exists)
}
