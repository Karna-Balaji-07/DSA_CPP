// Searrching an element in linked list using iterative approach

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

bool search(Node *head_ref,int key){
	Node* current = head;
	while(current != NULL){
		if (current->data == key)
			return true
		current = current->next ;	
	}
	return false;
}

int main(){
	Node*head = NULL;
	int key = 20;
	push(&head,13);
	push(&head,123);
	push(&head,45);
	push(&head,20);
	push(&head,11);
	
	res = search(head,x);
	if(res==true)
	cout << "YES"<<endl;
	else{
		cout << "NO"<<endl;
	}
}
