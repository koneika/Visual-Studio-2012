#include <iostream>
#include <string>
using namespace std;

// создать программу, в которой мы закидываем данные, а потом выводим сколько у нас количество созданных массивом

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