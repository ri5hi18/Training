#include<iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int x)
{
    while(high>=low)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==x)
        return mid+1;

        if(arr[mid]<x)
        low=mid+1;
        else
        high=mid-1;

    }
    //no element found loop terminated.
    return -1;
}


void bubblesort(int arr[],int size)
{
    bool swapped;
    int i,j;

    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            swapped=true;
            }
        }

        if(swapped==false)
        break;
    }
}

void print_array(int arr[],int size)
{
    cout<<"The array after sorting "<<endl;
    for(int i=0;i<size;i++)
    {
    
        cout<<arr[i]<<endl;
    }
}

int main()
{
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    int array[size];
    cout<<"Enter the elements of array"<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<"Enter the elements "<<i+1<<endl;
        cin>>array[i];
    }
    cout<<"Enter the elemenet to be searched"<<endl;
    int key;
    cin>>key;
    bubblesort(array,size);

    print_array(array,size);
    int result=binary_search(array,0,size-1,key);

    if (result==-1)
    {
        cout<<"No element is found"<<endl;

    }
    else
    {
         cout<<"The element is found : "<<result<<endl;
    }
   
    return 0;
}