#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    srand(static_cast<unsigned int>(time(0)));
    int random_number = rand() % 100 + 1;

    std::cout << "Make a guess" << std::endl;
    int guess = 0;
    do {
        std::cin >> guess;

        if (guess < random_number) {
            std::cout << "The number is too low" << std::endl;
        }
        else if (guess > random_number) {
            std::cout << "The number is too high" <<std:: endl;
        }

    }while(guess != random_number);

    std::cout << "Your guess is correct!" << std::endl;

    return 0;
}