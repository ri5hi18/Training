#include<iostream>
#include<stdio.h>
#include<ctime>
#include<cstdlib>

using namespace std;

enum Game{
    ROCK,PAPER,SCISSORS

};

string Choice_to_string(Game choice)
{
    switch(choice)
    {
        case ROCK:
            return "ROCK";
            break;
        case PAPER:
            return "PAPER";
            break;
        case SCISSORS:
            return "SCISSORS";
            break;
        default: return "Invalid statement...";

    }

}

int Decide_winner(Game player,Game computer)
{
    if(player==computer)
        return 0;
    else if (player==ROCK && computer==PAPER 
            || player ==SCISSORS && computer== PAPER
            || player== ROCK && computer==SCISSORS)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
   
    int player_A=0,player_computer=0;
   
    for( int i=0;i<5;i++)
    {
    int player_choice,computer_choice;
    srand((unsigned)time(NULL));
    computer_choice=rand()%3;

    cout<<"Enter the choice for player ,\n0 for Rock\n1 for Paper\n2 for Scissors \n";
    cin>>player_choice;

    Game player,computer;

    player=static_cast<Game>(player_choice);
    computer=static_cast<Game>(computer_choice);
     
    cout<<"Player choice : "<<Choice_to_string(player)<<endl;
    cout<<"Computer choice : "<<Choice_to_string(computer)<<endl<<endl;
        int result=Decide_winner(player,computer);
        if(result==0)
        cout<<"It /'s a draw\n\n"<<endl;
        else if (result == 1)
        {
            cout<<"Player wins the round \n\n"<<endl;
            player_A++;
        }
        else if(result==-1)
        {
            cout<<"Computer wins the round\n\n "<<endl;
            player_computer++;
        }
    }

    if(player_A>player_computer)
    cout<<"The Player wins!!!!!.Congratulations!!"<<endl;
    else if(player_computer>player_A)
    cout<<"The computer wins !.Better Luck next time"<<endl;
    else if (player_A==player_computer)
    cout<<"The game is draw."<<endl<<endl;
    
    return 0;
}