#include <iostream>
using namespace std;

class Shape {
private:
    double a, b, c;

public:
    Shape(double l, double b) : a(l), b(b) {}

    Shape(double l, double b, double h) : a(l), b(b), c(h) {}

    void calculateRectangle() {
        cout << "Rectangle Area: " << a * b << endl;
        cout << "Rectangle Perimeter: " << 2 * (a + b) << endl;
    }

    void calculateTriangle() {
        cout << "Triangle Area: " << 0.5 * b * c << endl;
        cout << "Triangle Perimeter: " << a + b + c << endl;
    }
};

int main() {
    Shape rect(3, 4);
    rect.calculateRectangle();

    Shape tri(3, 4, 5);
    tri.calculateTriangle();

    return 0;
}


