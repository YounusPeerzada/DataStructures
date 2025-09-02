#include <iostream>
#include <list>
using namespace std;

class Queue {
   public:
    list<int> ll;

    void push(int val) {
        ll.push_back(val); 
    }

    void pop() { 
        ll.pop_front(); 
    }

    int front() { 
        return ll.front(); 
    }

    bool empty() { 
        return ll.size() == 0; 
    }
};

int main() {
    Queue q;

    q.push(0);
    q.push(10);
    q.push(20);
    q.push(30);

    q.pop();

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}