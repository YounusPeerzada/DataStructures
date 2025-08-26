#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> distance = {90, 89, 67, 56, 78, 89, 98};

    for (int i : distance) {
        cout << i << endl;
    }

    return 0;
}