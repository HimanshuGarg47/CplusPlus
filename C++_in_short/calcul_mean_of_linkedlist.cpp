// C++ implementation to find the average of 
// nodes of the Linked List 

#include <bits/stdc++.h> 
using namespace std; 

/* A Linked list node */
struct Node { 
	int data; 
	struct Node* next; 
}; 

// function to insert a node at the 
// beginning of the linked list 
void push(struct Node** head_ref, int new_data) 
{ 
	/* allocate node */
	struct Node* new_node = new Node; 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list to the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

// Function to iteratively find the avg of 
// nodes of the given linked list 
float avgOfNodes(struct Node* head) 
{ 
	// if head = NULL 
	if (!head) 
		return -1; 

	int count = 0; // Initialize count 
	int sum = 0; 
	float avg = 0.0; 

	struct Node* current = head; // Initialize current 
	while (current != NULL) { 
		count++; 
		sum += current->data; 
		current = current->next; 
	} 

	// calculate average 
	avg = (double)sum / count; 

	return avg; 
} 

// Driver Code 
int main() 
{ 
	struct Node* head = NULL; 

	// create linked list 7->6->8->4->1 
	push(&head, 7); 
	push(&head, 6); 
	push(&head, 8); 
	push(&head, 4); 
	push(&head, 1); 

	cout << "Average of nodes = " << avgOfNodes(head); 

	return 0; 
} 
