#include <iostream>
using namespace std;

struct Box
{
	int data;
	Box * next; // �� ��������� � ����� ���������
};

Box * addToBegginer(Box * head, int value) // iniatialize empty list on the head(on the start), without this its fail for you :)
{
	Box * newBox = new Box();
	newBox->data = value;
	newBox->next = head;

	return newBox;
}

void printBox(Box * head)
{
	// ��� ������������� ��������, ��� ��������� current ����� ��������� �� 
	// ��� �� ����, ��� � head. ��� �������, ����� �� ������ �������� �� 
	// ���������� ������, ������� � ������.
	Box * current = head;
	while(current != nullptr)
	{
		cout << current->data << "->";
		current = current->next;
	}
	cout << "nullptr" << endl;
}

void addInfinityBox(Box * head)
{
	cout << head->next << endl;
}

int main()
{
	Box * head = nullptr; // our list is empty
	int choose, choose1;

	head = addToBegginer(head, 5);
	head = addToBegginer(head, 4);
	head = addToBegginer(head, 3);
	head = addToBegginer(head, 2);
	head = addToBegginer(head, 1);
	head = addToBegginer(head, 0); // "head =" this meaning that we put it to the head(or start)
	
	do
	{

		cout << "choose 1" << endl;
		cin >> choose;
		if(choose == 1)
		{
			cout << "write any number" << endl;
			cin >> choose1;
			addInfinityBox(head, choose1);
		}
		else
			printBox(head);
	}while(true);

	

	system("pause");
	return 0;
}