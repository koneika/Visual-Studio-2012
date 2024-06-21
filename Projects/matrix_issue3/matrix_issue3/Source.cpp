#include <iostream>
#include <ctime> // for random

using namespace std;

const short N = 5;

void showMatrixAndCounter(short arrA[N][N], short &counter)
{
	system("cls");
	for(short j = 0; j < N; j++){
		for(short i = 0; i < N; i++)
			cout << arrA[i][j] << "\t";
		cout << endl;
	}
	cout << "counter = " << counter << endl;
	counter++;
}

void chooseMethods(char &choice, short arrA[N][N], short &counter)
{
	if(choice == '1')
		for(short j = 0; j < N; j++)
			for(short i = 0; i < N; i++){
				showMatrixAndCounter(arrA, counter);
				cin >> arrA[i][j];
			}
	else if(choice == '2')
		for(short j = 0; j < N; j++)
			for(short i = 0; i < N; i++)
				arrA[i][j] = (rand()-25000)/1000;

	else
		exit(1);
}

void logic(short arrA[N][N])
{
	for(short j = 0; j < N; j++)
		for(short i = 0; i < N; i++){
			if(arrA[i][j] > 0)
				arrA[i][j] *= 5;

			else if(arrA[i][j] == 0)
				arrA[i][j] = 100;

			else if(arrA[i][j] < 0)
				arrA[i][j] = 0;
		}
}

void createNewArray(short arrA[N][N], short *arrB[N][N])
{
	for(short j = 0; j < N; j++)
		for(short i = 0; i < N; i++)
			arrB[i][j] = &arrA[i][j];
}

void show_matixA(short arrA[N][N])
{
	for(short j = 0; j < N; j++){
		for(short i = 0; i < N; i++)
			cout << arrA[i][j] << "\t";
		cout << endl;
	}
}

void show_matixB(short *arrB[N][N])
{
	for(short j = 0; j < N; j++){
		for(short i = 0; i < N; i++){
			cout << *arrB[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	srand(time(NULL)); // for random
	short arrA[N][N] = {0}; 
	short *arrB[N][N] = {&arrA[N][N]};
	short counter = 0;

	char choice; // choose for methods
	

	cout << "we have two methodss, choose 1 or 2" << endl;
	cin >> choice;

	system("cls"); // clean choose
	chooseMethods(choice, arrA, counter); // just function for choose
	system("cls"); // clean our writes and counter

	//show arrA
	show_matixA(arrA); // this words say in this names

	// then work logic
	logic(arrA); // if positive *= 5; if 0, arr=100; if negative =0;
	
	cout << endl;

	// then new array
	createNewArray(arrA, arrB); // arrB[i][j] = arrA[i][j];

	//show arrB
	show_matixB(arrB);

	system("pause");
	return 0;
}




























//int main()
//{
//	srand(time(NULL));
//	int arrA[N][N];
//	
//	for(int j = 0; j < N; j++)
//		for(int i = 0; i < N; i++)
//			arrA[i][j] = (rand()-25000)/1000; 
//
//	/*for(int j = 0; j < N; j++)
//		for(int i = 0; i < N; i++)
//			cin >> arrA[i][j];*/
//
//	for(int j = 0; j < N; j++){
//		for(int i = 0; i < N; i++)
//			cout << arrA[i][j] << "\t";
//	cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////
//
////for (int i=0;i<N;i++){
////for (int j=0;j<N;j++{
////	if(i%2==0){
////	sum_row=+arrA[i][j];}
////
////}}
////
////j%2!=0
////sum_col=+arrA[j][i];