#include <iostream>
using namespace std;
int main() {
    int number;
    int factorial = 1;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial of a negative number doesn't exist." << std::endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << number << " = " << factorial << std::endl;
    }

    return 0;
}
