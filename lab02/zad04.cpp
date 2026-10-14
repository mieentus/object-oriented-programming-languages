#include <iostream>
#include <string>

int main() {

    std::string str;
    char c;

    std::cout << "Enter a string: ";
    getline(std::cin, str);

    std::cout << "Enter a char: ";
    std::cin >> c;

    int sum = 0;
    c = (char)std::tolower(c);
    for (auto &i : str) {
        if(std::tolower(i) == c) {
            sum++;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}