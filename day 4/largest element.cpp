#include <iostream>
#include <climits>

int secondLargest(int arr[], int size) {
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main() {
    const int MAX_SIZE = 100;
    int array[MAX_SIZE] = {1, 5, 3, 7, 9, 2, 8, 6, 4};
    int size = 9;

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int secondLargestElement = secondLargest(array, size);
    if (secondLargestElement != INT_MIN) {
        std::cout << "Second largest element in the array: " << secondLargestElement << std::endl;
    } else {
        std::cout << "No second largest element found in the array." << std::endl;
    }

    return 0;
}

