// FILE I/O
// Demonstrates reading from and writing to files in Go

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// Write to a file
	fmt.Println("Writing to file...")
	file, err := os.Create("output.txt")
	if err != nil {
		fmt.Println("Error creating file:", err)
		return
	}
	defer file.Close()

	// Write strings
	_, err = file.WriteString("This is the first line.\n")
	_, err = file.WriteString("Line 2: Number = 42\n")
	_, err = file.WriteString("Line 3: String = Hello\n")

	if err != nil {
		fmt.Println("Error writing to file:", err)
		return
	}

	fmt.Println("File written successfully")

	// Read entire file
	fmt.Println("\nReading entire file...")
	content, err := os.ReadFile("output.txt")
	if err != nil {
		fmt.Println("Error reading file:", err)
		return
	}

	fmt.Println(string(content))

	// Read line by line
	fmt.Println("Reading line by line...")
	file, err = os.Open("output.txt")
	if err != nil {
		fmt.Println("Error opening file:", err)
		return
	}
	defer file.Close()

	scanner := bufio.NewScanner(file)
	lineNumber := 1
	for scanner.Scan() {
		fmt.Printf("Line %d: %s\n", lineNumber, scanner.Text())
		lineNumber++
	}

	if err := scanner.Err(); err != nil {
		fmt.Println("Error reading file:", err)
	}

	// Append to file
	fmt.Println("\nAppending to file...")
	file, err = os.OpenFile("output.txt", os.O_APPEND|os.O_WRONLY, 0644)
	if err != nil {
		fmt.Println("Error opening file:", err)
		return
	}
	defer file.Close()

	_, err = file.WriteString("Line 4: Appended line\n")
	if err != nil {
		fmt.Println("Error appending:", err)
	}

	// Check file info
	fmt.Println("\nFile info...")
	info, err := os.Stat("output.txt")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	fmt.Printf("File name: %s\n", info.Name())
	fmt.Printf("File size: %d bytes\n", info.Size())
	fmt.Printf("Is directory: %v\n", info.IsDir())
	fmt.Printf("Modified time: %v\n", info.ModTime())
}
