#include <stdlib.h>

#include <iostream>
using namespace std;

// Create a node
struct Node 
{
	int data;
	Node* next;
}	*head = NULL;

Node* insertAtBeginning(Node* head_ref, int new_data) 
{
	// Allocate memory to a node
	//struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	Node *new_node = new Node;
	// insert the data
	new_node->data = new_data;
	new_node->next = head_ref;

	// Move head to new node
	head_ref = new_node;
	return head_ref;
}

// Insert a node after a node
Node * insertAfter(Node* prev_node, int new_data) 
{
	if (prev_node == NULL) 
	{
		cout << "the given previous node cannot be NULL\n";
		return NULL;
	}

	//struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	Node *new_node = new Node;
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return prev_node;
}

// Insert at the end
Node * insertAtEnd(Node* head_ref, int new_data) 
{
	//struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	Node *new_node = new Node;
	Node* last = head_ref; /* used in step 5*/

	new_node->data = new_data;
	new_node->next = NULL;

	if (head_ref == NULL) 
	{
		head_ref = new_node;
		return head_ref;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return head_ref;
}

// Delete a node
void deleteNode(Node* head_ref, int key) 
{
	Node *temp = head_ref;
	Node *prev;

	if (temp != NULL && temp->data == key) 
	{
		head_ref = temp->next;
		free(temp);
		return;
	}
	// Find the key to be deleted
	while (temp != NULL && temp->data != key) 
	{
		prev = temp;
		temp = temp->next;
	}

	// If the key is not present
	if (temp == NULL) 
		return;

	// Remove the node
	prev->next = temp->next;

	free(temp);
}

// Search a node
bool searchNode(Node* head_ref, int key) 
{
	//struct Node* current = *head_ref;
	Node *current = head_ref;

	while (current != NULL) 
	{
		if (current->data == key) 
			return true;
		current = current->next;
	}
	return false;
}

// Sort the linked list
void sortLinkedList(Node* head_ref) 
{
	Node *current = head_ref;
	Node *index = NULL;
	int temp;

	if (head_ref == NULL) 
		return;
	else 
		while (current != NULL) 
		{
			// index points to the node next to current
			index = current->next;

			while (index != NULL) 
			{
				if (current->data > index->data) 
				{
					temp = current->data;
					current->data = index->data;
					index->data = temp;
				}
				index = index->next;
			}
			current = current->next;
		}

}

// Print the linked list
void printList(Node* node) 
{
	while (node != NULL) 
	{
		cout << node->data << " ";
		node = node->next;
	}
}

int main() 
{
	//struct Node* head = NULL;
	head = insertAtEnd(head, 1);
	head = insertAtBeginning(head, 2);
	head = insertAtBeginning(head, 3);
	head = insertAtEnd(head, 4);
	insertAfter(head, 5);

	cout << "Linked list: ";
	printList(head);
  
	return 0;
}

//https://www.cs.usfca.edu/~galles/visualization/BST.html
//
//https://www.cs.usfca.edu/~galles/visualization/AVLtree.html
//
//https://www.cs.usfca.edu/~galles/visualization/StackLL.html
//
//https://www.cs.usfca.edu/~galles/visualization/QueueLL.html
//
//https://csanim.com/tutorials/inorder-preorder-and-postorder-tree-traversals-animated-guide
//
//https://www.cs.usfca.edu/~galles/visualization/Algorithms.html

