// Hi, this is a simple battleship game, i hope you will enjoy.

#include <iostream>

using namespace std;

int main () {

    // Here we decide what will be the position of our ships in this war.
    bool ships[4][4] = {

        {0,1,1,0},
        {1,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };

    // we make variables that will store number off shoots hits and how many rounds you shoot
    int hits = 0;
    int rounds = 0;


    while (hits<4) {

        // we will make row and column to store the coordinates of the shoot
        int row, column;

        // we get the user inputs here and store them in our variables
        cout << "Selecting coordinates\n";

        cout << "Choose an row number between 0 and 3: \n";
        cin >> row;

        cout << "Choose an column number between 0 and 3: \n";
        cin >> column;

        // cause we used 0 and 1 to place our ship in our 4*4 map we can use them as true or false too like below
        if (ships[row][column]){

            // here we destroy the ship by turning 1 to 0
            ships[row][column] = 0;

            // now we add 1 to hits variable
            hits++;

            cout << "HIT!----> " << (3-hits) << " <----LEFT\n\n";

        // else we cout the missed shot message and add 1 to rounds played so we can add limit to rounds later
        } else { cout << "----YOU MISSED THE SHOT----";}

        rounds++;
    }

    cout << "---WIN----YOU WON IN ->" << rounds << "<---GOOD LUCK----";

    return 0;
}

