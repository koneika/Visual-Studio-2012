#include <iostream>
#include <ctime>

using namespace std;

int main(){
	int old_time = time(nullptr);
	int counter = 0, counter2 = 0;
	short int time_for_counter = 0;

	//while (true){
	//	int new_time = time(nullptr) - old_time;


	//	
	//	if (counter + new_time == 1){
	//		counter--;
	//		cout << new_time << endl;
	//	}
	//}
	while (true){
		int new_time = time(nullptr) - old_time;

		//time counter seconds
		if (counter + new_time == 1){
			counter--;
			time_for_counter++;
			/*cout << new_time << endl;*/
		}
		
		

		/*cout << counter << " " << time_for_counter << endl;*/
		
		if (counter2 == 0 || time_for_counter == 0){
			cout << "#    " << endl;
			counter2++;
			system("cls");
			continue;
		}
		if (counter2 == 1 || time_for_counter == 1){
			cout << " #   " << endl;
			counter2++;
			system("cls");
			continue;
		}
		if (counter2 == 2 || time_for_counter == 2){
			cout << "  #  " << endl;
			counter2++;
			system("cls");
			continue;
		}
		if (counter2 == 3 || time_for_counter == 3){
			cout << "   # " << endl;
			counter2++;
			system("cls");
			continue;
		}
		if (counter2 == 4 || time_for_counter == 4){
			cout << "    #" << endl;
			counter2++;
			system("cls");
			continue;
		}
		if(counter2 == 5 || time_for_counter == 5){
			counter2 -= 5;
			time_for_counter -= 5;
		}
		

		system("cls");
	}
	system("pause"); return 0;
}