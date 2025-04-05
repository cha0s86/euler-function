#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(int arr[], int n){
    reverse(arr,arr+n);
}
//function to print the array
void printArray(int arr[], int n){
     for(int i=0;i<n;i++)
         cout << arr[i] << " ";
}

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

int main() {

    std::cout << euler(4) << std::endl;

    return 0;

}

