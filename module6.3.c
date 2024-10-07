#include <iostream>

class Interest {
private:
    int principal;
    int year;
    float rate;

public:

    Interest(int p, int y, float r) : principal(p), year(y), rate(r) {}

    Interest(int p, int y) : principal(p), year(y), rate(2.5) {}

    float calculateInterest() {
        return (principal * year * rate) / 100;
    }

    void displayInterest() {
        std::cout << "Simple Interest: " << calculateInterest() << std::endl;
    }
};

int main() {

    Interest obj1(10000, 2, 3.5);
    obj1.displayInterest();

    Interest obj2(15000, 3);
    obj2.displayInterest();

    return 0;
}
