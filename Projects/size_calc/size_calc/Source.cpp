#include <iostream>
#include <string>

using namespace std;
const int N = 20;

int main()
{
	char d;
	int a[N], b, c, temp;

	cout << "write your size like 1920x1080" << endl;
	printf("hello world\n");
	scanf("%d%c%d", &b, &d, &c);
	
	

	/*for(float i = 0; i < 4; i+=0.01){
		res = b*(1-i);*/
	for(float i = 1; i <= 1000; i++){

		/*res = c/i;*/
		string res = to_string(float(b/i));
		size_t found = res.find("000000");
		if (found != string::npos){
			string res1 = to_string(float(c/i));
			size_t found1 = res1.find("000000");
			if (found1 != string::npos)
				cout << stoi(res) << "x" << stoi(res1) <<" devider " << i << endl;
		}
			

		 
		/*printf("%s.\n", &res1);*/
		//cout << res << /*sizeof(res) << " "<< sizeof(temp) << " " << sizeof(&res) << " " << sizeof(&temp) << */endl;
	}

	system("pause");
	return 0;
}