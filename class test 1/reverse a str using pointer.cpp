#include <iostream>
#include <cstring>

void reverseString(char* str) {
    char* end = str + strlen(str) - 1;
    char temp;

    while (str < end) {
        temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

int main() {
    char str[] = "Hello";
    reverseString(str);
    std::cout << str << std::endl;
    return 0;
}

