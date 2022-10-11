#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //>--------------------------------Одновимірний масив-------------------------
    /*const int size = 5;
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << endl;
    }*/
    //>--------------------------------Двовимірний масив-------------------------
    const int col = 5;
    const int row = 5;
    int arr_2[col][row];
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr_2[i][j] = rand() % 10;
            cout << arr_2[i][j] << "\t";
        }
        cout << endl << endl;
    }
    int min, max;
    /*min = max = arr_2[0][0];
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (min > arr_2[i][j])
            {
                min = arr_2[i][j];
            }
            if (max < arr_2[i][j])
            {
                max = arr_2[i][j];
            }
        }
        cout << endl << endl;
    }*/
    int sum;
    for (size_t i = 0; i < col; i++)
    {
        sum = 0;
        for (size_t j = 0; j < row; j++)
        {
            sum += arr_2[i][j];
        }
        cout << "Sum = " << sum << endl;
    }
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << arr_2[j][i] << "\t";
        }
        cout << endl << endl;
    }
    return 0;
}