#include <iostream>
using namespace std;
const int N = 100;

//struct mem
//{
//
//};

int main()
{
	int* name = new int[N];
	
	name[0] = 0;
	name[1] = 1;

	delete [0]name;

	cout << name[0] << endl;

	
	











	system("pause");
	return 0;
}