#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {10, 20, 30, 40};
    *(arr.begin() + 1) = 25;
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}