#include <iostream>
#include <string>

using namespace std;

float f2c(float f) {

    return (f - 32) / 1.8;
}

int main(){
    bool run = true;
    while (run){
        float f;

        cout << "Enter fahrenheit: ";
        cin >> f;

        cout << "fahrenheit: " << f
        << "celsius: " << f2c(f) << endl;

        string again;

        cout << "Do you want to convert again? (y/n): ";
        cin >> again;

        if (again == "y" || again == "Y" || again == "yes" || again == "Yes"){

            run = true;

            } else { run = false;}
    }


    return 0;
}
