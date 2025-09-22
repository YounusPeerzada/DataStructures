#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };

    int rows = 4;
    int cols = 4;

    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                sum += arr[i][j];
            }

            if (j == cols - 1 - i && i != j) {
                sum += arr[i][j];
            }
        }
    }

    cout << sum << endl;

    return 0;
}