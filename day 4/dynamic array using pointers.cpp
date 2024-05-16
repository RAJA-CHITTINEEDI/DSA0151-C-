#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int *dynamicArray = new int[size];
    std::cout << "Enter " << size << " values for the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> dynamicArray[i];
    }
    std::cout << "Values of the dynamic array: ";
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;
    delete[] dynamicArray;

    return 0;
}

