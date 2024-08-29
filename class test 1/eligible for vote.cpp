#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        std::cout << "You are allowed to vote after " << 18 - age << " years." << std::endl;
    }

    return 0;
}

