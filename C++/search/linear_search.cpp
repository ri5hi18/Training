#include<iostream>
using namespace std;

void linear_search(int arr[],int size,int search_value)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        if (arr[i]==search_value)
        {
            cout<<search_value<<"found at position : "<<i+1<<endl;
            flag=1;
        }
    }
    if(flag==0)
    cout<<"Element not found"<<endl;
}

int main()
{
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element : "<<i+1<<endl;
        cin>>arr[i];
    }

    cout<<"Enter the search value"<<endl;
    int search;
    cin>>search;

    linear_search(arr,size,search);
    return 0;
}