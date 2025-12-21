#include <iostream>

int main() {
    const int Rows = 2;
    const int Cols = 3;
    const int matrixA[Rows][Cols] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    const int Rows2 = 3;
    const int Cols2 = 2;
    const int matrixB[Rows2][Cols2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    const int Rows3 = 2;
    const int Cols3 = 2;
    int matrixC[Rows3][Cols3] = {0};

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols2; j++) {
            int sum = 0;
            for (int k = 0; k < Cols; k++) {
                int valA = matrixA[i][k];
                int valB = matrixB[k][j];
                sum += valA * valB;
            }
            matrixC[i][j] = sum;
        }
    }

    std::cout << "Result matrix: " << std::endl;
    for (int i = 0; i < Rows3; i++) {
        for (int j = 0; j < Cols3; j++) {
            std::cout << matrixC[i][j] << "\t";
        }
        std::cout << "\n";
    }

    return 0;

}