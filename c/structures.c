// STRUCTURES
// Demonstrates structs and structured data in C

#include <stdio.h>
#include <string.h>

// Define a structure for Person
struct Person {
    char name[50];
    int age;
    float height;
    char email[50];
};

// Function to print person info
void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
    printf("Email: %s\n", p.email);
}

int main() {
    // Create and initialize a structure
    struct Person person1 = {"Bob", 30, 5.9, "bob@example.com"};
    
    printPerson(person1);
    
    // Array of structures
    struct Person people[2] = {
        {"Alice", 25, 5.6, "alice@example.com"},
        {"Charlie", 35, 5.8, "charlie@example.com"}
    };
    
    printf("\nPeople in array:\n");
    for (int i = 0; i < 2; i++) {
        printf("Person %d:\n", i + 1);
        printPerson(people[i]);
        printf("\n");
    }
    
    // Pointer to structure
    struct Person *ptrPerson = &person1;
    printf("Using pointer - Name: %s\n", ptrPerson->name);
    
    return 0;
}
