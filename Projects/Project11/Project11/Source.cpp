#include <iostream>
#include <ctime>

using namespace std;
const int N = 10;

void time()
{
	int old_time = time(nullptr);
	int counter = 0;

		int new_time = time(nullptr) - old_time;
			if(time(nullptr)%2==1)
					1+1;
			if (counter + new_time == 1){
				counter--;
				
			}
			
}

int main()
{
	//int xz = 0;
	//char b;


	//do{
	//	int a[N][N] = {0};
	//	for(int j = 0; j < N; j++){
	//		for(int i = 0; i < N; i++){
	//			if(i==xz || j==xz || i == N-(xz+1) || j == N-(xz+1))
	//				a[i][j] += 1;
	//			cout << a[i][j] << " ";
	//			
	//			
	//		}
	//	cout << endl;
	//	}
	//	for(int i = 0; i < N/2; i++)
	//		xz++;
	//	for(int i = 0; i < N/2; i++)
	//		xz--;
	//	time();
	//	//if(b=='w')
	//	//	xz--;
	//	system("cls");
	//}while(true);
	if(time(nullptr)%2==1){
			/*time();*/
		cout << "hello world!" << endl;
			//for(int i = 0; i < 2; i++)
			//	cout << "1" << endl << "2" << endl;
	}




	system("pause");
	return 0;
}