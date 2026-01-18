// ARRAYS AND POINTERS
// Demonstrates arrays, array manipulation, and pointer basics in C

#include <stdio.h>

int main() {
    // Array declaration and initialization
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    // Access array elements
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    // Calculate sum of array
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("Sum: %d\n", sum);
    
    // 2D Array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    printf("2D Array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Pointer basics
    int x = 100;
    int *ptr = &x;  // pointer to x
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Pointer value: %p\n", ptr);
    printf("Dereferenced pointer: %d\n", *ptr);
    
    return 0;
}
