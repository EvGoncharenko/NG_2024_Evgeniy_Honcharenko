#include <iostream>

using namespace std;

int main()
{
    int set_number[5];

    for (int position = 0; position < 5; position++) {
        cout << "Enter your number: ";
        cin >> set_number[position];
    }

    cout << "Your numbers: ";

    for (int output: set_number) {
        if (output == set_number[0]){
            cout << set_number[0];
        }else{
            cout << ", " << output;
        }
    }

    cout << endl;
}
