// linked list to circular linked list



#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void convertToCircular() {
        Node* start = head;
        while (head->next != nullptr)
            head = head->next;
        head->next = start;
    }

    void displayList() {
        Node* current = head;
        if (head != nullptr) {
            do {
                cout << current->data << " ";
                current = current->next;
            } while (current != head);
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    list.push(15);
    list.push(14);
    list.push(13);
    list.push(22);
    list.push(17);

    list.convertToCircular();

    cout << "Display list: " << endl;
    list.displayList();

    return 0;
}