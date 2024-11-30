#include <iostream>
#include <map>

using namespace std;

int main()
{
    string user_string;
    map<char, int> m_string;

    cout << "Enter your string: ";
    cin >> user_string;

    cout << "Your string: " << user_string << endl;

    for(char symbol:user_string){
        m_string[symbol]++;
    }

    for(auto &[symbol, amount]:m_string){
        cout << "Symbol '"<< symbol << "' " << "= " << amount << endl;
    }
}
