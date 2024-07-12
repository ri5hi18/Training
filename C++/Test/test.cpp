#include<iostream>
using namespace std;
struct Rectangle 
{
   int length;
   int breadth;
};

void Intialise(struct Rectangle *pointer)
{
   pointer->length=10;
   pointer->breadth=6;
}

int Find_area(struct Rectangle r)
{
   return r.length*r.breadth;
}
int main()
{
struct Rectangle r;
Intialise(&r);
cout<<"The area is "<<Find_area(r)<<endl;
return 0;
}