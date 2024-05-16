#include<iostream>
int main(){
    float celsius, fahrenheit;
    cout << "Enter temperature in Celsius: /n";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32.0; 
    cout << "Temperature in Fahrenheit is: " << fahrenheit ;
    return 0;
}
