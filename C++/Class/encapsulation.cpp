#include<iostream>

using namespace std;

class Car
{
    public:

    string name;
    int size;
    int year;

    void printCar()
    {
        cout<<"Name is : "<< name<<endl;
        cout<<"Size is : "<< size<<endl;
        cout<<"Year is : "<<year<<endl;
    }
};
int main()
{
    
    Car toyota;
    toyota.name="Corolla";
    toyota.size=10;
    toyota.year=2015;

    //printing the object

    toyota.printCar();

    //Object 2 

    cout<<endl<<endl;
    Car bmw;
    bmw.name="M5";
    bmw.size=20;
    bmw.year=2022;

    bmw.printCar();
}