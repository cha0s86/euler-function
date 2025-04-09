#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int euler(int number) {
    int result = number;
    int cpiterator = 0;

    for (int iterator = 2; iterator * iterator <= number; iterator++) {
        if (number % iterator == 0) {
            for (cpiterator = 0; number % iterator == 0; cpiterator++) {
                number = number / iterator;
                
            }
            result = result - result / iterator;
        }
    }

    if (number > 1) {
        result = result - result / number;
    }

    std::cout << "Euler function returns: ";

    return result;
}

int main(int argc, char* argv[]) {

    if (argc == 1) {
        std::cout << "No arguments passed." << std::endl;
    } else if (argc == 2) {
        std::cout << euler(stoi(argv[1])) << std::endl;
    } else {
        std::cout << "Syntax error." << std::endl;
    }

    return 0;
}