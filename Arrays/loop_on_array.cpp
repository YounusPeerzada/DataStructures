#include <iostream>
using namespace std;

int main() {
    int marks[10] = {39, 49, 87, 76, 98, 56, 65, 23, 90, 67};
    // int size = 10;
    int size = sizeof(marks)/sizeof(int);  //We can also determine size through it.

    for (int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}