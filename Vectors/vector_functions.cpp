#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << "Size of a vec is " << vec.size() << endl;  //  Gives the size of a vector

    for (char val : vec) {
        cout << val << endl;
    }

    vec.push_back('f');  //  Push 'f' at the end of the vec
    vec.push_back('g');  //  Push 'g' at the end of the vec

    cout << "Size of a vector after push_back is " << vec.size() << endl;

    for (char val : vec) {
        cout << val << endl;
    }

    vec.pop_back();  //  Remove 'g' at the end of the vec

    cout << "Size of a vector after pop_back is " << vec.size() << endl;

    for (char val : vec) {
        cout << val << endl;
    }

    cout << "The first value of a vec is : ";
    cout << vec.front() << endl;  //  Prints the 1st value of a vec

    cout << "The last value of a vec is : ";
    cout << vec.back() << endl;  //  Prints the last value of a vec

    return 0;
}