// FUNCTIONS
// Demonstrates function declaration, definition, and calling in C

#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to print a message
void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

// Function that returns multiple values via pointers
void getMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

int main() {
    // Call functions
    int result = add(10, 20);
    printf("10 + 20 = %d\n", result);
    
    greet("Alice");
    
    // Using function with pointers
    int numbers[] = {5, 2, 8, 1, 9};
    int min, max;
    getMinMax(numbers, 5, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);
    
    return 0;
}
