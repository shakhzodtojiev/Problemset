// ARRAYS AND SLICES
// Demonstrates arrays and slices in Go

package main

import "fmt"

func main() {
	// Array - fixed size
	var numbers [5]int = [5]int{10, 20, 30, 40, 50}
	fmt.Println("Array:", numbers)
	fmt.Println("Array length:", len(numbers))

	// Slice - dynamic size
	fruits := []string{"apple", "banana", "cherry"}
	fmt.Println("Slice:", fruits)
	fmt.Println("Slice length:", len(fruits))

	// Append to slice
	fruits = append(fruits, "date")
	fmt.Println("After append:", fruits)

	// Slice operations
	slice := numbers[1:4]  // Elements from index 1 to 3
	fmt.Println("Slice [1:4]:", slice)

	// Make slice with capacity
	numbers2 := make([]int, 3, 5)
	numbers2[0] = 1
	numbers2[1] = 2
	numbers2[2] = 3
	fmt.Println("Slice created with make:", numbers2)
	fmt.Println("Length:", len(numbers2), "Capacity:", cap(numbers2))

	// Iterate slice
	fmt.Println("Iterating slice:")
	for index, value := range fruits {
		fmt.Printf("Index %d: %s\n", index, value)
	}

	// 2D Slice
	matrix := [][]int{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	}
	fmt.Println("2D Slice:")
	for _, row := range matrix {
		fmt.Println(row)
	}

	// Copy slice
	numbers3 := make([]int, len(numbers2))
	copy(numbers3, numbers2)
	fmt.Println("Copied slice:", numbers3)
}
