#include <iostream>
#include <string>
using namespace std;

// ������� ���������, � ������� �� ���������� ������, � ����� ������� ������� � ��� ���������� ��������� ��������

int main()
{

	

	cout << "write until you dont write 0" << endl;
	string* word = new string;
	short counter;
	counter = 0;
	while(true){
		delete word;
		string* word = new string;

		
		cin >> *word;
		if(*word == "0"){
			cout << counter << endl;
			system("pause");
			return 0;
		}
		counter++;
	}
	
	
    
	
}