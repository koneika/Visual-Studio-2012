#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
const string file_name = "datatime.txt";
fstream f;



void saver_money(char &choose)
{
	float d = 1696.40, e, have = 0.0, add;

	do{
	cout << "you need " << d << " levos, and you have " << have << " levos" << endl;
	cout << "dollars is " << fixed << setprecision(1) << (d/100)*55.36 << endl; // 23.02.2024
	

	cout << "do you want add money? Y - yes, N - no" << endl;
		cin >> &choose;
			if(choose == 'Y' || choose == 'y'){
				cin >> add;
				have = have + add;
			}
	


	e = have/d;
	cout << "prograss is: " << fixed << setprecision(1) << e * 100 << " %" << endl;
	}while(choose == 'Y' || choose == 'y');
}

int main()
{
	char choose;
	int a;
	short minutes = 0, temp;

	do{
	saver_money(choose);
	f.open(file_name, ios::in);
	f >> a;
	f.close();
	int b = time(nullptr)-a;

	//should be
	//short days = 
	//should be
	cout << (((b/60)/60)/24)%30 << " day(s) " << ((b/60)/60)%60 << ":" << (b/60)%60 << ":" << b%60 << endl;
	system("pause");

	if(!f.is_open()){
		cout << "do you want recreate time? Y - yes, N - no" << endl;
			cin >> choose;
	}
	//else
	//	return 'N';

	if(f.is_open() || choose == 'Y' || choose == 'y'){
		cout << "hello, do you want save start save your time? Y - yes, N - no" << endl;
			cin >> choose;

		if (choose == 'Y' || choose == 'y'){
			f.open(file_name, ios::out);
			f << time(nullptr);
			f.close();
		}
	}
	//else
	//	return 'N';



	
	cout << "do you want a wait goal? Y - yes, N - no" << endl;
		cin >> choose;
			if(choose == 'Y' || choose == 'y')
				cout << "How much days?" << endl;
					cin >> temp;
						cout << "wait " << temp - (((b/60)/60)/24)  << " day(s)"<< endl;
							


	}while(choose == 'Y' || choose == 'y');

	f.close();
	system("pause");
	return 0;
}