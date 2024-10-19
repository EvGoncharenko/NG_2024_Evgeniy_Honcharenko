#include <iostream>

using namespace std;

int main()
{
    int set_number[5]{0};
    int value = 0,max_value = 0;

    for (int number = 0; number < 5; number++) {
        cout << "Enter " << number+1 << " value: ";
        cin >> value;
        set_number[number] = value;
    }

    for (int search = 0; search < 5; search++) {
        if(set_number[search]>max_value)
            max_value = set_number[search];
    }

    for(int picture = 0; picture < max_value; picture++){
        for(int star:set_number){
            value = star - picture;

            if(value>0){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
