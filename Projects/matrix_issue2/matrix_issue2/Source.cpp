#include <iostream>

using namespace std;
const int N = 5;
int a[N][N] = {0};

void frames(int &i, int &j)
{
		for(int k = 0; k < N; k++){
			if(N/2 == i-k || N/2 == j-k || N/2 == i+k || N/2 == j+k)
				a[i][j] = (N/2)-k+1;
		}
}

int main()
{
	int j = 0, i = 0;
		for(j = 0; j < N; j++){
			for(i = 0; i < N; i++){

				frames(i, j);

				cout << a[i][j] << " ";
			}
			cout << endl;
		}			

	system("pause");
	return 0;
}