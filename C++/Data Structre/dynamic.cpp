#include<iostream>
#define N 50
int top=-1,stack[N];
using namespace std;

void push()
{
    int number;
    cout<<"Enter a number to push"<<endl;
    cin>>number;
    if(top==N-1)
    {
        cout<<"Overflow"<<endl;
        return;
    }
    else{
        top++;
        stack[top]=number;
        cout<<"Item pushed successfully"<<endl;
    }
}

void pop()
{
    if(top == -1)
    {
        cout<<"Underflow "<<endl;
        return;
    }
    else{
       int number= stack[top];
        top--;
        cout<<"Element popped successfully: "<<number<<endl;
    }
}

void display()
{
    for(int i=top;i>=0;i--)
    cout<<"__"<<stack[i]<<" __"<<endl;;
}

void topStack()
{
    cout<<"The top of stack is "<<stack[top]<<endl;
}

int main()
{
    int num;
     do
    {
    cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.display"<<endl<<"4.top of stack"<<endl<<"0.Exit"<<endl;
    cin>>num;
   
    switch(num)
    {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: topStack();
                break;
        default: cout<<"Invalid  choice"<<endl;
    }
    }while(num!=0);


    return 0;
}

