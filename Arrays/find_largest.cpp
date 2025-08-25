#include <climits>
#include <iostream>
using namespace std;

int main() {
    int distance[8] = {76, 56, 78, 89, 90, 69, 46, 34};
    int size = 8;

    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        largest = max(distance[i], largest);
    }

    cout << "The largest distance is " << largest;

    return 0;
}