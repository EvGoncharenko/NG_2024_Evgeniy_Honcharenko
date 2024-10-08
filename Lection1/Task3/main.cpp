#include <iostream>

using namespace std;

int main()
{
    int FirstNumber = 0, SecondNumber = 0;
    char sign;

    cout << "Enter first number: ";
    cin >> FirstNumber;

    cout << "Enter second number: ";
    cin >> SecondNumber;

    cout << "Select sign: +, -, *, /: ";
    cin >> sign;

    cout << "Your result: ";

    switch (sign) {
        case '+':
            cout << FirstNumber + SecondNumber;
            break;

        case '-':
            cout << FirstNumber - SecondNumber;
            break;

        case '*':
            cout << FirstNumber * SecondNumber;
            break;

        case '/':
            cout << FirstNumber / SecondNumber;

        default:
            cout << "Sorry this is no such sign (>_<) ";
            break;
    }


}
