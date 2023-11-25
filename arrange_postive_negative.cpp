#include <iostream>


void segregateElements(int arr[], int n) {
    int posCount = 0;

    // Move negative elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            std::swap(arr[i], arr[posCount]);
            posCount++;
        }
    }
}

int main() {
    // Example usage
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateElements(arr, n);

    // Print the segregated array
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
