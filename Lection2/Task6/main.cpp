#include <iostream>

using namespace std;

int main()
{
    string user_string;
    bool word = false;
    int counter = 0;

    cout << "Hello, enter your string: ";
    cin >> user_string;

    for(char symbol:user_string){
        if(isalpha(symbol)){
            if(!word){
                word = true;
                counter++;
            }
        }else{
            word = false;
        }
    }

    cout << "Words in the string: " << counter << endl;

    return 0;
}
