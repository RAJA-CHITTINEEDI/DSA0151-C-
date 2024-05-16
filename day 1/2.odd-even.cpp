#include<iostream>
int main() {
    int a;
    std::cout << "Enter the number: ";
    std::cin >> a;
    if (a % 2 == 0) {
        std::cout << "Even";
    } else {
        std::cout << "Odd";
    }
    return 0;
}
