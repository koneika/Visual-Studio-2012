#include <iostream>

using namespace std;

struct Box
{
	int data;
	Box * next;
};

Box * create_box(int data) // head = start, really need for start, belive that
{
	Box * temp = new Box();
	temp->data = data;
	temp->next = nullptr;

	return temp;
}

void begginer_box(Box * & start, int data)
{
	Box * temp1 = create_box(data);
	temp1->next = start;
	start = temp1;
}

void print_list(Box * start)
{
	Box * temp2 = start;
	while(temp2 != nullptr)
	{
		cout << temp2->data << endl;
		temp2 = temp2->next;
	}
	cout << endl;
}

int main()
{
	Box * start = new Box();

	for(int i = 0; i < 5; i++)
	{
		int a;
		cin >> a;
		begginer_box(start, a);
	}

	print_list(start);
	//cout << create_box(0)->data << endl;

	system("pause");
	return 0;
}