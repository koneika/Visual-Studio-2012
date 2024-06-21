#include <iostream>
#include <fstream>
#include <string>

using namespace std;
fstream f;

int main(){
	string a, b;
	
	do{
	cout << "vvedi nazvanie file" << endl;
	cin >> a;
	f.open(a+".reg", ios::app);
	f << "Windows Registry Editor Version 5.00" << endl;
	f << endl;
	f << "[HKEY_CURRENT_USER\Software\Valve\Half-Life\Settings]" << endl;
	cin >> b;
	f << "\"Key\"=\""+b+"\"" << endl;
	f << endl;
	f << "[HKEY_CURRENT_USER\SOFTWARE\Valve\Half-Life\Settings]" << endl;
	f << "\"Key\"=\""+b+"\"" << endl;
	f.close();
	}while(true);
	

	return 0;
}