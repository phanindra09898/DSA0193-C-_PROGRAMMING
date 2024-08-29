#include <iostream>
#include <string>

class String {
private:
    std::string str;
public:
    String(std::string s) : str(s) {}

    bool operator==(const String& other) const {
        return str == other.str;
    }
};

int main() {
    String str1("Apple");
    String str2("orange");

    if (str1 == str2) {
        std::cout << "Both are equal" << std::endl;
    } else {
        std::cout << "Both not equal" << std::endl;
    }

    return 0;
}

