#include <iostream>
#include<cmath>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

public:

    Triangle(double a, double b, double c) : side1(a), side2(b), side3(c) {}

    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Shape* rect = new Rectangle(3, 4);
    cout << "Rectangle Area: " << rect->area() << endl;
    cout << "Rectangle Perimeter: " << rect->perimeter() << endl;

    Shape* tri = new Triangle(3, 4, 5);
    cout << "Triangle Area: " << tri->area() << endl;
    cout << "Triangle Perimeter: " << tri->perimeter() << endl;

    delete rect;
    delete tri;

    return 0;
}

