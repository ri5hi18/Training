#include<iostream>

using namespace std;

void bubblesort(int arr[],int size)
{
    bool swapped;

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

    bubblesort(array,size);

    print_array(array,size);
    return 0;
}