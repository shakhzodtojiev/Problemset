// CONTROL FLOW - IF/ELSE AND LOOPS
// Demonstrates conditional statements and looping structures in C

#include <stdio.h>

int main() {
    // If-else statement
    int score = 85;
    
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else {
        printf("Grade: C\n");
    }
    
    // For loop - iterate a specific number of times
    printf("For loop (1 to 5):\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // While loop - continue while condition is true
    printf("While loop (countdown from 3):\n");
    int count = 3;
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    printf("\n");
    
    return 0;
}
