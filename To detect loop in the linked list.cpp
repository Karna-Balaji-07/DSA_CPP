// To detect a loop in linked list

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	int flag;
};

void push(Node** head, int newdata) {
	Node* newNode = new Node();
	newNode->data = newdata;
	newNode->flag = 0;
	newNode->next = *head;
	*head = newNode;
}

void printlist(Node* node) {
	while (node != NULL) {
		cout << " " << node->data;
		node = node->next;
	}
	cout << endl;
}

bool detectlist(Node* temp) {
	while (temp != NULL) {
		if (temp->flag == 1) {
			return true;
	    }
		temp->flag = 1;
		temp = temp->next;
	}
	return false;
}

int main() {
	Node* head = NULL;
	push(&head, 10);
	push(&head, 20);
	push(&head, 30);
	push(&head, 40);
	push(&head, 50);

	printlist(head);
	cout << " " << endl;
	head->next->next->next->next->next = head->next->next;
	if (detectlist(head)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}