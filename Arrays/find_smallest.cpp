#include <climits>
#include <iostream>
using namespace std;

int main() {
    int speed[5] = {120, 105, 110, 145, 100};
    int size = 5;

    int smallest_speed = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (speed[i] < smallest_speed) {
            smallest_speed = speed[i];
        }
    }

    cout << "The smallest speed is " << smallest_speed;

    return 0;
}