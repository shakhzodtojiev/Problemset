// STRINGS
// Demonstrates string manipulation in C++

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // String declaration
    string name = "Alice";
    string message = "Hello";
    
    cout << "Original string: " << name << endl;
    cout << "String length: " << name.length() << endl;
    
    // Concatenation
    message += " " + name;
    cout << "Concatenated: " << message << endl;
    
    // Substring
    string sub = name.substr(0, 3);  // First 3 characters
    cout << "Substring: " << sub << endl;
    
    // Find character or substring
    size_t pos = name.find('i');
    if (pos != string::npos) {
        cout << "Found 'i' at position: " << pos << endl;
    }
    
    // Replace
    string text = "hello world";
    text.replace(0, 5, "goodbye");
    cout << "After replace: " << text << endl;
    
    // Convert to uppercase
    string str = "hello";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "Uppercase: " << str << endl;
    
    // Access individual characters
    cout << "Characters: ";
    for (char c : name) {
        cout << c << " ";
    }
    cout << endl;
    
    return 0;
}
