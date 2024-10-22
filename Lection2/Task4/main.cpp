#include <iostream>

using namespace std;

int main()
{
    char str [256];

    cout << "Enter your string. No more than 256 characters: ";
    cin.getline(str,256);

    cout << "Your string: " << str << endl;

    int character = 0;
    while(str[character] != 0){
        character++;
    }

    cout << "Elements: " << character << endl;

}
