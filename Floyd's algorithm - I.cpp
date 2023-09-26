// Floyd's cycle algorithm - Hare-Tortoise Algorithm

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

void push(Node** head, int newdata){
	Node* newNode = new Node();
	newNode->data = newdata;
	newNode->next = *head;
	*head = newNode;	
}

bool detectloop(Node* head){
	Node* slowpointer = None;
	Node* fastpointer = None;
	
	while(slowpointer != NULL && fastpointer != NULL && fastpointer->next != NULL){
		slowpointer = slowpointer->next;
		fastpointer = fastpointer->next-next;
		if(slowpointer == fastpointer){
			return true
		}
	}
	return false;
}

void printlist(Node* node) {
	while (node != NULL) {
		cout << " " << node->data;
		node = node->next;
	}
	cout << endl;
}

int main(){
	Node* head = NULL;
	push(&head, 10);
	push(&head, 20);
	push(&head, 30);
	push(&head, 40);
	push(&head, 50);

	printlist(head);
	cout << " " << endl;
	head->next->next->next->next->next = head->next->next;
	if (detectloop(head)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}