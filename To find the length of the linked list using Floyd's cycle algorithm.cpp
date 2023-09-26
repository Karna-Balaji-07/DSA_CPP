// Find the length of the loop in the given linked list

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
	int flag = 0;
	int count;
	
	while(slowpointer != NULL && fastpointer != NULL && fastpointer->next != NULL && slowpointer->next != NULL && fastpointer->next->next!= NULL){
			if(slowpointer == fastpointer && flag != 0){
			count = 1;
			slowpointer = slowpointer->next;
			while(slowpointer != fastpointer){
				slowpointer=slowpointer->next;
				count ++;
			return count;
			}
			}
			slowpointer = slowpointer->next;
			fastpointer = fastpointer->next->next;
			flag = 1;
				
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