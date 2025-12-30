#include <iostream>
#include <string>

using namespace std;

void f2c(float f) {

    float C = (f - 32) / 1.8;
    cout << "fahrenheit: " << f << " celsius: " << C;

}

int main(){


    f2c(92);
    return 0;
}
