#include <iostream>
#include <vector>
#include <utility>

using namespace std;

//Хранение матриц
struct Matrices
{
    vector<vector<int>> matrix_one;
    vector<vector<int>> matrix_two;
    vector<vector<int>> matrix_result;
};

//Функция для координации пользователя + подготовка размера матриц для дальнейших действий с ними
pair<int,int> enter_size_matrix()
{
    int size_matrix_one, size_matrix_two;

    cout << "Enter a value that will correspond to the size of the matrices." << endl
         << "Note: The entered values apply to both matrices, as addition and subtraction of matrices of different sizes is not possible." << endl
         << "Enter first value: ";
    cin >> size_matrix_one;
    cout << "Enter second value: ";
    cin >> size_matrix_two;

    return make_pair(size_matrix_one, size_matrix_two);
}

//Функция(Шаблон) для заполнения матриц значениями
void entering_value(int size_one, int size_two, vector<vector<int>>& matrices)
{
    matrices.resize(size_one, vector<int>(size_two));

    for (int value_i = 0; value_i < size_one; value_i++) {
        for (int value_j = 0; value_j < size_two; value_j++) {
            cout << "Enter value " << value_i + 1 << "." << value_j+1 << ": ";
            cin >> matrices[value_i][value_j];
        }
    }

    cout << "Result: " << endl;
    for (int value_i = 0; value_i < size_one; value_i++) {
        for (int value_j = 0; value_j < size_two; value_j++) {
            cout << matrices[value_i][value_j] << " ";
        }
        cout << endl;
    }
}

// Сумирование матриц и вывод результата
void summation_matrices(int size_one, int size_two, Matrices& user_matrix)
{
    for (int value_i = 0; value_i < size_one; value_i++) {
        for (int value_j = 0; value_j < size_two; value_j++) {
            user_matrix.matrix_result[value_i][value_j] = user_matrix.matrix_one[value_i][value_j] + user_matrix.matrix_two[value_i][value_j];

            cout << user_matrix.matrix_result[value_i][value_j] << " ";
        }
        cout << endl;
    }
}

// Вычитание матриц и вывод результата
void subtraction_matrices(int size_one, int size_two, Matrices& user_matrix)
{
    for (int value_i = 0; value_i < size_one; value_i++) {
        for (int value_j = 0; value_j < size_two; value_j++) {
            user_matrix.matrix_result[value_i][value_j] = user_matrix.matrix_one[value_i][value_j] - user_matrix.matrix_two[value_i][value_j];

            cout << user_matrix.matrix_result[value_i][value_j] << " ";
        }
        cout << endl;
    }
}

//Функция для подготовки матриц к математическим операциям
void filling_matrices()
{
    Matrices user_matrix;

    auto [size_one , size_two] = enter_size_matrix();
    user_matrix.matrix_result.resize(size_one, vector<int>(size_two));

    cout << "Your the size of the matrices: " << size_one << "x" << size_two << endl;
    cout << "Enter a value into the first matrix." << endl;
    entering_value(size_one, size_two, user_matrix.matrix_one);

    cout << "Enter a value into the second matrix." << endl;
    entering_value(size_one, size_two, user_matrix.matrix_two);

    char sign;
    cout << "Enter sign '+' or '-': ";
    cin >> sign;
    cout << "Your result: " << endl;
    switch (sign)
    {
        case '+':
            summation_matrices(size_one, size_two, user_matrix);
            break;
        case '-':
            subtraction_matrices(size_one, size_two, user_matrix);
            break;
        default:
            cout << "Error -_- !!";
            break;
    }
}

//Просто функция для запуска всей этой темы
int main()
{
    filling_matrices();
}
