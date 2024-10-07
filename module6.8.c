#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void displayPerson() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    Student(const std::string& n, int a, float p) : Person(n, a), percentage(p) {}

    void displayStudent() {
        displayPerson();
        std::cout << "Percentage: " << percentage << std::endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    Teacher(const std::string& n, int a, float s) : Person(n, a), salary(s) {}

    void displayTeacher() {
        displayPerson();
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    Student s("aansi", 17, 85.5);
    Teacher t("Ms. brijesh", 26, 50000.0);

    std::cout << "Student Information:" << std::endl;
    s.displayStudent();

    std::cout << "\nTeacher Information:" << std::endl;
    t.displayTeacher();

    return 0;
}
