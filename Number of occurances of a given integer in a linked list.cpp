// Count the number of times a given integer occurs in a linked list

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

void printlist(Node* node){
	while(node != NULL){
		cout << node->data << " ";
		node = node->temp;
	}
	cout <<" " <<endl;
	
}

int count(Node* head,int element){
	Node* current = head;
	int count = 0;
	while (current !=NULL){
		if (element == current->data){
			count++;
		}
		currrent = current->next;
	}
	return count;
}

int main(){
	Node* head = NULL;	
	push(&head,1);
	push(&head,2);
	push(&head,4);
	push(&head,1);
	push(&head,1);
	push(&head,1);
	push(&head,5);
	push(&head,1);
	push(&head,8);
	push(&head,1);
	push(&head,13);
	push(&head,1);
	
	int res = count(head,1);
	cout << "Number of times 1 in linked list is" << res << endl;
	return 0;
}