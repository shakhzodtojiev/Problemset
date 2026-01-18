// OBJECT-ORIENTED PROGRAMMING - CLASSES
// Demonstrates classes, objects, and OOP concepts in C++

#include <iostream>
using namespace std;

// Define a class
class Person {
private:
    string name;
    int age;
    
public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }
    
    // Getter methods
    string getName() {
        return name;
    }
    
    int getAge() {
        return age;
    }
    
    // Setter methods
    void setAge(int a) {
        if (a > 0) {
            age = a;
        }
    }
    
    // Method
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Inheritance example
class Student : public Person {
private:
    double gpa;
    
public:
    Student(string n, int a, double g) : Person(n, a) {
        gpa = g;
    }
    
    double getGPA() {
        return gpa;
    }
    
    void displayInfo() {
        cout << "Student - Name: " << getName() << ", Age: " << getAge() << ", GPA: " << gpa << endl;
    }
};

int main() {
    // Create objects
    Person person("Bob", 30);
    person.displayInfo();
    
    // Use methods
    person.setAge(31);
    cout << "Updated age: " << person.getAge() << endl;
    
    // Inheritance
    Student student("Alice", 20, 3.8);
    student.displayInfo();
    
    return 0;
}
