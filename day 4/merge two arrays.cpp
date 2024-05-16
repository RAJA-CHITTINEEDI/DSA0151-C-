#include <iostream>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        result[k++] = arr1[i++];
    }
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    const int MAX_SIZE = 100; 
    int arr1[] = {1, 3, 5, 7};
    int size1 = 4;
    int arr2[] = {2, 4, 6, 8};
    int size2 = 4;
    int result[MAX_SIZE];

    std::cout << "Array 1: ";
    for (int i = 0; i < size1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array 2: ";
    for (int i = 0; i < size2; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    mergeArrays(arr1, size1, arr2, size2, result);

    std::cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

