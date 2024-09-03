#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter count(5);

    cout << "Initial ";
    count.display();

    ++count; 
    cout << "After prefix increment ";
    count.display();

    count++; 
    cout << "After postfix increment ";
    count.display();

    return 0;
}

