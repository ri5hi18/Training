#include<iostream>
using namespace std;
#define N 25
int Q[N],front=-1,rear=-1;

void enqueue()
{
    int data;
    if(rear==N-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else if (rear==-1 && front ==-1)
    {
        front=rear=0;
        cout<<"Enter the data item"<<endl;
        cin>>data;
        Q[rear]=data;
        cout<<"Data entered successfully"<<endl<<"Entered data : "<<data<<endl;

    }
    else
    {
        rear++;
        cout<<"Enter the data item"<<endl;
        cin>>data;
        Q[rear]=data;
        cout<<"Data entered successfully"<<endl<<"Entered data : "<<data<<endl;
    }
}

void dequeue()
{
    if(front ==-1 && rear ==-1)
    {
        cout<<"Underflow "<<endl;
    }
    else if(front==rear)
    {
        cout<<"Data popped out is "<<Q[front]<<endl;
    }

    else
    {
        cout<<"The removed element is "<<Q[front]<<endl;
        front++;
    }
}

void DisplyQueue()
{
    for(int i= front;i<=rear;i++)
    {
        cout<<Q[i]<<endl;
    }
}

void Peek()
{
    cout<<"The top element of the queue is "<<Q[front];
}

int main()

{
    int choice;
    do
    {
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.Peek"<<endl;
        cout<<"4.Display"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: Peek();
                    break;
            case 4: DisplyQueue();
                    break;
            default: cout<<"Invalid choice"<<endl;
        }

    }
    while(choice!=0);
    return 0;
}