// To check if the linked list is circular linked list or not

#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data
	struct Node* next;
};

Node *newnode(int data){
	struct Node* temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}

bool Circular(struct Node* head){
	if (head == NULL){
		return true;
	}
	
	struct Node* node = head->next;
	int i=0;
	while(node != NULL && node != head){
		i++;
		node = node->next;
	}
	return (node==head);
}

int main(){
	struct Node* node = newnode(1);
	head->next = newnode(2);
	head->next->next = newnode(3);
	head->next->next->next = newnode(4);
	head->next->next->next->next = newnode(5);
	
	Circular(head)?:cout << "YES";
					cout << "NO";
					
	head->next->next->next->next->next= head;
	Circular(head)?:cout << "YES";
					cout << "NO";
	return 0;

}