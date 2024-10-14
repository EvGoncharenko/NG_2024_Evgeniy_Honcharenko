#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{

    int size, animation = 5;

    cout << "Enter size: ";
    cin >> size;

    for (int takt = 0; takt < animation; takt++) {
        for (int TaktOne = 0; TaktOne < size; TaktOne++) {
            for (int Star = 0; Star < TaktOne + 1; Star++) {
                cout << "* ";
            }
            cout << endl;
        }

        Sleep(100);
        system("CLS");

        for (int TaktTwo = 0; TaktTwo < size; TaktTwo++) {
            for (int Space = 0; Space < size-TaktTwo-1; Space++) {
                cout << "  ";
            }

            for (int Star = 0; Star < TaktTwo+1; Star++) {
                cout << "* ";
            }
            cout << endl;
        }

        Sleep(100);
        system("CLS");

        for (int TaktThree = 0; TaktThree < size; TaktThree++) {
            for (int Space = 0; Space < TaktThree; Space++) {
                cout << "  ";
            }

            for (int Star = 0; Star < size-TaktThree; Star++) {
                cout << "* ";
            }
            cout << endl;
        }

        Sleep(100);
        system("CLS");

        for (int TaktFour = 0; TaktFour < size; TaktFour++) {
            for (int Star = 0; Star < size-TaktFour; Star++) {
                cout << "* ";
            }
            cout << endl;
        }

        Sleep(100);
        system("CLS");

        if (takt==4){
            takt = 0;
        }
    }

}
