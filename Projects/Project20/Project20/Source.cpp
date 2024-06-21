#include <iostream>

using namespace std;

// dynamic is new, delete

// for start - new int;
// for pointer - int *p = new int;

// new int - we said, hey, give me 4 bytes in run time

// so
int main()
{
	int size = 4; // it`s not constanta

	int *p = new int[size];
	

	for(int i = 0; i < size; i++){
		cin >> *(p + i);
	}

	for(int i = 0; i < size; i++){
		cout << *(p + i) << " ";
	}

	cout << endl;
	delete []p;


	system("pause");
	return 0;
}