#include <iostream>
//#include <process>

using namespace std;

struct elem
{
	int key;
	elem *next;
}	*start = NULL;

void add_b(int n)
{
	elem *p = start;
	start = new elem;
	start -> key = n;
	start -> next = p;
}

int search_iter(int n)
{
	elem *p = start;
	if (start){
		while((p -> key != n) && (p -> next))
			p = p -> next;
		if (p -> key == n)
			return 1;
		else
			return 0;
		return 0;
	}
}

void add_bk(int n, int k)
{
	elem *q;
	elem *p = start;
	if (search_iter(k))
	{
		while(p -> key != k)
			p = p -> next;

		q = new (elem);
		q -> next = p -> next; q -> key = p -> key;
		p -> next = q; p -> key = n;
	}
}

void add_ak(int n, int k)
{
	elem *q;
	elem *p = start;
	if (search_iter(k)){
			while (p -> key != k)
				p = p -> next;
		q = new elem;
		q -> key = n;
		p -> next = q;
	}
	else
		cout << "no elem with valuse k=" << k << "\n";
}

void add_e(int n)
{
	elem *p = start, *q;
	q = new elem;
	q -> key = n;
	q -> next = NULL;
	if(start){
	while (p -> next)
		p = p -> next;
		p -> next = q;
	}
	else
		start = q;
}

int del_b(int &n)
{
	elem *p = start;
	if (start)
	{
		n = start -> key;
		start = start -> next;
		delete p;
		return 1;
	}
	else
		return 0;

}

int del_e(int &n)
{
	elem *p = start, *q;
	if (start){
		if (p -> next){
			while (p -> next){
				q = p;
				p = p -> next;
			}
			q -> next = NULL;
		}
		else
			start = NULL;
		n = p -> key;
		delete p;
		return 1;
	}
	else
		return 0;
}

int del_n (int k)
{
	elem *q;
	elem *p = start;
	if (start){
		while (p -> key != k)
			q = p;
		p = p -> next;
		if (p == start)
			start = NULL;
		else
			q -> next = p -> next;
		delete p;
		return 1;
	}
	else
		return 0;
}

void list()
{
	elem *p = start;
	if (start)
		cout << "\nThe list is ->";
	else
		cout << "\nThe list is empty!";
	while (p)
	{
		cout << p -> key << " ";
		p = p -> next;
	}
	cout << "\n\n";

}



int main()
{
	int k, num, m;
	do{
		system("cls");
		cout << "Menu" << endl;
		cout << "1 - Add the first element" << endl;
		cout << "2 - Add the element before k" << endl;
		cout << "3 - Add the element after k" << endl;
		cout << "4 - Add the last element" << endl;
		cout << "5 - Del the first element" << endl;
		cout << "6 - Del the element with value k" << endl;
		cout << "7 - Del the last element" << endl;
		cout << "8 - Search element" << endl;
		cout << "9 - Show the list" << endl;
		cout << "10 - Exit" << endl;
		cout << "Enter choice:" << endl;
		cin >> m;
		if ((m > 0) && (m < 5) || (m == 8)){
			cout << "Input num: ";
			cin >> num;
		}
		if ((m == 2) || (m == 3) || (m == 6)){
			cout << "Input k: ";
			cin >> k;
		}
		switch (m){
			case (1):{
				add_b(num); list();system("pause"); break;
			}
			case (2):
				{
					add_bk(num, k); list();system("pause"); break;
				}
			case (3):
				{
					add_ak(num, k); list();system("pause"); break;
				}
			case (4):
				{
					add_e(num); list();system("pause"); break;
				}
			case (5):
				{
					del_b(num);
					cout << "You delete " << num << endl;
					list();system("pause"); break;
				}
			case (6):
				{
					del_n(k); list();system("pause"); break;
				}
			case (7):
				{
					list(); system("pause"); break;

				}
			case (8):
				{
					if (search_iter(num))
						cout << num << " is found!" << endl;
					else
						cout << num << " is not found!" << endl;
					system("pause");
					break;
				}
			case (9):
				{
					cout << endl; list(); system("pause"); break;
				}
		}
	}while(m != 10);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
