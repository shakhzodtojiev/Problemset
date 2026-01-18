// FUNCTIONS
// Demonstrates function definition, multiple returns, and named returns in Go

package main

import "fmt"

// Simple function
func add(a int, b int) int {
	return a + b
}

// Function with multiple return values
func divide(a float64, b float64) (float64, error) {
	if b == 0 {
		return 0, fmt.Errorf("division by zero")
	}
	return a / b, nil
}

// Function with named return values
func getMinMax(numbers []int) (min int, max int) {
	min = numbers[0]
	max = numbers[0]

	for _, num := range numbers {
		if num < min {
			min = num
		}
		if num > max {
			max = num
		}
	}
	return
}

// Variadic function (variable number of arguments)
func sum(numbers ...int) int {
	total := 0
	for _, num := range numbers {
		total += num
	}
	return total
}

// Function as a value
func applyOperation(a int, b int, op func(int, int) int) int {
	return op(a, b)
}

func main() {
	// Call simple function
	fmt.Println("10 + 20 =", add(10, 20))

	// Call function with multiple returns
	result, err := divide(10, 2)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println("10 / 2 =", result)
	}

	// Error handling
	_, err = divide(10, 0)
	if err != nil {
		fmt.Println("Error:", err)
	}

	// Named return values
	numbers := []int{5, 2, 8, 1, 9}
	min, max := getMinMax(numbers)
	fmt.Printf("Min: %d, Max: %d\n", min, max)

	// Variadic function
	fmt.Println("Sum of 1,2,3,4,5:", sum(1, 2, 3, 4, 5))

	// Function as value
	multiply := func(a int, b int) int {
		return a * b
	}
	fmt.Println("20 * 3 =", applyOperation(20, 3, multiply))
}
