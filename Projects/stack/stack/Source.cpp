#include <iostream>
using namespace std;
const int N = 100;

int i = 0;

int* mem = new int[N]; // fantomno ��������� 4*100 ���� ������

void push(int num)
{
	

	mem[i] = num;
	i++;
}

//void pop()
//{
//	mem[i] = 0;
//	i--;
//}

void pop() 
{
    if (i > 0) 
	{
        int* temp = new int[N]; // ������� ��������� ������
        for (int j = 0; j < i - 1; j++) 
		{
            temp[j] = mem[j + 1]; // �������� ��������, ����� �������
        }
        delete[] mem; // ������� ������ ������
        mem = temp; // ������������� ��������� �� ����� ������
        i--; // ��������� ������ ������� �����
    } 
	else 
	{
        std::cerr << "Error: Stack is empty!\n";
    }
}

int main()
{
	

	push(1);
	push(1);
	push(1);

	/*pop();*/
	delete [0]mem;

	for(int j = 0; j < N; j++)
		cout << mem[j] << endl;



















	system("pause");
	return 0;
}