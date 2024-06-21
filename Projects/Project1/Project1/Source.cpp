#include <iostream>
#include <fstream>
using namespace std;
fstream f;

int main(){



	double a, b, d; 
	int h, i;
	char c, e;

	cout << "vvedite vibor 1 ili 2 ili 3" << endl;
	cin >> e;



	

	

	if(e == '1'){
		cout << "vvedite pervoe razreshenie ekrana" << endl;
		cin >> a; 
		cout << "vvedite vtoroe razreshenie ekrana" << endl;
		cin >> b;

		cout << "vvedite  chislo v pixelyah kotoroe u vas vishlo" << endl;
		cin >> h;
		cout << "vvedite radius poiska, naprimer 1000" << endl;
		cin >> i;

		cout << "vvedite + ili -" << endl;
		cin >> c;
		do{
			if(c == '+'){
				a = a * 1.005;
				b = b * 1.005;
			}
			else if(c == '-'){
				a = a / 1.005;
				b = b / 1.005;
			}
			else{
				return 0;
			}
			//switch(){
			//case 1:
			//	break;
			//}

			if(a*b < h+i)
				cout << a << " " << b << "   " << a*b << endl;

		}while(a*b > h-i);
	}
	else if(e == '2'){
		cout << "vvedite pervoe razreshenie ekrana" << endl;
		cin >> a; 
		cout << "vvedite vtoroe razreshenie ekrana" << endl;
		cin >> b;

		double j = a/b, k = b/a;

		cout << j << " " << k << endl;
		system("pause");
		for(;;){
			cout << --a*k << " " << --b/j << endl;
			if (a < 0){
				system("pause");
				return 0;
			}
		}
	}
	
	
	else if(e == '3'){
		

		double l, m, n;
		cout << "vvedite pervoe razreshenie ekrana" << endl;
		cin >> a; 
		cout << "vvedite vtoroe razreshenie ekrana" << endl;
		cin >> b;

		cout << "napishi delityely, naprimer 1.5 ili 2(no realno lutche 1.001)" << endl;
		cin >> l;
		cout << a << " " << b << " " << a*b << endl;
		do{
		a = a/l;
		b = b/l;
		/*cout << a << " " << b << " " << a*b << endl;*/
		if(a/l < 470)
			cout << a << " " << b << " " << a*b << endl;
		}while(b/l > 1);
	}

	else if(e == '4'){
		//double o, p;
		//cout << "shirina dlya pervogo" << endl;
		//cin >> o;
		//cout << "shirina dlya vtorogo" << endl;
		//cin >> p;
		int counter = 0;
		double o;
		cout << "vvedite mnojitel, naprimer 2" << endl;
		cin >> o;
		do{
		cout << a/b << " " << b/a << endl << endl;
		cout << (a/b)*(o+counter++) << endl;
	/*	cout << (b/a)*o+counter++ << endl;*/
		cout << ((b/a)*(o+counter++))*(a/b) << endl;
		system("pause");
		}while(true);
	}

	else if(e == '5'){
		
		float q = 16, r = 9, o, s = 0;
		cout << "nahozdenie tupogo vernogo ecrana" << endl;
		cout << "vvedite mnojitel, naprimer 2" << endl;
		cin >> o;
		do{
		s++;
		int x(q*(o*s));
		int y(r*(o*s));
		cout << int(q*(o*s)) << "x" << int(r*(o*s)) << " " << x*y << " counter = " << s << endl;
		}while(true);
	}



	else if(e == '6'){
		
		f.open("lol.txt", ios::out);

		cout << "vvedite pervoe razreshenie ekrana" << endl;
		cin >> a; 
		cout << "vvedite vtoroe razreshenie ekrana" << endl;
		cin >> b;	
		int u = 1;
		for(int i = 0; i < 100000; i++){
			//cout << (a/100000)*i << " " << (b/100000)*i << endl;
			double z, w;
			z = (a/100000)*i;
			w = (b/100000)*i;
			if(i == 50*u){
				u++;
				f << z << " " << w << endl;
			}
		}
		cout << a << " " << b << endl;
		f.close();
	}
	else{
		return 0;
	}



	//else if(e == '2'){
	//	int f = a * b; float g;
	//	
	//	cout << "vvedite + ili -" << endl;
	//	cin >> c;
	//	do{

	//		

	//		if(c == '+'){
	//			f++;
	//			g = a / (8*f);
	//		}
	//		else if(c == '-'){
	//			f--;
	//			g = a / (8*f);
	//		}
	//		

	//	}while(f > 120000);
	//	cout << a << " " << b << " " << g << " " << f << endl; 
	//	cout << float(g) << endl;
	//	cout << g * a << endl;
	//}
	//}
	//else{
	//	return 0;
	//}

	system("pause");
	return 0;
}