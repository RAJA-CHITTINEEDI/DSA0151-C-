#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    int a = 0, b = 1, c;

    if (n == 0)
        cout << "The " << n << "th Fibonacci number is: " << a << endl;
    else if (n == 1)
        cout << "The " << n << "th Fibonacci number is: " << b << endl;
    else {
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "The " << n << "th Fibonacci number is: " << c << endl;
    }

    return 0;
}
