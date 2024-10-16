#include <iostream>

using namespace std;

int main()
{
    int number;
    int set_number[5];

    for (int position = 0; position < 5; position++) {
        cout << "Enter your number: ";
        cin >> number;
        set_number[position] = number;
    }

    cout << "Your numbers: ";

    for (int output: set_number) {
        if (output == set_number[0]){
            cout << set_number[0];
        } else if (output == set_number[4]) {
            cout << ", " << output << ".";
        }else{
            cout << ", " << output;
        }
    }

    cout << endl;
}
