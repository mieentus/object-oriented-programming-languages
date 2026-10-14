#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int count_sum(const std::vector<std::vector<int>> &matrix) {

    int sum = 0;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if ((i % 2) != 0 || (j % 2) == 0) {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int main() {

    int n_rows, n_cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> n_rows;

    std::cout << "Enter the number of cols: ";
    std::cin >> n_cols;

    if (n_rows <= 0 or n_cols <= 0) {
        std::cout << "The numbers must be greater than 0\n";
    }

    std::vector<std::vector<int>> matrix (n_rows, std::vector<int>(n_cols));


    srand(static_cast<unsigned int>(time(0)));

    for (auto &row : matrix) {
        for (auto &item : row) {
            item = rand() % 10;
        }
    }

    for (auto &row : matrix) {
        for (auto &item : row) {
            std::cout << item << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << "Sum: " << count_sum(matrix) << std::endl;

    return 0;
}