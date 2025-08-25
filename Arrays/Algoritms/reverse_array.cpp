#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {78, 89, 98, 67, 45, 76, 88, 80};
    int size = 8;
    int start = 0;
    int end = 7;

    reverse(arr, start, end);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}