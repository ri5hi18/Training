#include<iostream>

using namespace std;

int BinarySearch(int arr[],int low,int high,int key)
{
    while(high>=low)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==key)
        return mid+1;

        if(arr[mid]<key)
        low=mid+1;

        if(arr[mid]>key)
        high=mid-1;

    }
    return -1;
}

void bubbleSort(int array[],int size)
{
    bool swapped=false;

    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            swap(array[j],array[j+1]);
            swapped=true;
        }

        if(swapped==false)
        {
            cout<<"Array is sorted "<<endl;
            break;
        }

    }

}

void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{   int array[]={9,4,7,3,5,2};
    int size= sizeof(array)/sizeof(int);
    cout<<size<<endl;
    bubbleSort(array,size);
    PrintArray(array,size);
    cout<<"Enter the element to search "<<endl;
    int key;
    cin>>key;
    int result= BinarySearch(array,0,size-1,key);
    if(result==-1)
    {
        cout<<"The element not found"<<endl;
    }
    else{
        cout<<key<<"found at position : "<<result;
    }
    return 0;
}