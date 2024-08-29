#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Displaying addresses using array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Address of arr[" << i << "] = " << &arr[i] << std::endl;
    }

    return 0;
}

