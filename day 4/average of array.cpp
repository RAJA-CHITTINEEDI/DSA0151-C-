#include <iostream>

double arrayAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    const int MAX_SIZE = 100; 
    int array[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; 

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    double average = arrayAverage(array, size);
    std::cout << "Average of all elements in the array: " << average << std::endl;

    return 0;
}

