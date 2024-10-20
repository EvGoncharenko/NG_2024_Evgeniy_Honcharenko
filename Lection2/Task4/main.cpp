#include <iostream>

using namespace std;

int main()
{
    char str [256];

    cout << "Enter your string. No more than 256 characters: ";
    cin.getline(str,256);

    cout << "Your string: " << str << endl;

    int character = 0;
    for (int element = 0; element < str[element] != 0; element++) {
        if(str[element] == ' '){
            continue;
        }else{
            character++;
        }
    }

    cout << "Elements: " << character << endl;

}
