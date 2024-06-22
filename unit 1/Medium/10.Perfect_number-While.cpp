#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    int i = 1; 
    while (i <= num / 2) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }
   
    if (sum == num) {
        cout << num << " is a perfect number.\n";
    } else {
        cout << num << " is not a perfect number.\n";
    }
    
    return 0;
}
