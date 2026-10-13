#include <iostream>

int main() {

    int numbers[5];

    for (int i = 0; i < 5; i++) {
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}