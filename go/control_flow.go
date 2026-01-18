// CONTROL FLOW - IF/ELSE AND LOOPS
// Demonstrates conditional statements and looping in Go

package main

import "fmt"

func main() {
	// If-else statement
	score := 85

	if score >= 90 {
		fmt.Println("Grade: A")
	} else if score >= 80 {
		fmt.Println("Grade: B")
	} else if score >= 70 {
		fmt.Println("Grade: C")
	} else {
		fmt.Println("Grade: F")
	}

	// Switch statement
	day := 3
	switch day {
	case 1:
		fmt.Println("Monday")
	case 2:
		fmt.Println("Tuesday")
	case 3:
		fmt.Println("Wednesday")
	default:
		fmt.Println("Other day")
	}

	// For loop - C-style
	fmt.Println("For loop (1 to 5):")
	for i := 1; i <= 5; i++ {
		fmt.Print(i, " ")
	}
	fmt.Println()

	// For loop - range (iterate over collection)
	fruits := []string{"apple", "banana", "cherry"}
	fmt.Println("Range loop:")
	for _, fruit := range fruits {
		fmt.Println(fruit)
	}

	// While-like loop
	fmt.Println("While-like loop:")
	count := 3
	for count > 0 {
		fmt.Print(count, " ")
		count--
	}
	fmt.Println()

	// Break and continue
	fmt.Println("Break and continue:")
	for i := 1; i <= 10; i++ {
		if i == 5 {
			continue
		}
		if i == 8 {
			break
		}
		fmt.Print(i, " ")
	}
	fmt.Println()
}
