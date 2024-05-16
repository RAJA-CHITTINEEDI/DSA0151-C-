#include <iostream>

int main() {
    int number;
    int sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum > number) {
        std::cout << number << " is an abundant number." << std::endl;
    } else {
        std::cout << number << " is not an abundant number." << std::endl;
    }

    return 0;
}
