#include <iostream>

using namespace std;

const int N = 5;

void CountingBeforeMarix(int &count)
{
	for(int k = 0; k < N; k++)
		for(int j = 0; j < N; j++)
			for(int i = 0; i < N; i++)
				if(k==0)
					if(i==0 || j==N-1){
						count++;
					}
}
void FixMatrixBehavier(int Arr[N][N], int &count)
{
	for(int j = 0; j < N; j++)
		for(int i = 0; i < N; i++)
			if(i==i && j==j)
				Arr[i][j] = 0;
}

void snake_logic(int Arr[N][N], int &count)
{
	for(int k = 0; k < N; k++)
		for(int j = 0; j < N; j++)
			for(int i = 0; i < N; i++)
				if(k==0)
					if(i==0 || j==N-1){
						count++;
						Arr[i][j] = count;
					}
	
				/*if(k==2)
					if(i==N-1 || j==0){
						count++;
						Arr[i][j] = count;
					}
				if(k==3)
					if(i==N-1 || j==0){
						count++;
						Arr[i][j] = count;
					}
				if(k==4)
					if(i==N-1 || j==0){
						count++;
						Arr[i][j] = count;
					}*/
	
	CountingBeforeMarix(count);


	for(int k = 0; k < N; k++)
		for(int j = 0; j < N; j++)
			for(int i = 0; i < N; i++)
				if(k==1)
					if(i==N-1 || j==0){
						count--;
						Arr[i][j] = count;
					}

	FixMatrixBehavier(Arr, count);

	
	/*for(int j = N+N; j < N; j--){
		for(int i = N+N; i < N; i--){
			if(i==0 || j==N-1){
				count++;
				Arr[j][i] = count;
			}
		}
	}*/
	
}

void showMatrix(int Arr[N][N])
{
	for(int j = 0; j < N; j++){
		for(int i = 0; i < N; i++){
			cout << Arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int count = 0;
	int Arr[N][N] = {0};

	snake_logic(Arr, count); // add snake logic

	showMatrix(Arr); // 


	system("pause");
	return 0;
}









 // really counting before start drowing matrix, that is must here
								// because without that function, half a matrix will be reverce