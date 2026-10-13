#include <iostream>

int main() {
    int number;

    std::cin >> number;

    if (number < 0){
        std::cout << "The number should be greater than 0" << std::endl;
        return 0;
    }

    int sum = 0;
    for (int i = 0; i <= number; i++) {
        std::cout << i << std::endl;
        sum += i;
    }

    std::cout << "sum: " << sum << std::endl;

    return 0;
}