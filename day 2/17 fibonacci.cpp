#include <iostream>
using namespace std;
int main() {
    int n;
    
    std::cout << "Enter the number of terms: ";
    std::cin >> n;
    
    int first = 0, second = 1, next;
    
    std::cout << "Fibonacci sequence: ";
    
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            std::cout << first << " ";
        } else if (i == 1) {
            std::cout << second << " ";
        } else {
            next = first + second;
            first = second;
            second = next;
            std::cout << next << " ";
        }
    }
    
    std::cout << std::endl;
    
    return 0;
}
