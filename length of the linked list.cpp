// Find the length of the linked list  --- to find the number of nodes in the linked list

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

void push(Node** head_ref,int new_data){
	Node* new_node = new Node()
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

int getcount(Node* head){
	int count = 0;
	Node* current = head;
	while(current != NULL){
		count++;
		current = current->next;
	}
	return count;
}

int main(){
	Node* head = NULL;
	push(&head,10);
	push(&head,15);
	push(&head,20);
	push(&head,30);
	push(&head,25);
	push(&head,35);
	
	cout << "Number of Nodes is "<<getcount(head)<< endl;
	return 0;
}