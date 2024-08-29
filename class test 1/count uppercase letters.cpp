#include <iostream>
#include <string>
#include <cctype> // Include this header for isupper function
using namespace std;

int countUppercase(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (isupper(ch)) {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "C++ is a Programming Language";
    cout << "Number of uppercase letters: " << countUppercase(str) << endl;
    return 0;
}

