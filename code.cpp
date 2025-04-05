#include <iostream>
using namespace std;

// Euler function

int euler(int number) {
	// Declare result val
    int resultval = number;

	// iterator = 2,,, as long as iterator * iterator is smaller or equal to number, execute the code and increment and assign +1 to iterator
    for (int iterator = 2; iterator * iterator <= number; ++iterator) {
        // If number divided by iterator does not return a floating point number
        if (number % iterator == 0) {
            // While prime number does not return floating point values
            while (number % iterator == 0) {
                // Get the sub-prime number of the prime
                number = number / iterator;
            }
            // Result val = resultval - resultval / iterator
            resultval = resultval - resultval / iterator;
        }
	}

    if (number > 1)
        resultval = resultval - resultval / number;
        
    return resultval;
}

int main() {
	
	std::cout << "Euler function returns: " << euler(4) << std::endl;
}