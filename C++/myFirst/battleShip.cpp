#include <iostream>

using namespace std;

int main () {

    bool ships[4][4] = {

        {0,1,1,0},
        {1,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };

    int hits = 0;
    int rounds = 0;

    while (hits<4) {

        int row, column;

        cout << "Selecting coordinates\n";
        cout << "Choose an row number between 0 and 3: \n";
        cin >> row;

        cout << "Choose an column number between 0 and 3: \n";
        cin >> column;

        if (ships[row][column]){

            ships[row][column] = 0;

            hits++;

            cout << "HIT!----> " << (3-hits) << " <----LEFT\n\n";

        } else { cout << "----YOU MISSED THE SHOT----";}

        rounds++;
    }

    cout << "---WIN----YOU WON IN ->" << rounds << "<---GOOD LUCK----";

    return 0;
}

