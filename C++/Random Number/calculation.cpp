#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{

srand((unsigned)time(NULL));
int user,computer;
computer=rand()%10;
cout<<"Enter a value for user : "<<endl;
cin>>user;
int result=abs(user-computer+3)%3;
cout<<result<<endl;

if(result==0)
{
    cout<<"DRAW"<<endl;
}
else if (result==1)

{
    cout<<"USER"<<endl;

}
else
{
    cout<<"COMPUTER"<<endl;
}


return 0;
}