// STRINGS
// Demonstrates string manipulation in C

#include <stdio.h>
#include <string.h>

int main() {
    // String declaration
    char name[] = "Alice";
    char message[50];
    
    // String functions
    printf("Original string: %s\n", name);
    printf("String length: %lu\n", strlen(name));
    
    // Copy string
    strcpy(message, name);
    printf("Copied string: %s\n", message);
    
    // Concatenate strings
    strcat(message, " Smith");
    printf("Concatenated: %s\n", message);
    
    // Compare strings
    char str1[] = "hello";
    char str2[] = "hello";
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    }
    
    // String as character array
    printf("Characters in name:\n");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c ", name[i]);
    }
    printf("\n");
    
    return 0;
}
