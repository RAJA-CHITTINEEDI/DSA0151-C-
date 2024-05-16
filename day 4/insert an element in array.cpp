#include <iostream>

void insertElement(int arr[], int& size, int element, int position) {
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    size++;
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

    int element = 10; 
    int position = 2;
    insertElement(array, size, element, position);

    std::cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

