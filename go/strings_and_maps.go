// STRINGS AND MAPS
// Demonstrates strings and maps (dictionaries) in Go

package main

import (
	"fmt"
	"strings"
)

func main() {
	// String declaration
	name := "Alice"
	message := "Hello, World!"

	fmt.Println("String:", name)
	fmt.Println("Length:", len(name))

	// String operations
	fmt.Println("Uppercase:", strings.ToUpper(message))
	fmt.Println("Lowercase:", strings.ToLower(message))
	fmt.Println("Contains 'World':", strings.Contains(message, "World"))
	fmt.Println("Replace:", strings.Replace(message, "World", "Go", 1))

	// Split and join
	words := strings.Split(message, " ")
	fmt.Println("Split:", words)
	fmt.Println("Join:", strings.Join(words, "-"))

	// Substring
	fmt.Println("Substring [0:5]:", message[0:5])

	// MAP - key-value pairs
	person := map[string]interface{}{
		"name":   "Bob",
		"age":    30,
		"city":   "New York",
		"skills": []string{"Go", "Java", "Python"},
	}

	fmt.Println("\nMap:", person)
	fmt.Println("Name:", person["name"])
	fmt.Println("Age:", person["age"])

	// Add to map
	person["email"] = "bob@example.com"

	// Check if key exists
	if val, ok := person["age"]; ok {
		fmt.Println("Age exists:", val)
	}

	// Iterate map
	fmt.Println("\nIterating map:")
	for key, value := range person {
		fmt.Printf("%s: %v\n", key, value)
	}

	// Map of strings
	scores := map[string]int{
		"Alice":   95,
		"Bob":     87,
		"Charlie": 92,
	}

	fmt.Println("\nScores:", scores)
	for name, score := range scores {
		fmt.Printf("%s: %d\n", name, score)
	}

	// Delete from map
	delete(scores, "Bob")
	fmt.Println("After delete:", scores)
}
