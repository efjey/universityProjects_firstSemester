// Hello welcome to my first game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // I searched this part so i don't know how exactly this work but this will make it random
    srand(time(0));

    // CH as choice
    int userCH, pcCH;

    // Here we tell user how to select their move
    cout << "----Hello welcome to my first game with c++-----\n\n";
    cout << "1.ROCK \n2.PAPER \n3.SCISSOR\n";

    // We store that move here
    cout << "Choose your move: ";
    cin >> userCH;

    // idk how this work!
    pcCH = rand() % 3 + 1;

    // we show user choice and computer choice here
    cout << "Your choice: ";
    cout << ((userCH == 1) ? "ROCK" : (userCH == 2 ) ? "PAPER"
    : (userCH == 3) ? "SCISSOR" : "Select between 1-3 please");

    cout << "\nComputer choice: ";
    cout << ((pcCH == 1) ? "ROCK" : (pcCH == 2) ? "PAPER" : (pcCH == 3) ? "SCIRSSOR"
    : "SMTHING IS WRONG");

    // now here we compare 2 choices and decide who will win
    if (pcCH == userCH) { cout << "\n****** It's tie! ******";}


    else if ((userCH == 1 && pcCH == 3) ||
            (userCH == 2 && pcCH == 1) ||
            (userCH == 3 && pcCH == 2)
        ) { cout << "\n***** YOU WINNN *****";}
    else { cout << "\n***** OOOPS YOU LOSE ******";}

    return 0;

    }
// i could use loops to make it continue but idk how to use while and other loops so we will forget it
// thanx for your time <3

