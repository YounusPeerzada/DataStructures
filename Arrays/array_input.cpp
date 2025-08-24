#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int price[size];

    for (int i = 0; i < size; i++) {
        cin >> price[i];
    }

    for (int i = 0; i < size; i++) {
        cout << price[i] << endl;
    }

    return 0;
}