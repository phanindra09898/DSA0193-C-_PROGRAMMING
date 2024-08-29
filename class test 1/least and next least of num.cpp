#include <iostream>

int main() {
    int number;
    std::cout << "Enter an integer number: ";
    std::cin >> number;

    int leastSignificantDigit = number % 10;
    int nextLeastSignificantDigit = (number / 10) % 10;

    std::cout << "The least significant digit is " << leastSignificantDigit << std::endl;
    std::cout << "The next least significant digit is " << nextLeastSignificantDigit << std::endl;

    return 0;
}

