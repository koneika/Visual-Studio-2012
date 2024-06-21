#include <iostream>

using namespace std;

int summarize(int &a, int &b, int &res)
{
	res = a + b;

	return res;
}


int main()
{
	int a, b, res;
	cin >> a; cin >> b;

	summarize(a, b, res);

	cout << res << endl;

	system("pause");
	return 0;
}