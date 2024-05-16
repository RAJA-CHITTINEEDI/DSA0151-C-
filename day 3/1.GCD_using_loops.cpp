#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int gcd = 1;
    int smaller = (num1 < num2) ? num1 : num2;
    int i = 1;
    do {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
        i++;
    } while (i <= smaller);
    
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    
    return 0;
}

