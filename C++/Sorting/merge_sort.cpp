#include<iostream>

using namespace std;

void merge(int arr[],int left,int middle,int right)
{
    int size_left=middle-left+1;
    int size_right=right-middle;

    int Left[size_left],Right[size_right];

    for(int i=0;i<size_left;i++)
    {
        Left[i]=arr[left+i];
    }
    for(int j=0;j<size_right;j++)
    {
        Right[j]=arr[middle+1+j];
    }

    int i=0,j=0,k=left;

    while(i<size_left && j<size_right)
    {
        if(Left[i]<=Right[j])
        {
            arr[k]=Left[i];
            i++;
        }
        else
        {
            arr[k]=Right[j];
            j++;
        }
        k++;
    }

    while(i<size_left)
    {
        arr[k]=Left[i];
        k++;
        i++;
    }

    while(j<size_right)
    {
        arr[k]=Right[j];
        k++;
        j++;
    }
}

void merge_sort(int arr[],int left,int right)
{
    if(left<right)
    {
        int middle=left+(right-left)/2;
        merge_sort(arr,left,middle);
        merge_sort(arr,middle+1,right);
        merge(arr,left,middle,right);

    }
}

void print_array(int arr[],int size)
{
    cout<<"The array elements are : "<<endl;

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
    merge_sort(array,0,size-1);
    print_array(array,size);
    return 0;
}