#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << string(n - i - 1, ' ');
        cout << string(2 * i + 1, '*') << endl;
    }

    for (int i = n - 2; i >= 0; i--) {
        cout << string(n - i - 1, ' ');
        cout << string(2 * i + 1, '*') << endl;
    }

    return 0;
}
