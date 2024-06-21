#include <iostream>

using namespace std;

int main()
{
	float numbers[2];
	float result = 1;
	char simbols;
	
		printf("first write number, then use a sign, you have + - / *, and write the second number\n");
		printf("write for example 1 + 2\n");
	while(true){
		scanf("%f %c %f", &numbers[0], &simbols, &numbers[1]);
		if(simbols == '+'){
			//int result = numbers[0] + numbers[1];
			result = numbers[0] + numbers[1];
			printf("%f\n", result);
		}
		else if(simbols == '-'){
			result = numbers[0] - numbers[1];
			printf("%f\n", result);
		}
		else if(simbols == '*'){
			result = numbers[0] * numbers[1];
			printf("%f\n", result);
		}
		else if(simbols == '/'){
			result = numbers[0] / numbers[1];
			printf("%f\n", result);
		}
		else if(simbols == '^'){
			result = numbers[0];
			if (numbers[1] == 0){
				result = 1;
				printf("%f\n", result);
			}
			else if (numbers[1] >= 1){
				for(int i = 0; i < numbers[1]-1; i++){
					result *= numbers[0];
				}
				printf("%f\n", result);
			}
			else if (numbers[1] <= 0){
				if((int)numbers[1]%2){
					/*printf("%f\n", numbers[1]-1);*/
					// -1 = 4
					// -3 = 16
					// -5 = 16
					// -7 = 32
					
					
					/*for(int i = 0; i > numbers[1]+1; i--){*/
					for(int i = 0; i > numbers[1]; i--){
							
						result *= numbers[0];
						/*i--;*/
					}

					result = numbers[0]/result;
					/*}*/
					/*printf("%f\n", result);*/
				}
				else{
					printf("0\n"); // -2
				}
				printf("%f\n", result);
			}
			else{
				return 1;
			}
		}
		else if(simbols == 'v'){
			//root
		}
		else{
			printf("fusk");
		}
		/*printf("%d\n", result);*/
	}
	/*scanf("%d", &result);*/

	/*delete p, q;*/

	system("pause");
	return 0;
}