// EXCEPTION HANDLING
// Demonstrates try-catch-throw exception handling in C++

#include <iostream>
using namespace std;

// Function that throws exception
double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Division by zero!");
    }
    return a / b;
}

// Function with multiple exceptions
int convertToInt(string str) {
    if (str.empty()) {
        throw invalid_argument("String is empty");
    }
    
    try {
        return stoi(str);
    } catch (invalid_argument &e) {
        throw invalid_argument("Invalid number format");
    }
}

int main() {
    // Basic try-catch
    try {
        double result = divide(10, 0);
        cout << "Result: " << result << endl;
    } catch (runtime_error &e) {
        cout << "Error caught: " << e.what() << endl;
    }
    
    // Multiple catch blocks
    try {
        int num = convertToInt("abc");
        cout << "Number: " << num << endl;
    } catch (invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    } catch (exception &e) {
        cout << "General error: " << e.what() << endl;
    }
    
    // Successful execution
    try {
        cout << "10 / 2 = " << divide(10, 2) << endl;
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    
    cout << "Program continues after exceptions" << endl;
    
    return 0;
}
