#include<iostream>
using namespace std;

int main() {
	int n, i;
	cout << "Enter the value of n: ";
	cin >> n;
	if (n < 0) {
		cout << "Enter a positive number" << endl;
	} else {
		for (i = 0; i * i <= n; i++) {
			if (i * i * i == n) {
				cout << "The cube root of the number is " << i << endl;
				break;
			}
		}
		if (i * i * i > n) {
			cout << "The number does not have an integer cube root." << endl;
		}
	}
	return 0;
}
