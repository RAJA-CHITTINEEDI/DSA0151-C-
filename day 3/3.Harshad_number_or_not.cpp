#include <iostream>
using namespace std;

bool isHarshad(int num) {
    int sum = 0;
    int originalNum = num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return (originalNum % sum == 0);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isHarshad(number)) {
        cout << number << " is a Harshad number." << endl;
    } else {
        cout << number << " is not a Harshad number." << endl;
    }

    return 0;
}

