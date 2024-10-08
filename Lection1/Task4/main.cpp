#include <iostream>

using namespace std;

int main()
{
    int zarplata;

    cout << "Kakova tvoya zarplata?: ";
    cin >> zarplata;

    if (zarplata < 1000){
        cout << "Rabotay bolshe :(. ";
    }

    if (zarplata > 999){

        if (zarplata > 999999){
            cout << "Da ti milioner -_-. ";
        }

        if (zarplata < 1000000){
            cout << "Horosho rabotayesh ;). ";
        }
    }

    cout << "No ti molodes :3." << endl;
}

