#include <iostream>

int findSmallestMissing(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    return size + 1;
}

int main() {
    int arr[] = {1, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingElement = findSmallestMissing(arr, size);
    std::cout << "Smallest missing element is: " << missingElement << std::endl;

    return 0;
}

