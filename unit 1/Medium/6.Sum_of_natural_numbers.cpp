#include <iostream>
using namespace std;
int main() {
    int n, a[10], i, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter values of elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum << " is the sum of given elements";
    return 0;
}
