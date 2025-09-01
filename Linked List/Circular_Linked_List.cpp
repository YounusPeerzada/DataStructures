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

class CircularList {
    Node* head;
    Node* tail;

   public:
    CircularList() { 
        head = tail = NULL; 
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
            return;
        }

        newNode->next = head;
        head = newNode;
        tail->next = head;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
            return;
        }

        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }

    void deleteAtHead() {
        if (head == NULL) {
            return;
        } else if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }
    }

    void deleteAtTail() {
        if (tail == NULL) {
            return;
        } else if (head == tail) {
            delete tail;
            head = tail = NULL;
        } else {
            Node* temp = tail;
            Node* prev = head;

            while (prev->next != tail) {
                prev = prev->next;
            }

            tail = prev;
            tail->next = head;
            delete temp;
        }
    }

    void printLL() {
        if (head == NULL) {
            cout << "Linked List is empty\n";
            return;
        }

        cout << head->data << " ";

        Node* temp = head->next;

        while (temp != head) {
            cout << temp->data << " ";

            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    CircularList ll;

    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);

    ll.insertAtHead(2);
    ll.insertAtHead(1);
    ll.insertAtHead(0);

    ll.deleteAtTail();
    ll.deleteAtTail();

    ll.deleteAtHead();

    ll.printLL();

    return 0;
}