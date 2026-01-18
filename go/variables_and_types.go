// VARIABLES AND DATA TYPES
// Demonstrates variable declaration and data types in Go

package main

import "fmt"

func main() {
	// Declare variables with explicit types
	var age int = 25
	var name string = "Alice"
	var height float64 = 5.8
	var isActive bool = true

	fmt.Println("Age:", age)
	fmt.Println("Name:", name)
	fmt.Println("Height:", height)
	fmt.Println("Is Active:", isActive)

	// Short variable declaration (type inference)
	city := "New York"
	population := 8000000
	fmt.Println("City:", city)
	fmt.Println("Population:", population)

	// Type conversion
	var x int = 10
	var y float64 = float64(x)
	fmt.Println("Converted:", y)

	// Zero values
	var emptyInt int
	var emptyString string
	var emptyBool bool
	fmt.Printf("Zero values: int=%v, string='%v', bool=%v\n", emptyInt, emptyString, emptyBool)
}
