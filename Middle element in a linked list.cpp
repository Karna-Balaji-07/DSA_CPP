// Middle of the linked list

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

class Linkedlist{
	public:
	void push(class Node** head_ref,int new_data){
		class Node* new_node = new Node();
		new_node->data = new_data;
		new_node->next = *head_ref;
		*head_ref = new_node;
	}
	
	void printlist(class Node* head){
		while (head != NULL){
			cout << head->data << " ";
			head = head->next;
		}
		cout <<" " <<endl;
	}
	
	int getlen(class Node* head){
		int count = 0;
		class Node* temp = head
		while (temp){
			count++;
			temp = temp->next;
		}
		return count;
	}
	
	void middleelement(class Node* head){
		if (head){
			int count = getlen(head);
			class Node* temp = head;
			int middle = count / 2;
			while (middle--){
				temp = temp->next
			}
			cout << "Middle element is : "<< temp->data<<endl;;
		}
	}
};

int main(){
	class Node* head = NULL;
	class Node* Linkedlist temp = new Linkedlist();
	for( i=5;i>0;i--){
		temp->push(&head,i);
		temp->push(head);
		temp->middleelement(head);
	}
	return 0;
}