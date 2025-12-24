// Hello i hope you have a great day =) (or night)
/*Let's go:
Actually this is my first program in C++, i'm using code:Blocks as IDE and my source is w3schools.com to learn C++.ُSolar 1404/10/3 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    // First we make our variables to store our numbers and operation in them...
    int n1;
    int n2;

    char op;
    // here i talk to user and tell them how to use it(the tutorial is needed because its a very complex piece of code XD (sorry i got your time to read this...))
    cout << "----->Hello this is a calculator<-----\n\n";
    cout << "STEPS===> Enter your first number, Enter the operator,Enter second number\n\n";

    // here the calculating stuff getting start and we get all we need from user...
    cout << "First number: ";
    cin >> n1;
    cout << "Operator: ";
    cin >> op;
    cout << "Second number: ";
    cin >> n2;



// نمیدونم سویچچ هم جزو دستور شرطی حساب میشه یا نه چون دقیقا بعد ایف توی سایت بهمون یاد داد فک کنم اشکالی نداشته باشه ازش استفده کنم

    // with switch we select which code blocks to be executed
    switch(op) {

    case '+':
        cout << n1 << " + " << n2 << " = " << n1+n2;
        break;

    case '-':
        cout << n1 << " - " << n2 << " = " << n1-n2;
        break;

    case '*':
        cout << n1 << " * " << n2 << " = " << n1*n2;
        break;

    case '/':
        cout << n1 << " / " << n2 << " = " << n1/n2;
        break;

    case '%':
        cout << n1 << " % " << n2 << " = " << n1%n2;
        break;

    default:
        // if the operator is other than +, -, *, / and % error message is shown.
        cout << "Error! Operator is not correct";
        break;
    }


    return 0;
}

