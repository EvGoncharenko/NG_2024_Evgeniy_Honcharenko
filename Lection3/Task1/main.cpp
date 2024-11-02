#include <iostream>

using namespace std;

void star_tree(int counter ,int star){
    if(counter == star*2-1){
        return;
    }else{
        cout << "*";
        star_tree(counter+1, star);
    }
}

void width_tree(int width){
    if(width == 0){
        return;
    }else{
        cout << " ";
        width_tree(width - 1);
    }
}

void last_star_tree(int last_star){
    if(last_star == 0){
        cout << "*" << endl;
        return;
    }else{
        cout << " ";
        last_star_tree(last_star - 1);
    }
}

void user_tree(int size, int user_tree_star){
    if(size == 0){
        return;
    }else{
        width_tree(size);
        star_tree(0,user_tree_star);
        cout << endl;
        user_tree( size - 1, user_tree_star + 1 );
    }
}

int main()
{
    int size;

    cout << "Enter size: ";
    cin >> size;

    user_tree(size, 1);
    last_star_tree(size);

}
