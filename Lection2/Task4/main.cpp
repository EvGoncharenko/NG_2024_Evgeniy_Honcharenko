#include <iostream>

using namespace std;

int main()
{
    char user_string [256]{0};
    int counter = 0;

    cout << "Enter your string. No more than 256 characters: ";
    cin.getline(user_string,256);

    cout << "Your string: " << user_string << endl;

    for(char symbol = ' '; symbol < '|' + 1; symbol++){
        for(char user_string_element:user_string){
            if(symbol == user_string_element){
                counter++;
            }else{
                continue;
            }
        }
        if(counter > 0){
            cout << "Symbols per string '" << symbol << "' - " << counter << endl;
            counter = 0;
        }
    }
}
