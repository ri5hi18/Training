#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

enum Choice {
    ROCK,
    PAPER,
    SCISSORS
};

string choiceToString(Choice c) {
    switch (c) {
        case ROCK:
            return "Rock";
        case PAPER:
            return "Paper";
        case SCISSORS:
            return "Scissors";
        default:
            return "Invalid";
    }
}

int determineWinner(Choice player, Choice computer) {
    if (player == computer) {
        return 0; // Tie
    } else if ((player == ROCK && computer == SCISSORS) ||(player == SCISSORS && computer == PAPER) ||(player == PAPER && computer == ROCK)) 
    {
        return 1; // Player wins
    } else {
        return -1; // Computer wins
    }
}

int main() {

    srand(static_cast<unsigned int>(time(0)));

    Choice playerChoice, computerChoice;
    int playerInput;
    cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
    cin >> playerInput;
    if (playerInput < 0 || playerInput > 2) {
        cout << "Invalid choice. Exiting the game." << endl;
        return 1;
    }
    playerChoice = static_cast<Choice>(playerInput);

    computerChoice = static_cast<Choice>(rand() % 3);

    cout << "You chose: " << choiceToString(playerChoice) << endl;
    cout << "Computer chose: " << choiceToString(computerChoice) << endl;

    int result = determineWinner(playerChoice, computerChoice);
    if (result == 0) {
        cout << "It's a tie!" << endl;
    } else if (result == 1) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}