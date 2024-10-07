#include <iostream>

class Numbers {
    private:
        int num1, num2;

    public:

        Numbers(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        friend void swapNumbers(Numbers &n);

             void displayNumbers() {
            std::cout << "Number 1: " << num1 << std::endl;
            std::cout << "Number 2: " << num2 << std::endl;
        }
};

void swapNumbers(Numbers &n) {
    int temp = n.num1;
    n.num1 = n.num2;
    n.num2 = temp;
}

int main() {

    Numbers n(10, 20);

    std::cout << "Original Numbers:" << std::endl;
    n.displayNumbers();

    swapNumbers(n);

    std::cout << "\nSwapped Numbers:" << std::endl;
    n.displayNumbers();

    return 0;
}
