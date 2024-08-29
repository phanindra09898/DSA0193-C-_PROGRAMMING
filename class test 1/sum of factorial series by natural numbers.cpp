#include <iostream>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 5;
    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += static_cast<double>(factorial(i)) / i;
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}

