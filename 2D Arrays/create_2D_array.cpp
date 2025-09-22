#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << arr[0][0] << endl;  // 1
    cout << arr[1][2] << endl;  // 6
    cout << arr[2][1] << endl;  // 8

    return 0;
}