// CONTROL FLOW - IF/ELSE AND LOOPS
// Demonstrates conditional statements and looping in C++

#include <iostream>
using namespace std;

int main() {
    // If-else statement
    int score = 85;
    
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    
    // Switch statement
    int day = 3;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Other day" << endl;
    }
    
    // For loop
    cout << "For loop (1 to 5):" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // While loop
    cout << "While loop (countdown):" << endl;
    int count = 3;
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << endl;
    
    // Do-while loop
    cout << "Do-while loop:" << endl;
    int num = 0;
    do {
        cout << num << " ";
        num++;
    } while (num < 3);
    cout << endl;
    
    return 0;
}
