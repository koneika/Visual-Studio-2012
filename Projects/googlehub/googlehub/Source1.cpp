#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	string b;
	char a[10] = {' '};

	time(nullptr);
	size_t c = b.length();

	for(int i = -1; i < 0 + int(c); i++){
		
		cin >> char(b);
		int(c) = b.length();
		a[i] = char(b);
		cout << "counter " << int(c) << " " << a[i] << endl;
	}

	/*for(int i = 0; i < a; i++)*/
		

	system("pause");
	return 0;
}