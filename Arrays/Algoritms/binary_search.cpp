#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int n = arr.size();
    int st = 0;
    int end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (target > arr[mid]) {
            st = mid + 1;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> marks = {43, 57, 78, 81, 88, 98, 99};
    int target = 43;

    int ans = binarySearch(marks, target);

    cout << ans << endl;

    return 0;
}