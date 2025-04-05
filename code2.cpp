#include <iostream>
using namespace std;


int euler(int number) {

    int result = number;

    if (number == 0) {
        result = number;
        return result;
    }

    if (number == 1) {
        result = number;
        return result;
    }

    for (int iterator = 2; iterator * iterator <= number; ++iterator) {
        if ( number % iterator == 0) {
            while (number % iterator == 0) {
                number = number / iterator;
            }
            result = result - result / iterator;
        }
    }

    if (number > 1) {
        result = result - result / number;
    }

    return result;
}

int main() {

    std::cout << euler(1) << std::endl;
    std::cout << euler(2) << std::endl;
    std::cout << euler(3) << std::endl;
    std::cout << euler(4) << std::endl;
    std::cout << euler(5) << std::endl;
    std::cout << euler(6) << std::endl;
    std::cout << euler(7) << std::endl;
    std::cout << euler(8) << std::endl;
    std::cout << euler(9) << std::endl;
    std::cout << euler(10) << std::endl;


    return 0;

}

