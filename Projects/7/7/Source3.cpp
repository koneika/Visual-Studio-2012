
#include <iostream>
#include <string>
using namespace std;

struct Contact
{
	string name;
	string phone_number;
	Contact * next;
};

Contact * addToBegginning(Contact * head, string write_name, string write_phone_number)
{
	Contact * new_contact = new Contact;
	new_contact->name = write_name;
	new_contact->phone_number = write_phone_number;
	new_contact->next = head;

	return new_contact;
}

void display(Contact * head)
{
	Contact * current = head;
	while(current != nullptr)
	{
		cout << current->name << endl << current->phone_number << endl;
		current = current->next;
	}
}

void SearchByName(Contact * head)
{

	int counter = 0;
	Contact * current = head;
	while(current != nullptr)
	{
		counter++;
		current = current->next;
	}
	cout << counter << endl;

}

void gui()
{
	int a = 1;
	cout << "Menu" << endl;
	cout << a++ << ". add contact" << endl;
	cout << a++ << ". diplay out contacts" << endl;
	cout << a++ << ". exit" << endl;
}

int main()
{
	int cname = 0, cphone = 0; // c = contact
	Contact * head = nullptr;
	short choose;

	while(true)
	{
		string write_name; 
		string write_phone_number;
		gui();
		cin >> choose;

		switch(choose)
		{
		case 1:
			cout << "write anywhere '0' to close choosing" << endl;
			
			while(write_name != "0" || write_phone_number != "0")
			{
				cout << "write name: " << endl;
				cin >> write_name;
				if(write_name == "0")
					cout << "write again 0 please" << endl;
				cout << "write phone number" << endl;
				cin >> write_phone_number;
				if(write_name != "0" || write_phone_number != "0")
					head = addToBegginning(head, write_name, write_phone_number);
			}
			break;
		case 2:
			display(head);
			break;
		case 3:
			return 0;
			break;
		}
	}
	

	
	
	display(head);

	SearchByName(head);
	
	system("pause");
	return 0;
}


//Добавление нового контакта: Пользователь может ввести имя и номер телефона, и программа сохранит их в структуре данных.
//Поиск контакта по имени: Пользователь может ввести имя, и программа выведет соответствующий номер телефона.
//Удаление контакта: Пользователь может ввести имя, и программа удалит соответствующий контакт из справочника.
//Вывод всех контактов: Программа должна выводить список всех сохраненных контактов и их номеров телефонов.
