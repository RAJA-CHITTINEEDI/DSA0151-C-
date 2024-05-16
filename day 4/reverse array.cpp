#include <iostream>

void reverseArray(int arr[], int size) {
    int start_index = 0;
    int end_index = size - 1;
    
    while (start_index < end_index) {
        int temp = arr[start_index];
        arr[start_index] = arr[end_index];
        arr[end_index] = temp;
        start_index++;
        end_index--;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    reverseArray(array, size);

    std::cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

