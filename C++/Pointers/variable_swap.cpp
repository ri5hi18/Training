#include<iostream>

using namespace std;

void variable_swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
int x,y;
x=10;
y=5;
cout<<"Variables before swapping x :"<<x<<" y : "<<y<<endl;
variable_swap(&x,&y);
cout<<"Varible after swapping x : "<<x<<" y : "<<y<<endl;
}