#include <iostream>


using namespace std;

int main(){

    int numbers[10];

    for (int i=0; i<10;i++){

        cout << "Enter number " << i + 1 << " : \n";s
        cin >> numbers[i];
    };

    for (int pass=0 ;pass<9; pass++){

        for (int i=0; i<10 - pass - 1; i++) {

        if (numbers[i] > numbers[i+1]) {

            // we store the first number in n1 variable
            int n1 = numbers[i];


            // we put second number in first one like this
            numbers[i] = numbers[i+1];

            // now we put stored number in second position
            numbers[i+1] = n1;

        };
    }
    }

    cout << "Sorted array: ";
    for (int i=0; i<10; i++) {

        cout << numbers[i] << ", ";
    }


    return 0;

}
