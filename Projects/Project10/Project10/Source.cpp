#include <iostream>
#include <string>

using namespace std;
const int N = 10;


int main()
{
	int arr[N][N] = {0}, x = 0, y = 0;
	
	char step;

	do{
		for(int j = 0; j < N; j++){
			for(int i = 0; i < N; i++){
				arr[x][y] = 1;
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}

		cin >> step;
		if(step == 'd'){
			arr[x][y] = 0;
			x++;
		}
		else if (step == 'a'){
			arr[x][y] = 0;
			x--;
		}
		else if (step == 's'){
			arr[x][y] = 0;
			y++;
		}
		else if (step == 'w'){
			arr[x][y] = 0;
			y--;
		}
			
			

		system("cls");
	}while(true);




	return 0;
}