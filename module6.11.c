#include<iostream>
using namespace std;

class Swap {
    private:
        int num;
    public:
        Swap(int n) {
            num = n;
        }
        friend void swap(Swap, Swap);
};

void swap(Swap s1, Swap s2) {
    int temp;
    cout << "\nBefore Swapping: " << s1.num << " " << s2.num;
    temp = s1.num;
    s1.num = s2.num;
    s2.num = temp;
    cout << "\nAfter Swapping: " << s1.num << " " << s2.num;
}

int main() {
    Swap s1(6), s2(10);
    swap(s1, s2);
    return 0;
//}
