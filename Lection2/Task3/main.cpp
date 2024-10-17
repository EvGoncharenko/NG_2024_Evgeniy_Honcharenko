#include <iostream>

using namespace std;

int main()
{
    int set_numbers[20] {0};
    int numbers, max_number = 0;

    cout << "Enter some numbers or enter zero to finish entering and see the picture." << endl;

    for (int set_numbers_in_array = 0; set_numbers_in_array < 20; set_numbers_in_array++) {

        cout << "Enter some number: ";
        cin >> numbers;
        set_numbers[set_numbers_in_array] = numbers;

        if(numbers == 0)
            break;
    }

    for(int max:set_numbers){

        if(max>max_number){
            max_number=max;
        }
    }

    for (int picture = 0; picture < 20; picture++) {

        if(set_numbers[picture]==0){
            continue;
        }

        for (int space = 0; space < (max_number-set_numbers[picture])/2; space++) {
            cout << " ";
        }

        for (int star = 0; star < set_numbers[picture]; star++) {
            cout << "*";
        }

        cout << endl;
    }
}
