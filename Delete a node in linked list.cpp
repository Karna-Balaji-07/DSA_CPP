// delete a node in linked list

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
};

void push(Node** head_ref,int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

void Delete(Node** head_ref, int position){
	if (*head_ref == NULL){
		return 0;
	}
	Node* temp = *head_ref;
	
	// To delete the first node
	if(position == 0){
		*head_ref = temp->next;
		free(temp);
		return;
	}
	
	//To delete the node at the specified position
	for(int i=0;temp!=NULL && i< position-1 ;i++){
		temp = temp->next;}
	if(temp == NULL || temp->next == NULL){
		return;
	}
	Node* next = temp->next->next;
	free(temp->next);
	temp->next = next;	
		
	
}


void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
 
// Driver code
int main()
{
 
    // Start with the empty list
    Node* head = NULL;
 
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);
 
    cout << "Created Linked List: ";
    printList(head);
    deleteNode(&head, 4);
    cout << "\nLinked List after Deletion at position 4: ";
    printList(head);
    return 0;