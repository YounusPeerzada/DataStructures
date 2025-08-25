#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {78, 89, 98, 67, 45, 76, 88, 80, 90};
    int sz = 9;

    reverse(arr, sz);

    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}