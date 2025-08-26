#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> marks = {67, 89, 90, 67, 68, 56};

    for (int val : marks) {
        cout << val << endl;
    }

    return 0;
}