#include <iostream>
#include <cmath>

int main() {
    int rows = 5;
    int number = 2;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << pow(number, i) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

