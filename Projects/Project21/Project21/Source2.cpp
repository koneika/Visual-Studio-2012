#include <iostream>

using namespace std;

struct node
{
	int key;
	node *next; //	[data]
				//	[next]->
}	*start = NULL;

void logic()
{
	start = new node; // new node
	start -> key = 1; // node = 1

	start = new node; // new node
	start -> key = 2; // node = 2 

	start = new node; // new node
	start -> key = 3; // node = 3


	start = new node;	// new node
	start -> key = NULL;// node empty

	node *p1;			// we create p1
	p1 = start;			// start = NULL, it is in node NULL, so the same way have p1
	p1 -> next = start;	// p1 -> next, where is 'start' right now


	start = new node;	// new node
	start -> key = 4;	// new node is 4
	p1 = p1 -> next;	// p1 in node 3, we use p1 -> next for go to node 4

	start -> next = NULL; // probably done

}

int main()
{
	logic();
	/*add_before_last(n);*/


	system("pause");
	return 0;
}