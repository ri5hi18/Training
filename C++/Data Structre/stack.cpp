#include <iostream>
using namespace std;

const int N = 50;
int top = -1;
int stack[N];

void push()
{
    if (top == N - 1)
    {
        cout << "Overflow" << endl;
        return;
    }

    int number;
    cout << "Enter a number to push: ";
    cin >> number;

    top++;
    stack[top] = number;
    cout << "Item pushed successfully" << endl;
}

void pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
        return;
    }

    int number = stack[top];
    top--;
    cout << "Element popped successfully: " << number << endl;
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements:" << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}

void topStack()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "The top of stack is " << stack[top] << endl;
    }
}

int main()
{
    int num;
    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Top of stack" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> num;

        switch (num)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                topStack();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (num != 0);

    return 0;
}
