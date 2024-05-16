#include <iostream>
using namespace std;
int main() {
    int number;
    bool isPrime = true;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
