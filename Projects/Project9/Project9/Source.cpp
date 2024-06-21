#include <iostream>
#include <string>

using namespace std;

class Human 
{
public:
	string name;
	int age;

	void print()
	{
		cout << name << " " << age << endl;
	}
};

int main()
{	
	Human firsthuman;

	firsthuman.name = "Slava";
	firsthuman.age = 19;

	firsthuman.print();

	cin >> firsthuman.age;

	firsthuman.print();

	system("pause");
	return 0;
}