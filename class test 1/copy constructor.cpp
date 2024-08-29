#include <iostream>

class Point {
public:
    int x, y;

    
    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }

    
    Point(const Point &p2) {
        x = p2.x;
        y = p2.y;
    }
};

int main() {
    Point p1(10, 15); 
    Point p2 = p1;     

    std::cout << "P1.x = " << p1.x << " , p1.y = " << p1.y << std::endl;
    std::cout << "P2.x = " << p2.x << " , p2.y = " << p2.y << std::endl;

    return 0;
}

