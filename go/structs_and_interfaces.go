// STRUCTS AND INTERFACES
// Demonstrates structs and interfaces in Go

package main

import "fmt"

// Define a struct
type Person struct {
	Name   string
	Age    int
	City   string
	Email  string
}

// Method on struct
func (p Person) Introduce() {
	fmt.Printf("Hello, I'm %s, %d years old from %s\n", p.Name, p.Age, p.City)
}

// Pointer receiver (can modify struct)
func (p *Person) SetAge(newAge int) {
	if newAge > 0 {
		p.Age = newAge
	}
}

// Define an interface
type Writer interface {
	Write(content string)
}

// Implement Writer interface for Person
func (p Person) Write(content string) {
	fmt.Printf("%s writes: %s\n", p.Name, content)
}

// Implement Writer interface for Robot
type Robot struct {
	Name string
}

func (r Robot) Write(content string) {
	fmt.Printf("[%s] Processing: %s\n", r.Name, content)
}

func main() {
	// Create struct
	person := Person{
		Name:  "Alice",
		Age:   25,
		City:  "New York",
		Email: "alice@example.com",
	}

	fmt.Println("Person:", person)
	person.Introduce()

	// Modify using pointer receiver
	person.SetAge(26)
	fmt.Println("Updated age:", person.Age)

	// Array of structs
	people := []Person{
		{"Bob", 30, "London", "bob@example.com"},
		{"Charlie", 35, "Paris", "charlie@example.com"},
	}

	fmt.Println("\nPeople:")
	for _, p := range people {
		p.Introduce()
	}

	// Using interface
	fmt.Println("\nUsing interface:")
	var w Writer

	w = person
	w.Write("Learning Go")

	robot := Robot{Name: "R2D2"}
	w = robot
	w.Write("Task completed")
}
