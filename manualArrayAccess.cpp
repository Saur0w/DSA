#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40};
    *(arr + 1) = 25;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}