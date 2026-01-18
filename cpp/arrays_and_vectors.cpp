// ARRAYS AND VECTORS
// Demonstrates arrays and dynamic arrays using vectors in C++

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Static array
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    cout << "Static array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Vector - dynamic array
    vector<int> vec = {5, 10, 15, 20};
    cout << "Vector:" << endl;
    for (int num : vec) {  // Range-based for loop
        cout << num << " ";
    }
    cout << endl;
    
    // Vector operations
    vec.push_back(25);  // Add element
    cout << "After push_back: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Vector size: " << vec.size() << endl;
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;
    
    // 2D Vector
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "2D Vector:" << endl;
    for (auto &row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}
