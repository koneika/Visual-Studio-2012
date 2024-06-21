#include <iostream>
using namespace std;

struct Box
{
	int data;
	Box * next; // запомните тавари это
};

Box * add_start_list(Box * head, int value)
{
	Box * new_box = new Box();
	new_box->data = value;
	new_box->next = head;

	return head;
}



int main()
{
	Box * head = nullptr;

	return 0;
}