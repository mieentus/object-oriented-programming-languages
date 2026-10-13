#include <iostream>

double farenheit2celsius(double f) {
    return (f - 32.0) * 5.0/9.0;
}

int main() {
    double temp_f;

    std::cout << "Temperature in Farenheit: ";
    std::cin >> temp_f;

    std::cout << "Temperature in Celsius: " << farenheit2celsius(temp_f) << std::endl;

    return 0;
}