#include <iostream>
#include <fstream>
#include <string>
#include <cstddef>  
			// string::find_first_of
      // std::cout
         // std::string
      // std::size_t

using namespace std;

//string NAME = "koneika Liked tracks on SoundCloud.txt";

int main(){


	string f1 = "koneika Liked tracks on SoundCloud.htm";/*, f2 = "example.txt";*/
	/*fstream f11(f1);
	fstream f22(f2);

	f22 << f11.rdbuf();

	f11.close();
	f22.close();*/








	//string a;
	//cout << "vvedi slovo kotoroe hochesh naiti" << endl;
	//getline(cin, a);

	fstream f3(f1, ios::in);

	string b; int count = 0;

	// Считываем строки из файла
    string line;
	/*cout << "4" << '"' << " href=" << '"' << "https://soundcloud.com/" << endl;*/
    /*cout << "vvedite slovo kotoroe hotite naiti: " << endl;*/
    string searchWord = "4\" href=\"https://soundcloud.com/";
	
    /*getline(cin, searchWord);*/

    bool found = false;

	while (getline(f3, line)) {  //
		size_t pos = line.find(searchWord);
		while (pos != string::npos) {
			
			count++;
			size_t size = line.find("href=\"");
			/*cout << size << " " << line << " " << endl;*/
			//cout << string::npos << endl;
			if(size != string::npos){
				line.erase(0, size + 6);
				size_t size = line.find("\">");
				line.erase(size, size + 2);
				
				

				/*if(size != string::npos){
					line.erase(0, size + 6);
				}*/
			}
			if(size != string::npos){
				size_t size = line.find("\"");
				if(size != string::npos){
					size_t length = line.length();
					//cout << length << endl;
					//cout << size << endl;
					line.erase(size, length-size);
				}
			}
			
			
			//cout << size << " " << line << " " << endl;
			cout << line << endl;

			found = true;
			// Ищем следующее вхождение слова в текущей строке
			pos = line.find(searchWord, pos + 1);
		}
	}

	cout << "count = " << count << endl;

	if (!found) {
		cout << "slovo ne naideno v file" << endl;
	}

    // Закрываем файл
    f3.close();

	system("pause");

	return 0;
}

	//string /*a,*/ b[35000];
	////cout << "vpishite nazvanie htm file" << endl;
	////cin >> a;

	//f.open(NAME);
	//
	//

	//for(int i = 0; i < 35000; ++i){
	//	f >> b[i];
	//	f.open("example.txt", ios::out);
	//	f << b[i];
	//}
	//f.close();
	//f.close();
	////for(int i = 0; i < 36000; ++i){
	////	f >> b >> b;
	////	cout << b << b;
	////	f << b << b;
	////}
	////for(int i = 0; i < 36000; ++i){
	////	f >> b >> b;
	////	cout << b << b;
	////	f << b << b;
	////}
	/////*for(int i = 0; i < 35000; ++i){
	////	f >> c[i];
	////	cout << c[i];
	////}*/
	////f.close();
	////f.close();