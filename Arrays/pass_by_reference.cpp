#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 3 * arr[i];
    }
}

int main() {
    int arr[5] = {65, 67, 98, 89, 76};
    int size = 5;

    changeArr(arr, 5);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}