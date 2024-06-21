#include <iostream>
#include <ctime>

using namespace std;

void time(int &old_time, int &counter)
{
	

}

int main(int &new_time){
	int old_time = time(nullptr);
	int counter = 0;

	do{
		int new_time = time(nullptr) - old_time;


		
		if (counter + new_time == 1){
			counter--;
			

		}
	

	cout << new_time << endl;
	counter--;
	return;
	}while();

	system("pause"); return 0;
}