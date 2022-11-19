// C code to print Alternate Nodes 
#include <stdio.h> 
#include <stdlib.h> 

/* Link list node */
struct Node { 
	int data; 
	struct Node* next; 
}; 

/* Function to get the alternate 
nodes of the linked list */
void printAlternateNode(struct Node* head) 
{ 
	int count = 0; 

	while (head != NULL) { 

		// when count is even print the nodes 
		if (count % 2 == 0) 
			printf(" %d ", head->data); 

		// count the nodes 
		count++; 

		// move on the next node. 
		head = head->next; 
	} 
} 

// Function to push node at head 
void push(struct Node** head_ref, int new_data) 
{ 
	struct Node* new_node = 
		(struct Node*)malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 

// Driver code 
int main() 
{ 
	/* Start with the empty list */
	struct Node* head = NULL; 

	/* Use push() function to construct 
	the below list 8 -> 23 -> 11 -> 29 -> 12 */
	push(&head, 12); 
	push(&head, 29); 
	push(&head, 11); 
	push(&head, 23); 
	push(&head, 8); 

	printAlternateNode(head); 

	return 0; 
} 
