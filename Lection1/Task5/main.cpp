#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter size: ";
    cin >> size;

    for (int height = 0; height < size + 1; height++) {
        for (int width = 0; width < size - height ; width++ ) {
            cout << " ";
        }

        for (int star = 0; star < height * 2 - 1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int stump = 0; stump < size - 1; stump++) {
        cout << " ";
    }

    cout << "*" << endl;
}
