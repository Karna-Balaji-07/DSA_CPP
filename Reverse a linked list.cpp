// Reverse a linked list

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

void push(Node** head_ref,int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

void reverse(Node** head_ref){
	Node* current = *head_ref;
	Node* previous = NULL;
	Node* next = NULL;
	while(current != NULL){
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head_ref = previous;
}

void printlist(Node* node){
	while(node != NULL){
		cout << " " << node->data;
		node = node->next;
	}
	cout << "\n ";
}

int main(){
	Node* head = NULL;
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	
	cout << "Original Linked List" << " "<< endl;
	printlist(head);
	reverse(&head);
	cout << "Reversed List : "<<endl;
	printlist(head);
	return 0;
}