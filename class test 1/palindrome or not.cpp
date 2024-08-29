#include <iostream>

bool isPalindrome(int num) {
    int originalNum = num, reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num = 123321;
    if (isPalindrome(num)) {
        std::cout << "It is a Palindrome" << std::endl;
    } else {
        std::cout << "It is not a Palindrome" << std::endl;
    }

    return 0;
}

