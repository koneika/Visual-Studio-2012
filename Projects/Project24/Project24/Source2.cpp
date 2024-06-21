#include <iostream>

using namespace std;

int main()
{
	
	

	do{
		unsigned int *memory = new unsigned int;

		*memory = 0;

		cin >> *memory;

		unsigned int *fantom = new unsigned int;
		cin >> *fantom;
		*memory += *fantom;
		delete fantom;


		cout << *memory << endl;
		delete memory;

	}while(true);

	system("pause");
	return 0;
}