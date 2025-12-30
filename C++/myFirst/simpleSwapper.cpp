#include <iostream>
#include <string>

using namespace std;

void swapper(int &x,int &y) {

    int z = x;
    x = y;
    y = z;

}

int main(){

    int firstNum, secondNum;

    cout << "Enter first number: \n";
    cin >>  firstNum;
    cout << "Enter second number: \n";
    cin >>  secondNum;

    cout << "Before swap: " << firstNum << ", " << secondNum << " ";

    swapper(firstNum, secondNum);

    cout << "After swap: " << firstNum << ", " << secondNum;

    return 0;

}
