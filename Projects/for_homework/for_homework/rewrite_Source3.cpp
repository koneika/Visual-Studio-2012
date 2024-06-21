#include <iostream>

using namespace std;

struct Node
{
	int Value;
	Node* Next; // создаёт структуру в структуре
};

int first_node(Node* second, int &Value)
{
	Node* head = new Node;		// [head]
								// we creating th first node 

	head -> Value = 1;			// in the first node we put '1' in Value variable
	head -> Next = second;		// and it connect first with second node
	return Value;

}