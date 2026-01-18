// FILE I/O
// Demonstrates reading from and writing to files in C++

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a file
    ofstream outfile("output.txt");
    
    if (!outfile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    
    outfile << "This is a line written to a file." << endl;
    outfile << "Line 2: Number = " << 42 << endl;
    outfile << "Line 3: String = Hello" << endl;
    
    outfile.close();
    cout << "File written successfully" << endl;
    
    // Reading from a file
    ifstream infile("output.txt");
    
    if (!infile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    
    string line;
    cout << "Reading from file:" << endl;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    
    infile.close();
    
    return 0;
}
