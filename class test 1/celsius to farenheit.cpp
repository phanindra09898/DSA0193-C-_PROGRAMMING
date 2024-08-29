#include <iostream>
using namespace std;

void convertToFahrenheit(float* celsius, int n) {
    for (int i = 0; i < n; ++i) {
        float fahrenheit = (*(celsius + i) * 9 / 5) + 32;
        cout << fahrenheit << " ";
    }
    cout << endl;
}

int main() {
    float celsius[] = {4.4, 10, 12, 7, 70};
    int n = sizeof(celsius) / sizeof(celsius[0]);

    convertToFahrenheit(celsius, n);

    return 0;
}

