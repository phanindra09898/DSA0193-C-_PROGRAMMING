#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str = "Good";

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;

    reverse(str.begin(), str.end());
    cout << str << endl;

    return 0;
}

