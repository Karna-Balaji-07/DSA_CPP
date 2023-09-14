// Seardhing an element in a linked list using O(N) extra space

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

int main(){
	int x = 30;
	Node* head = NULL;
	push(&head,10);
	push(&head,15);
	push(&head,20);
	push(&head,30);
	push(&head,25);
	push(&head,35);
	
	vector<int> v;
	
	Node* temp = head;
	while(temp!=NULL){
		v.push_back(temp->data);
		temp = temp->next;
	}
	
	vector<int> :: iterator it;
	find(v.begin(),v.end(),x);
	if(it == v.end()){
		cout << "NO"<< endl;
	}
	else{
		cout << "YES" << endl;
	}
	return 0;
}