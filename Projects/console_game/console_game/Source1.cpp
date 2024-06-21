#include <iostream>

using namespace std;

int abc(int a){
	if (a == 4){
		cout << "hahalol" << endl;
	}
	if (a == 5){
		return 4;
	}
}

int main(){
	int a = 5;
	
	cout << abc(a);
	
	return 0;
}