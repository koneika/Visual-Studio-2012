#include <iostream>
#include <string>

using namespace std;
const int N = 9;

int main()
{
	/*string bw[] = {"xui", "eb"};
	string s;

	cin >> s;*/
	int arr[N][N] = {0};
	int count = 1;


	//add in matrix
	/*for(int k = 0; k < N; k++){*/
		for(int j = 0; j < 1; j++){
			for(int i = 0; i < N; i++){
				
				arr[j][i] = count;
				arr[i][j+N-1] = count;
				count++;
				/*arr[i+N-1][j] += i;
				arr[i][j+N-1] += i;*/
				/*if(arr[i][j] == 1){
					arr[i][j] += i;
				}*/
			}
		}
	/*}*/
	//matrix
	for(int j = 0; j < N; j++){
		for(int i = 0; i < N; i++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	


	
	


	system("pause");
	return 0;
}






































////if(i==N/2 && j==N/2){
//				//	arr[i][j] = 1;
//				//}
//				if(i==0){
//					arr[i+k][j] = 1; //+i
//				}
//				if(j==N-1){
//					arr[i][j+k] = 2;
//				}
//				if(i==N-1){
//					arr[i][j] = 3;
//				}
//				if(j==0 && i!=0){
//					arr[i][j] = 4;
	//int arr[N][N] = {0};
	//int count = 1;

	//for(int j = 0; j < N; j++){
	//	for(int i = 0; i < N; i++){
	//		arr[j][i] += count;
	//		cout << arr[i][j] << " ";
	//		count++;
	//	}
	//	cout << endl;
	//	
	//}





//do{
//	/*cin >> s;*/
//	/*cout << slovo.length();*/
//	/*for(banword[0]){
//	}*/
//	/*for(int j = 0; j < )*/
//	for(int i = 0; i < s.length(); i++){
//		if (bw[0][0] == s[i] && bw[0][1] == s[i+1] && bw[0][2] == s[i+2]){
//			cout << "xui" << endl;
//		}	
//	}
//
//	}while(true);

	/*string txt;
	string banword[2] = {"xui", "ebe"};
	string nobanword[1] = {"teb"};

	cin >> txt;
	for(int i = 0; i < 2; i++)
		banword[i]*/
