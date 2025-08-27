#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> distance = {90, 89, 67, 56, 78, 89, 98};
    int size = 7;

    for (int i = 0; i < size; i++) {
        cout << distance.at(i) << endl;  //  Alternative to the subscript operator [] for accessing elements
    }

    return 0;
}