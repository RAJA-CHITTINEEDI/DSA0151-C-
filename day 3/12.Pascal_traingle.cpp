#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int number = 1;
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << number << " ";
            number = number * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}
