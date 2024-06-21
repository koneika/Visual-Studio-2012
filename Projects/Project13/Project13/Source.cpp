#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
fstream f;
const string file = "list.txt";
const int N = 1000000;

int main()
{
	SetConsoleOutputCP(65001);
	string a;
	f.open(file, ios::in);
	for(int i = 0; i < 775; i++){
		f >> a;
		cout << a;
		cout << ", ";
	}





	f.close();
	system("pause");
	return 0;
}
