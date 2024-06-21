#include <iostream>
#include <ctime> // for random

using namespace std;
const int N = 10;


int main()
{
	// attention, please, skip this step, because it is really should be for make a workable random
	srand(time(NULL));

	int arr[N], arr_neg[N], temp;
	
	// skip, do{}while(); is not necessary, but i did it
	do{
	// skip please
	system("cls");


	// random has 0-50000 range
	// that is how i create a random negative numbers
	// just rand()-25000
	for(int i = 0; i < N; i++)
		arr[i] = rand()-25000;

	// if in arr[i] exist any neg numbers = rewrite
	// new array will help us for found greatest 
	// negative numbers
	for(int i = 0; i < N; i++)
		if (arr[i] < 0)
			arr_neg[i] = arr[i];

	// and bubble sort which is easy
	for(int j = 0; j < N-1; j++)
		for(int i = 0; i < N-1; i++)
			if(arr_neg[i] > arr_neg[i + 1]){
				temp = arr_neg[i];
				arr_neg[i] = arr_neg[i + 1];
				arr_neg[i + 1] = temp;
			}

	// for check list of array, for make sure
	for(int i = 0; i < N; i++)
		cout << arr_neg[i] << endl;

	// than i know that in the last by index array has the lowest negative numbers
	cout << "the best negative number is "<< arr_neg[N-1] << endl;


	system("pause");
	}while(true);

	return 0;
}