#include <iostream>
#include <fstream>

using namespace std;
fstream f;

int main()
{
	f.open("hello.txt", ios::out);




	f.close();
	return 0;
}