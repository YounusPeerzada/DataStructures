#include <iostream>
using namespace std;

int main() {
    int price[5];         // Declares an array of size 5
    int marks[5] = {45, 67, 90, 65, 76};  // Array initialization with explicit size
    int score[] = {76, 65, 98, 31, 29};   // Array initialization with implicit size.
    int num[4] = {4, 5};  // Here the memory is allocated for the 2 items.The
                          // remaining last 2 elements is initialized to zero.

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}
