#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int marks[] = {76, 78, 65, 90, 54};
    int sz = 5;
    int target = 54;

    cout << linearSearch(marks, sz, target);

    return 0;
}
