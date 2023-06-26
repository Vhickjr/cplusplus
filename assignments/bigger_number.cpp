#include <iostream>
using namespace std;

int GetTwoNumbers(int* num1_ptr, int* num2_ptr) {
    cout << "Enter two numbers to find the bigger one: ";
    cin >> *num1_ptr >> *num2_ptr;
    return *num1_ptr, *num2_ptr;
}

int FindBigOne(int* num1_ptr, int* num2_ptr) {
    if (*num1_ptr >= *num2_ptr) {
        return *num1_ptr;
    } else {
        return *num2_ptr;
    }
}

int main() {
    int num1, num2;
    char restart = 'y';
    
    while (restart == 'y') {
        cout << "This program finds the bigger number." << endl;
        GetTwoNumbers(&num1, &num2);
        int result = FindBigOne(&num1, &num2);
        cout << result << " is the bigger number." << endl;
        
        cout << "Do you want to continue? (y/n): ";
        cin >> restart;
    }
    
    system("pause");
    return 0;
}
