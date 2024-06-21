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


	cout << "Содержимое стека до удаления: " << endl;
    for (int j = 0; j < Size; j++) 
	{
        cout << mem.arr[j] << endl;
    }

    mem.pop(); // Удаляем элемент

    cout << "\nСодержимое стека после удаления: " << endl;
    for (int j = 0; j < Size; j++) 
	{
        cout << mem.arr[j] << endl;
	}



	system("pause");
	return 0;
}