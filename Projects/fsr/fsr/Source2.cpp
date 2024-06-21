#include <iostream>
using namespace std;

// ����������� ��������� ����
struct Node {
    int data;
    Node* left;
    Node* right;

    //// ����������� ��� �������� ������ ����
    //Node(int value) : data(value), left(nullptr), right(nullptr) {}

	Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }

};

// ������� ��� ���������� ����
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

// ������� ��� ������ ������ (in-order)
void inOrderTraversal(Node* root) 
{
    if (root != nullptr) 
	{
        inOrderTraversal(root->left);
        cout << root->data << ' ';
        inOrderTraversal(root->right);
    }
}

// ������� �������
int main() {
    Node* root = nullptr;

    // ���������� ��������� � ������
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

    // ����� ��������� ������
    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

	system("pause");
    return 0;
}
