// VARIABLES AND DATA TYPES
// Demonstrates basic variable declaration and data types in C++

#include <iostream>
using namespace std;

int main() {
    // Primitive data types
    int age = 25;
    char grade = 'A';
    float height = 5.8f;
    double salary = 50000.50;
    bool isActive = true;
    
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Height: " << height << endl;
    cout << "Salary: " << salary << endl;
    cout << "Is Active: " << isActive << endl;
    
    // Type casting
    int x = 10;
    double y = static_cast<double>(x);
    cout << "Casted value: " << y << endl;
    
    return 0;
}
