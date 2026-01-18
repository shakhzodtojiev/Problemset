// FUNCTIONS
// Demonstrates function definition, overloading, and recursion in C++

#include <iostream>
using namespace std;

// Simple function
int add(int a, int b) {
    return a + b;
}

// Function overloading - same name, different parameters
double add(double a, double b) {
    return a + b;
}

// Function with default parameters
void greet(string name = "Friend") {
    cout << "Hello, " << name << "!" << endl;
}

// Recursive function - factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function with reference parameter (pass by reference)
void increment(int &x) {
    x++;
}

int main() {
    // Call functions
    cout << "10 + 20 = " << add(10, 20) << endl;
    cout << "10.5 + 20.3 = " << add(10.5, 20.3) << endl;
    
    greet();
    greet("Alice");
    
    // Recursion
    cout << "Factorial of 5: " << factorial(5) << endl;
    
    // Pass by reference
    int num = 5;
    cout << "Before: " << num << endl;
    increment(num);
    cout << "After: " << num << endl;
    
    return 0;
}
