// RECURSION
// Demonstrates recursive functions and backtracking in C

#include <stdio.h>

// Simple recursion - factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Binary search
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;  // Not found
    }
    
    int mid = (left + right) / 2;
    
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

// Tree sum (recursive traversal)
struct Node {
    int value;
    struct Node *left;
    struct Node *right;
};

int treeSum(struct Node *root) {
    if (root == NULL) {
        return 0;
    }
    return root->value + treeSum(root->left) + treeSum(root->right);
}

int main() {
    // Factorial
    printf("Factorial of 5: %d\n", factorial(5));
    printf("Factorial of 10: %d\n", factorial(10));
    
    // Fibonacci
    printf("Fibonacci(6): %d\n", fibonacci(6));
    printf("Fibonacci(10): %d\n", fibonacci(10));
    
    // Binary search
    int numbers[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = 8;
    int found = binarySearch(numbers, 0, size - 1, 7);
    if (found != -1) {
        printf("Found at index: %d\n", found);
    } else {
        printf("Not found\n");
    }
    
    return 0;
}
