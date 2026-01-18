// RECURSION
// Demonstrates recursive functions and backtracking in C++

#include <iostream>
using namespace std;

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

// Binary search with recursion
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

// Backtracking - Generate all permutations
void permute(string str, int l, int r) {
    if (l == r) {
        cout << str << endl;
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);
            permute(str, l + 1, r);
            swap(str[l], str[i]);  // Backtrack
        }
    }
}

int main() {
    // Factorial
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "Factorial of 10: " << factorial(10) << endl;
    
    // Fibonacci
    cout << "Fibonacci(6): " << fibonacci(6) << endl;
    cout << "Fibonacci(10): " << fibonacci(10) << endl;
    
    // Binary search
    int numbers[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = 8;
    int found = binarySearch(numbers, 0, size - 1, 7);
    if (found != -1) {
        cout << "Found at index: " << found << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    // Permutations
    cout << "Permutations of 'ABC':" << endl;
    permute("ABC", 0, 2);
    
    return 0;
}
