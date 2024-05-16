#include <iostream>

void deleteElement(int arr[], int& size, int position) {
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
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

    int position = 2;
    deleteElement(array, size, position);

    std::cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

