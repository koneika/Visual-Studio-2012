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


	
	int count = 0;
	string b, line, line2[10000], searchWord = "4\" href=\"https://soundcloud.com/", f1 = "koneika Liked tracks on SoundCloud.htm";;
	bool found = false;

	fstream f2(f1, ios::in);

	while (getline(f2, line)) {  //
		size_t pos = line.find(searchWord);
		while (pos != string::npos) {
			
			count++;
			size_t size = line.find("href=\"");
			if(&size != &string::npos){
				line.erase(0, size + 6);
				size_t size = line.find("\">");
				line.erase(size, size + 2);
				
			}
			if(&size != &string::npos){
				size_t size = line.find("\"");
				if(size != string::npos){
					size_t length = line.length();

					line.erase(size, length-size);
				}
			}
			

			line2[count-1] = line;

			found = true;
			pos = line.find(searchWord, pos + 1);
		}
	}
	f2.close();
	


	f2.open("example.txt");
	f2.close();
	f2.open("example.txt", ios::out);

	for(int i = 0; i < count; i++)
		f2 << line2[i] << endl;

	f2.close();

	cout << "count = " << count << endl;

	if (!&found) {
		cout << "slovo ne naideno v file" << endl;
	}
	
    

	system("pause");

	return 0;
}