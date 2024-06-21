#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
fstream f;
const string file = "README.md";
const int N = 1000000;

int main()
{
	SetConsoleOutputCP(65001);
	int b, c;
	char a[N];
	f.open(file, ios::in);
	for(int i = 0; i < N; i++){
		f >> a[i];
		if(a[i] == '#' || a[i] == '[' || a[i] == ']' || a[i] == 'D' || a[i] == '%' || a[i] == 'A' || a[i] == 'C'
			|| a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' 
			|| a[i] == '8' || a[i] == '9' || a[i] == '0' || a[i] == 'B' || a[i] == 'F' || a[i] == 'E'){
			a[i] = ',';
			
		}
		else if(a[i] == '-')
			cout << endl;
		/*else if(a[i-1] == ' ')*/

		cout << a[i];
		//else
		//	cout << a[i];
		
	}





	f.close();
	system("pause");
	return 0;
}











































//#include <locale>
	//setloca[i]le(LC_a[i]LL, "Russia[i]n");
		 /*&& a[i] != '(' && a[i] != ')' && a[i] != '[' && a[i] != ']' && a[i] != '%' && a[i] != 'D' && a[i] != '1' && a[i] != '2'
			&& a[i] != '3' && a[i] != '4' && a[i] != '5' && a[i] != '6' && a[i] != '7' && a[i] != '8' && a[i] != '9' && a[i] != '0' && a[i] != '/'
			&& a[i] != 'B' && a[i] != 'F' && a[i] != 'E' && a[i] != '-' && a[i] != '`' && a[i] != '_' && a[i] != 'A' 
			&& a[i] != 'C'*/
			//if(a[i] == ']'){
			//	a[i] == ',';
			//}
		//}
		//else
		//	//if(/*a[i-1] != ','*/a[i] == '(' && a[i] == ')' && a[i] == '[' && a[i] == ']')
		//		a[i] == ',';
		//if(a[i] == '#')
		//	for(int i = 0; i < 100; i++){
		//		f >> a[i];
		//		if(a[i] != '(' || a[i] != ')' || a[i] != '[' || a[i] != ']')
		//			cout << a[i];
		//	}
			//for(int i = 0; i < 10; i++){
			//	if(a[i] != '(' && a[i] != ')' && a[i] != '[' && a[i] != ']' && a[i] != 'D'){
			//		//f >> a[i];
			//		cout << a[i];
			//	}
			//}