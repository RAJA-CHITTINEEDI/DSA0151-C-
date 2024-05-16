#include <iostream>
#include <cmath>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number)
        std::cout << number << " is a narcissistic number." << std::endl;
    else
        std::cout << number << " is not a narcissistic number." << std::endl;

    return 0;
}
