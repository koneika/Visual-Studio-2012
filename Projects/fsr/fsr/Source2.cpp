#include <iostream>
using namespace std;

// Определение структуры узла
struct Node {
    int data;
    Node* left;
    Node* right;

    //// Конструктор для создания нового узла
    //Node(int value) : data(value), left(nullptr), right(nullptr) {}

	Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }

};

// Функция для добавления узла
Node* insert(Node* root, int data) {
    if (root == nullptr) 
	{
        return new Node(data);
    }
    if (data < root->data) 
	{
        root->left = insert(root->left, data);
    } 
	else 
	{
        root->right = insert(root->right, data);
    }
    return root;
}

// Функция для обхода дерева (in-order)
void inOrderTraversal(Node* root) 
{
    if (root != nullptr) 
	{
        inOrderTraversal(root->left);
        cout << root->data << ' ';
        inOrderTraversal(root->right);
    }
}

// Главная функция
int main() {
    Node* root = nullptr;

    // Добавление элементов в дерево
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 6);
    root = insert(root, 8);
	root = insert(root, 11);
	root = insert(root, 12);
	root = insert(root, 10);
	root = insert(root, 9);

    // Вывод элементов дерева
    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

	system("pause");
    return 0;
}
