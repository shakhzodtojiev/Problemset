// FILE I/O
// Demonstrates reading from and writing to files in C

#include <stdio.h>

int main() {
    // Write to a file
    FILE *file = fopen("example.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(file, "This is a line written to a file.\n");
    fprintf(file, "Line 2: Number = %d\n", 42);
    fprintf(file, "Line 3: String = %s\n", "Hello");
    
    fclose(file);
    printf("File written successfully\n");
    
    // Read from the file
    file = fopen("example.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char buffer[100];
    printf("Reading from file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    
    return 0;
}
