#include <iostream>

using namespace std;

class Matrix {
private:
    int *arr;
    int size;

public:
    Matrix(int n) {
        size = n;
        arr = new int[size];
    }

    void input() {
        cout << "Enter elements of matrix: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    Matrix operator+(const Matrix &m) {
        Matrix temp(size);
        for (int i = 0; i < size; i++) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }

    ~Matrix() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    Matrix m1(n);
    Matrix m2(n);

    cout << "Enter elements of matrix 1: ";
    m1.input();
    cout << "Enter elements of matrix 2: ";
    m2.input();

    Matrix m3 = m1 + m2;

    cout << "Matrix 1: ";
    m1.display();
    cout << "Matrix 2: ";
    m2.display();
    cout << "Matrix 3 (Sum): ";
    m3.display();

    return 0;
}
