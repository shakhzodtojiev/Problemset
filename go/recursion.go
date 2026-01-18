// RECURSION
// Demonstrates recursive functions and backtracking

package main

import "fmt"

// Simple recursion - factorial
func factorial(n int) int {
	if n <= 1 {
		return 1
	}
	return n * factorial(n-1)
}

// Fibonacci sequence
func fibonacci(n int) int {
	if n <= 1 {
		return n
	}
	return fibonacci(n-1) + fibonacci(n-2)
}

// Binary search with recursion
func binarySearch(arr []int, left, right, target int) int {
	if left > right {
		return -1 // Not found
	}

	mid := (left + right) / 2

	if arr[mid] == target {
		return mid
	} else if arr[mid] > target {
		return binarySearch(arr, left, mid-1, target)
	} else {
		return binarySearch(arr, mid+1, right, target)
	}
}

// Backtracking - Generate all permutations
func permuteHelper(s []rune, l, r int, result *[]string) {
	if l == r {
		*result = append(*result, string(s))
	} else {
		for i := l; i <= r; i++ {
			s[l], s[i] = s[i], s[l]
			permuteHelper(s, l+1, r, result)
			s[l], s[i] = s[i], s[l] // Backtrack
		}
	}
}

func permute(str string) []string {
	var result []string
	s := []rune(str)
	permuteHelper(s, 0, len(s)-1, &result)
	return result
}

// Tree node structure
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// Sum all values in a binary tree (recursion)
func treeSum(root *TreeNode) int {
	if root == nil {
		return 0
	}
	return root.Val + treeSum(root.Left) + treeSum(root.Right)
}

// Count nodes in a tree
func countNodes(root *TreeNode) int {
	if root == nil {
		return 0
	}
	return 1 + countNodes(root.Left) + countNodes(root.Right)
}

func main() {
	// Factorial
	fmt.Printf("Factorial of 5: %d\n", factorial(5))
	fmt.Printf("Factorial of 10: %d\n", factorial(10))

	// Fibonacci
	fmt.Printf("Fibonacci(6): %d\n", fibonacci(6))
	fmt.Printf("Fibonacci(10): %d\n", fibonacci(10))

	// Binary search
	numbers := []int{1, 3, 5, 7, 9, 11, 13, 15}
	found := binarySearch(numbers, 0, len(numbers)-1, 7)
	fmt.Printf("Found 7 at index: %d\n", found)

	// Permutations
	perms := permute("ABC")
	fmt.Printf("Permutations of 'ABC': %v\n", perms)

	// Tree operations
	root := &TreeNode{
		Val: 1,
		Left: &TreeNode{
			Val: 2,
			Left: &TreeNode{Val: 4},
		},
		Right: &TreeNode{
			Val: 3,
			Right: &TreeNode{Val: 5},
		},
	}

	fmt.Printf("Tree sum: %d\n", treeSum(root))
	fmt.Printf("Tree node count: %d\n", countNodes(root))
}
