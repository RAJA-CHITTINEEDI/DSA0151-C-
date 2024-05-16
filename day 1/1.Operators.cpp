#include <iostream>

int main() {
    int x = 4, y = 2;
    int sum, mul, div, sub;
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    
    std::cout << "Sum is: " << sum << '\n';
    std::cout << "Sub is: " << sub << '\n';
    std::cout << "Mul is: " << mul << '\n';
    std::cout << "Div is: " << div << '\n';
    
    return 0;
}
