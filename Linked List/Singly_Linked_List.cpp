#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class SinglyList {
    Node* head;
    Node* tail;

   public:
    SinglyList() {
        head = tail = NULL; 
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (tail == NULL) {
            head = tail = newNode;
            return;
        }
        
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front() {
        if (head == NULL) {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head == NULL) {
            tail = NULL;
        }

        delete temp;
    }

    void pop_back() {
        if (tail == NULL) {
            return;
        }

        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next != tail) {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void printLL() {
        if (head == NULL) {
            cout << "Linked List is empty\n";        
            return;
        }

        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";

            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    SinglyList ll;

    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);

    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);

    ll.pop_back();
    ll.pop_back();

    ll.pop_front();

    ll.printLL();

    return 0;
}