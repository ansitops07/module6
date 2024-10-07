#include <fstream>
#include <iostream>

int main() {

    std::ofstream writeFile("example.txt");

        if (!writeFile) {
        std::cerr << "Unable to open file for writing." << std::endl;
        return 1;
    }

       writeFile << "Hello, World!" << std::endl;
    writeFile << "This is a sample file." << std::endl;

       writeFile.close();

        std::ifstream readFile("example.txt");

    if (!readFile) {
        std::cerr << "Unable to open file for reading." << std::endl;
        return 1;
    }

      std::string line;
    while (std::getline(readFile, line)) {
        std::cout << line << std::endl;
    }

       readFile.close();

    return 0;
}
