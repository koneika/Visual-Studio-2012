#include <stdlib.h>
#include <iostream>
using namespace std;

// Create a Node
struct Node 
{
	int data;
	Node* next;
	
}	*head = NULL;

struct Node {}*head = NULL; // ƒј…“≈ √ќ…ƒ”


// Allocate memory to a Node // ну типо можно сюда в функцию еЄ кинуть, типо надо но не надо
// struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
Node* insert_at_beginning(Node* head_ref, int new_data) 
{
	Node *new_Node = new Node;

	// вставить дату в структ
	/* ну типо закинули наш новый елем */ new_Node -> data = new_data;	/* нью_дата у нас инт, потому что дата в структ тоже инт */
										  new_Node -> next = head_ref;	/* а хеад_реф будет елем*, потому что так некс тоже со звЄздочкой */

	
	head_ref = new_Node; /* типо зе сейм */

	return head_ref;	 /* € не знаю что мы возвращаем, но тип данных у нас Node */ 
						 /* или мы просто возвращаем число которое получили или данные? */
}

// вставить елем до елема?
// найс по€снение, к которому € не вижу пон€ти€
// Insert a Node after a Node
Node * insertAfter(Node* prev_Node, int new_data) 
{

	if (prev_Node == NULL) { /* откуда тут предыдущий елем вз€лс€? */ /* мы типо его создали прикиньте*/
		cout << "the given previous Node cannot be NULL\n"; 
		return NULL;
	}

	
	struct Node {}*head = NULL;

	struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));

	Node *new_Node = new Node;

	new_Node->data = new_data;
	new_Node->next = prev_Node->next;
	prev_Node->next = new_Node;

	return prev_Node;
}

// Insert at the end
Node * insertAtEnd(Node* head_ref, int new_data) 
{
	//struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
	Node *new_Node = new Node;
	Node* last = head_ref; /* used in step 5*/

	new_Node->data = new_data;
	new_Node->next = NULL;

	if (head_ref == NULL) {
		head_ref = new_Node;
		return head_ref;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_Node;

	return head_ref;
}

// Delete a Node
void deleteNode(Node* head_ref, int key) 
{
	Node *temp = head_ref;
	Node *prev;

	if (temp != NULL && temp->data == key) {
		head_ref = temp->next;
		free(temp);
		return;
	}
	// Find the key to be deleted
	while (temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}

	// If the key is not present
	if (temp == NULL) 
		return;

	// Remove the Node
	prev->next = temp->next;

	free(temp);
}

// Search a Node
bool searchNode(Node* head_ref, int key) 
{
	//struct Node* current = *head_ref;
	Node *current = head_ref;

	while (current != NULL) {
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

	if (head_ref == NULL) {
		return;
	} 
	else {
		while (current != NULL) {
		// index points to the Node next to current
		index = current->next;

			while (index != NULL) {
				if (current->data > index->data) {
					temp = current->data;
					current->data = index->data;
					index->data = temp;
				}
				index = index->next;
			}
			current = current->next;
		}
	}
}

// Print the linked list
void printList(Node* Node) 
{
	while (Node != NULL) {
		cout << Node->data << " ";
		Node = Node->next;
	}
}

int main() 
{
	struct Node* head = NULL;

	head = insertAtEnd(head, 1);
	head = insertAtBeginning(head, 2);
	head = insertAtBeginning(head, 3);
	head = insertAtEnd(head, 4);
	insertAfter(head, 5);

	cout << "Linked list: ";
	printList(head);
  
	return 0;
}

