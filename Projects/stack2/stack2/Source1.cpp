#include <iostream>
using namespace std;
const int Size = 100;

struct Stack
{
    int arr[Size];
    int top = -1; // Initialize top to -1 (empty stack)

    void push(int data)
    {
        if (top < Size - 1) 
        {
            top++;
            arr[top] = data;
        } else {
            cout << "Stack overflow!" << endl;
        }
    }

    int pop()
    {
        if (top >= 0) 
        {
            int data = arr[top];
            top--;
            return data;
        } else {
            cout << "Stack underflow!" << endl;
            return -1; // Or some other error value
        }
    }
};

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2); // Changed for clarity

    cout << "Содержимое стека до удаления: " << endl;
    for (int j = 0; j <= stack.top; j++) // Print only valid elements
    {
        cout << stack.arr[j] << endl;
    }

    stack.pop();

    cout << "\nСодержимое стека после удаления: " << endl;
    for (int j = 0; j <= stack.top; j++)  // Print only valid elements
    {
        cout << stack.arr[j] << endl;
    }

    return 0;
}
