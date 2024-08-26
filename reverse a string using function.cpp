#include <iostream>
#include <cstring>  
using namespace std;


void reverseString(const char* str, char* reversed) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
}

int main() {
    char str[100];
    char reversed[100];

    cout << "Enter a string: ";
    cin.getline(str, 100); 

    
    reverseString(str, reversed);

    
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

