#include <iostream>
using namespace std;

// Создаем структуру для узла списка
struct Node {
    int data;
    Node* next;
} *head = NULL;



// Вставка в начало списка
Node* insertAtBeginning(Node* head_ref, int new_data) {
	Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = head_ref;
    head_ref = new_node;
    return head_ref;
}

// Вставка после указанного узла
Node* insertAfter(Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        cout << "Предыдущий узел не может быть NULL\n";
        return NULL;
    }
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    return prev_node;
}

// Вставка в конец списка
Node* insertAtEnd(Node* head_ref, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = NULL;
    if (head_ref == NULL) {
        head_ref = new_node;
        return head_ref;
    }
    Node* last = head_ref;
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return head_ref;
}

// Удаление узла
void deleteNode(Node* head_ref, int key) {
    Node* temp = head_ref;
    Node* prev;
    if (temp != NULL && temp->data == key) {
        head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;
    free(temp);
}

// Поиск узла
bool searchNode(Node* head_ref, int key) {
    Node* current = head_ref;
    while (current != NULL) {
        if (current->data == key)
            return true;
        current = current->next;
    }
    return false;
}

// Сортировка связанного списка
void sortLinkedList(Node* head_ref) {
    Node* current = head_ref;
    Node* index = NULL;
    int temp;
    if (head_ref == NULL)
        return;
    else {
        while (current != NULL) {
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

// Вывод списка
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    head = insertAtEnd(head, 1);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 3);
    head = insertAtEnd(head, 4);
    insertAfter(head, 5);

	sortLinkedList(head);
    cout << "Linked list: ";
    printList(head);

	system("pause");
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

