#include <iostream>

using namespace std;

int main()
{
	int *memory = new int;
	int res;

	res = 0;

	*memory = res; // �������� memory = 0;

	cin >> *memory; // �������� memory = 15;

	res += *memory; // res = 15;

	cin >> *memory;  // �������� memory = 100;

	res += *memory; // res = 115;

	delete memory;

	cout << res << endl; // 115

	system("pause");
	return 0;
}