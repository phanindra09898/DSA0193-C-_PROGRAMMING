#include <iostream>
#include <cmath>

class Triangle {
private:
    double a, b, c;

public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    void printArea() {
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        std::cout << "Area: " << area << std::endl;
    }

    void printPerimeter() {
        double perimeter = a + b + c;
        std::cout << "Perimeter: " << perimeter << std::endl;
    }
};

int main() {
    Triangle t(3, 4, 5);
    t.printArea();
    t.printPerimeter();

    return 0;
}

