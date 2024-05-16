#include <iostream>
int main() {
    int num, org, rem, result = 0;
    std::cout << "Enter a three-digit integer: ";
    std::cin >> num;
    org = num;

    while (org != 0) {
        rem = org % 10;
        result += rem * rem * rem;
        org /= 10;
    }

    if (result == num)
        std::cout << num << " is an Armstrong number.";
    else
        std::cout << num << " is not an Armstrong number.";

    return 0;
}