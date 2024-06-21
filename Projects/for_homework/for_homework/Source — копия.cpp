#include <iostream>

using namespace std;

struct Node
{
	int Value;
	Node* Next; // создаёт структуру в структуре
};

/*Node* p, * q, * p1;*/ // probably gloabal variables ??? 
					// for help in struct, i will use it in third_node and other one



int first_node(Node* second, int Value)
{
	Node* head = new Node;		// [head]
								// we creating th first node 

	head -> Value = 1;			// in the first node we put '1' in Value variable
	head -> Next = second;		// and it connect first with second node
	return Value;

}

int second_node(Node* third, int Value)
{
	Node* second = new Node;	// [second]
								// creating the second node	

	second -> Value = 2;		// in the second node, we put number 2 in value variable
	second -> Next = third;		// and we go to the third node
	return Value;

}

int third_node(int Value)
{
	Node* third = new Node;		// [third]
	Node* p = third;
	Node* q = third;
	Node* p1 = third;
								// and the third node

	third -> Value = 3;			// we put in the third node number 3
	
	
	while(p -> Next){
		p = p -> Next;
	}
	q = p;
	p1 = p;
	return Value;

}

int unknown_node(Node* third, int Value, Node* p, Node* q, Node* p1)
{
	Node* unknown = new Node;	// [unknown]

	unknown -> Value = NULL;	// unknown Value = NULL, probably this node no need 
								// in any variable value any numbers

	third -> Next = unknown;	// and we go to unknown node
	p = p -> Next;				// from node3, p go to node_null
	q = p;						// q like p
	p1 = p;						// p1 like p
	
	return Value;
}

int fourth_node(int Value, Node* p, Node* q, Node* p1)
{
	Node* fourth = new Node;	//[fourth]

	fourth -> Value = 4;
	fourth -> Next = NULL;		// no need to go anywhere, we are stopped here
	p = p -> Next;				// from node_null, p go to node4
	q = p;
	p1 = p;

	return Value;
	//	[1/next]->[2/next]->[3/next]->[unknown/next]->[4/next and p/q/p1]->NULL
}

void watch_our_results(Node* head, Node* second, Node* third, Node* unknown, Node* fourth, int Value, Node* p, Node* q, Node* p1)
{
	Value = 0;
	first_node(second, Value);
	second_node(third, Value);
	third_node(Value);
	unknown_node(fourth, Value, p, q, p1);
	fourth_node(Value, p, q, p1);
	
	return;
}

int main(Node* head, Node* second, Node* third, Node* unknown, Node* fourth, Node* p, Node* q, Node* p1)
{
	int Value;
	Value = 0;

	watch_our_results(head, second, third, unknown, fourth, Value, p, q, p1);

	system("pause");
	return 0;
}