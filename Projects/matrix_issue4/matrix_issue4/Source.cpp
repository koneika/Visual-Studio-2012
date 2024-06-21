#include <iostream>

using namespace std;
const int N = 5;


int main()
{
	int a[N][N] = {0};
	int counter = 0;

	//for(int k = 0; k < N; k++){
		for(int j = 0; j < N; j++){
			for(int i = 0; i < N; i++){
				
				cout << i;
				/*if(0 == j){
					counter++;
					a[i][j] = i;
				}*/
				if(j == 0){
					counter++;
					a[i][j] = i;
				}
				else if(i == 4){
					counter++;
					a[i][j] = i;
				}
				else if(j == 4){
					counter++;
					a[i][j] = i;
				}
				else if(i == 0){
					counter++;
					a[i][j] = i;
				}

				

				cout << a[i][j] << " ";
			}
			cout << endl;
		}



	system("pause");
	return 0;
}