#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Coprimes printing calculation not functioning perfectly,
// that's for updating...

int euler(int number) {

    int result = number;

    std::vector<int> cpvector;
    int cpiterator = 0;

    const int numberconst = number;

    if (number == 0) {
        result = number;
        return result;
    }

    if (number == 1) {
        result = number;
        return result;
    }

    // TODO: Fix co primes 
    for (int iterator = 2; iterator * iterator <= number; iterator++) {
        if (number % iterator == 0) {
            for (cpiterator = 0; number % iterator == 0; cpiterator++) {
                // Store coprimes in array
                cpvector.push_back(number);
                number = number / iterator;
            }
            // At this point we should get the last coprime number, store it
            cpvector.push_back(number);
            result = result - result / iterator;
        }
    }

    // Reverse the order of coprime array
    reverse(cpvector.begin(), cpvector.end());

    if (number > 1) {
        result = result - result / number;
    }

    std::cout << "Coprimes: " << std::endl;

    // Print the coprimes 
    for (int vectoriterator = 0; vectoriterator != cpvector.size(); ++vectoriterator) {
        std::cout << vectoriterator + 1 << ": " << cpvector[vectoriterator] << std::endl;
    }

    std::cout << "Euler function returns: ";

    return result;
}

int main(int argc, char* argv[]) {

    if (argc == 1) {
        std::cout << "No arguments passed." << std::endl;
    } else if (argc == 2) {
       std::cout << euler(std::stoi(argv[1])) << std::endl;
    } else {
        std::cout << "Syntax error." << std::endl;
    }

    return 0;
}

