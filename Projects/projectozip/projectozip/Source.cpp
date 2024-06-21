#include <iostream>
#include <fstream>
#include <string>

using namespace std;
fstream f;
fstream f1;

int main()
{
	char a[1024];
	
	f.open("file.txt", ios::in);
	for(int i = 0; i < 1024; i++){
		f >> a[i];
	}
	f.close();




	f1.open("file_copy.txt", ios::out);
	for(int i = 0; i < 1024; i++)
		if(a[i] != 'M')
			f1 << a[i];
	
	f1.close();
	return 0;
}