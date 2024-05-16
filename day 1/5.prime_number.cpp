#include<iostream>
int main() {
    int num, i, count = 0; 
    std::cout << "Enter the number: ";
    std::cin >> num;
    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            count++;
            break;
        }
    }
    if(count == 0 && num > 1) { 
        std::cout << num << " is a prime number.\n"; 
    } else {
        std::cout << num << " is not a prime number.\n"; 
    }
    return 0;
}
