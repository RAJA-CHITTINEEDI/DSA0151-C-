#include <iostream>

int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
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
    int sum = arraySum(array, size);
    std::cout << "Sum of all elements in the array: " << sum << std::endl;

    return 0;
}

