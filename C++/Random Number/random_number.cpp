#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int random_number=rand()%100+1;
    cout<<random_number<<endl;

    int guessed_number;

    cout<<"Enter a number between 1 and 100\nA number between 1 and 100 is already choosen!!!! Find the number!!!!"<<endl;

    //runs an infinite loop

    while(true)
    {
        cout<<"Enter the number "<<endl;
        cin>>guessed_number;

        if(guessed_number < random_number)
        cout<<"The guess is low ,Try Again"<<endl;
        else if (guessed_number > random_number)
        cout<<"The guess is high ,Try Again "<<endl;
        else
        {
        cout<<"The number is same : "<<random_number<<endl<<"You guessed the correct answer"<<endl;
        break;
        }
    }


    return 0;
}