#include<iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}
inline int cubic(int a) {
    return a * a * a;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int multiplication = multiply(num, num);
    int cube = cubic(num);

    cout << "Multiplication of " << num << " and " << num << " is: " << multiplication << endl;
    cout << "Cubic of " << num << " is: " << cube << endl;

    return 0;
}
