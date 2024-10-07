#include <iostream>
#include <string>

class String {
private:
    std::string str;

public:
    String(const std::string& s) : str(s) {}

    String operator+(const String& other) {
        return String(str + other.str);
    }

    void display() {
        std::cout << str << std::endl;
    }
};

int main() {
    String s1("aansi");
    String s2("gopani");

    String result = s1 + s2;

    result.display();

    return 0;
}
