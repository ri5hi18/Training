#include<iostream>

using namespace std;
void  selectionsort(int arr[],int size)
{
   for(int i=0;i<size-1;i++)
   {
    int min_index=i;
    for(int j=i+1;j<size;j++)
    {
        if(arr[j]<arr[min_index])
        min_index=j;
    }
    swap(arr[min_index],arr[i]);
   }
}

void print_array(int arr[],int size)
{
     cout<<"The array after sorting"<<endl;
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

    selectionsort(array,size);
    print_array(array,size);
    return 0;
}