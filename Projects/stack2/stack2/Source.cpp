#include <iostream>
using namespace std;
const int Size = 100;

struct Stack
{
	int arr[Size];
    int a = -1;
	
	

	void push(int data)
	{
		a++;
		arr[a] = data;
		
	}

	int pop()
	{
		a--;
		return arr[a]; 
		
	}

	

};


int main()
{
	Stack mem;
	mem.push(1);
	mem.push(1);


	cout << "���������� ����� �� ��������: " << endl;
    for (int j = 0; j < Size; j++) 
	{
        cout << mem.arr[j] << endl;
    }

    mem.pop(); // ������� �������

    cout << "\n���������� ����� ����� ��������: " << endl;
    for (int j = 0; j < Size; j++) 
	{
        cout << mem.arr[j] << endl;
	}



	system("pause");
	return 0;
}