#include <iostream>
using namespace std;

int main() {
    int n = 10;  
    int t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci Series: ";

    cout << t1 << " " << t2 << " ";

    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}

