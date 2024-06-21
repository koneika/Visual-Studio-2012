#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;
const short N = 100;

int main()
{
	time(nullptr);
	string b;
	int a[N];

	

	do{
	for(int i = 0; i < N; i++){
		a[i] = rand();
	}
	cin >> b;
	size_t c = b.length(); int temp;

	for(int j = 0; j < N-1; j++)
		for(int i = 0; i < N-1; i++){
			if(a[i] > a[i+1]){
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	for(int i = 0; i < int(c); i++)
		cout << a[i];
		
	cout << endl;
	
	}while(true);

	system("pause");
	return 0;
}