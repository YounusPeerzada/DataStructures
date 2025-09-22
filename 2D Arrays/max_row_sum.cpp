#include <climits>
#include <iostream>

using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;

    int maxSum = INT_MIN;

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum = sum + arr[i][j];
        }
        maxSum = max(maxSum, sum);
    }

    cout << maxSum << endl;

    return 0;
}