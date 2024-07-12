#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *current,*head=NULL,*temp;

void creation()
{
    int n;
    cout<<"Enter the number of linked list : "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        temp=new struct node;
        cout<<"Enter the data of node"<<endl;
        cin>>temp->data;
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=temp;
        }
    }
    cout<<"Print Linked List"<<endl;

    for(current=head;current!=NULL;current=current->next)
    {
        cout<<current->data;
    }

}

int main()
{
    creation();
    return 0;
}