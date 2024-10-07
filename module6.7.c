#include <iostream>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;

public:
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    string bestPerformance;

public:
    void inputData() {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        averageRuns = (float)totalRuns / 10;
    }

    void displayData() {
        Cricketer::displayData();
        cout << "Total runs: " << totalRuns << endl;
        cout << "Average runs: " << averageRuns << endl;
        cout << "Best performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    cout << "Enter data for batsman: " << endl;
    batsman.inputData();
    batsman.calculateAverageRuns();
    cout << "Data for batsman: " << endl;
    batsman.displayData();
    return 0;
}
