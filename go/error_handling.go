// ERROR HANDLING
// Demonstrates error handling in Go

package main

import (
	"errors"
	"fmt"
	"os"
	"strconv"
)

// Custom error type
type ValidationError struct {
	message string
	code    int
}

func (e *ValidationError) Error() string {
	return fmt.Sprintf("ValidationError (code %d): %s", e.code, e.message)
}

// Function that returns error
func divide(a float64, b float64) (float64, error) {
	if b == 0.0 {
		return 0, errors.New("division by zero")
	}
	return a / b, nil
}

// Function with custom error
func validateAge(age int) error {
	if age < 0 {
		return &ValidationError{message: "age cannot be negative", code: 1}
	}
	if age > 150 {
		return &ValidationError{message: "age is unrealistic", code: 2}
	}
	return nil
}

// Function that converts string to int
func parseNumber(str string) (int, error) {
	num, err := strconv.Atoi(str)
	if err != nil {
		return 0, fmt.Errorf("failed to parse '%s': %w", str, err)
	}
	return num, nil
}

func main() {
	// Basic error handling
	fmt.Println("Example 1: Division")
	result, err := divide(10, 2)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println("Result:", result)
	}

	// Error case
	result, err = divide(10, 0)
	if err != nil {
		fmt.Println("Error:", err)
	}

	// Custom error
	fmt.Println("\nExample 2: Validation")
	err = validateAge(25)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println("Age is valid")
	}

	err = validateAge(-5)
	if err != nil {
		fmt.Println("Error:", err)
		// Type assertion to check custom error
		if ve, ok := err.(*ValidationError); ok {
			fmt.Printf("Code: %d\n", ve.code)
		}
	}

	// Error wrapping
	fmt.Println("\nExample 3: Error wrapping")
	num, err := parseNumber("abc")
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println("Number:", num)
	}

	// File operations (common error scenario)
	fmt.Println("\nExample 4: File operations")
	file, err := os.Open("nonexistent.txt")
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		file.Close()
	}
}
