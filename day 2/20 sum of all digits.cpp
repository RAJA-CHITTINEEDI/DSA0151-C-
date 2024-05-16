#include <iostream>

int main() {
    int number, sum = 0;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Convert number to positive if it's negative
    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
