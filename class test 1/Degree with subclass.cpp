#include <iostream>

class Degree {
public:
    virtual void getDegree() const {
        std::cout << "I got a Degree" << std::endl;
    }
};

class Undergraduate : public Degree {
public:
    void getDegree() const override {
        std::cout << "I am an Undergraduate" << std::endl;
    }
};

class Postgraduate : public Degree {
public:
    void getDegree() const override {
        std::cout << "I am a Postgraduate" << std::endl;
    }
};

int main() {
    Degree degree;
    Undergraduate ug;
    Postgraduate pg;

    degree.getDegree();
    ug.getDegree();
    pg.getDegree();

    return 0;
}

