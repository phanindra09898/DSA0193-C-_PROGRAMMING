#include <iostream>
#define PI 3.14

class Area {
public:
    Area(double radius) {
        std::cout << "Area of Circle: " << PI * radius * radius << std::endl;
    }

    Area(double length, double breadth) {
        std::cout << "Area of Rectangle: " << length * breadth << std::endl;
    }

    Area(double base, double height, bool isTriangle) {
        std::cout << "Area of Triangle: " << 0.5 * base * height << std::endl;
    }
};

int main() {
    Area circle(3);            
    Area rectangle(4, 5);       
    Area triangle(3, 4, true);  

    return 0;
}

