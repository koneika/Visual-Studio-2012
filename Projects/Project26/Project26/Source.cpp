#include <iostream>
#include <string>
using namespace std;

// создать программу, в которой мы закидываем данные, а потом выводим сколько у нас количество созданных массивом

int main()
{
	string write_words;
	int count;
	count = 0;
	string check[3] = {"count3213213213", "count32131232123", "count213"};


	cout << "write words, and i will counting it, write any word, for end program, write 0" << endl;
	while(write_words != "0"){

		cin >> write_words;
		count++;

	}

	cout << "so, we have " << count << " words in arrays" << endl;

	cout << sizeof(check)/sizeof(check[0]) << endl;
    
	system("pause");
    return 0;
}