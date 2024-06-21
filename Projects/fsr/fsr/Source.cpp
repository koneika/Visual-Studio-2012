#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char c;
	cout << "write your size, like '1366x768'" << endl;
	cin >> a >> c >> b;

	cout << a << c << b << endl;

	for(float i = 1; i < 10; i += 0.01)
	{
		cout << int(a/i) << "x" << int(b/i) << " (" << i << ")	" << "+" << a*b/((int(a/i))*(int(b/i))) <<"x performance"<< endl;
	}

	system("pause");
	return 0;
}