#include <iostream>
void multiplyMatrices(int mat1[][3], int mat2[][2], int result[][2], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void displayMatrix(int mat[][2], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    const int rows1 = 3;
    const int cols1 = 3;
    const int rows2 = 3;
    const int cols2 = 2;

    int matrix1[rows1][cols1] = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};
    
    int matrix2[rows2][cols2] = {{9, 8},
                                  {7, 6},
                                  {5, 4}};

    int result[rows1][cols2];
    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);
    std::cout << "Matrix 1:" << std::endl;
    displayMatrix(matrix1, rows1, cols1);

    std::cout << "Matrix 2:" << std::endl;
    displayMatrix(matrix2, rows2, cols2);

    std::cout << "Resultant Matrix:" << std::endl;
    displayMatrix(result, rows1, cols2);

    return 0;
}

