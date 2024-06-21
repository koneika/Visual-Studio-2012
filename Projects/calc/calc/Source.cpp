#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;

	cin >> a;

	cin >> b;
	c = a;
	for(int i = 0; i < b-1; i++)
		c *= a;

	cout << c;

	system("pause");
	return 0;
}