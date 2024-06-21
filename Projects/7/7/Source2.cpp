#include <iostream>
#include <string>
using std::string; using std::cout; using std::cin; using std::endl;

struct Box
{
	int data;
	Box * next; // из структуры в новую структуру
};

Box * addToBegginning(Box * head, int value) // iniatialize empty list on the head(on the start), without this its fail for you :)
{
	Box * newBox = new Box();
	newBox->data = value;
	newBox->next = head;

	return newBox;
}

void printBox(Box * head)
{
	// Эта инициализация означает, что указатель current будет указывать на 
	// тот же узел, что и head. Это полезно, когда ты хочешь пройтись по 
	// связанному списку, начиная с головы.
	Box * current = head;
	while(current != nullptr)
	{
		cout << current->data << "->";
		current = current->next;
	}
	cout << "nullptr" << endl;
}

int main()
{
	Box * head = nullptr; // our list is empty
	int choose, choose1;

	head = addToBegginning(head, 5);
	head = addToBegginning(head, 4);
	head = addToBegginning(head, 3);
	head = addToBegginning(head, 2);
	head = addToBegginning(head, 1);
	head = addToBegginning(head, 0); // "head =" this meaning that we put it to the head(or start)
	
	
	printBox(head);


	

	cin.get();
	return 0;
}