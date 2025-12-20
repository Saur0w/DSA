#include <iostream>

int main() {
    const int N = 5;
    int arrA[] = {1, 2, 3, 4, 5};
    int arrB[] = {6, 7, 8, 9, 10};

    int arrC[N];

    for (int i = 0; i < N; i++) {
        *(arrC + i) = *(arrA + i);
    }

    *(arrC + 2) = *(arrA + 2) * *(arrB + 4);

    for (int i = 0; i < N; i++) {
        std::cout << *(arrC + i) << std::endl;
    }

    return 0;

}