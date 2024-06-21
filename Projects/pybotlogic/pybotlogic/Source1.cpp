#include <iostream>

using namespace std;
const int N = 11;
int a[N][N] = {0};

void frames(int &i, int &j)
{
	//cout << 1+N/2 << " " << 1-N/2 << endl;
	/*for(int l = 0; l < N; l++){*/
		//for(int k = 0; k < 1; k++){
		//	//if(a[i][j] > 0)
		//	//	a[i][j] == a[i][j]-a[i][j];
		//	if(N/2 == i-k || N/2 == j-k || N/2 == i+k || N/2 == j+k || N/2 == i)
		//		a[i][j] += 3-k;
		//	
		//	/*if(N/2 != i-k || N/2 != j-k || N/2 != i+k || N/2 != j+k || N/2 != i)
		//		a[i][j] -= 3-k;*/
		//	/*a[i][j] += 3;*/
		//}
				for(int k = 0; k < N; k++){
			//if(a[i][j] > 0)
			//	a[i][j] == a[i][j]-a[i][j];
			if(N/2 == i-k || N/2 == j-k || N/2 == i+k || N/2 == j+k)
				a[i][j] = N+k;
			
			/*if(N/2 != i-k || N/2 != j-k || N/2 != i+k || N/2 != j+k || N/2 != i)
				a[i][j] -= 3-k;*/
			/*a[i][j] += 3;*/
		}

	/*}*/

}

int main()
{
	int j = 0, i = 0;
	//for(int k = 0; k < N; k++){
		for(j = 0; j < N; j++){
			for(i = 0; i < N; i++){

				frames(i, j);

				cout << a[i][j] << " ";
			}

			cout << endl;
		}			
	//}

	system("pause");
	return 0;
}