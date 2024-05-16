#include <iostream>

int countOccurrences(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    const int MAX_SIZE = 100;
    int array[MAX_SIZE] = {1, 2, 3, 2, 4, 2, 5};
    int size = 7; 

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int value = 2;

    int occurrences = countOccurrences(array, size, value);
    std::cout << "Number of occurrences of " << value << " in the array: " << occurrences << std::endl;

    return 0;
}

