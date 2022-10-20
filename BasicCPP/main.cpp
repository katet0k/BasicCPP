#include <iostream>
#include <Windows.h>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");

    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

    int num;
    cin >> num;
    cout << endl;

    switch (num)
    {
    case 1:
    {

        const int col = 5;
        const int row = 5;

        int arr[col][row];

        int a;
        cin >> a;
        cout << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                arr[i][j] = a;
                a *= 2;
                cout << arr[i][j] << "\t \t";
            }
            cout << endl << endl;
        }
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

    }break;

    case 2:
    {

        const int col = 5;
        const int row = 5;

        int arr[col][row];

        int a;
        cin >> a;
        cout << endl;

        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                arr[i][j] = a;
                a++;
                cout << arr[i][j] << "\t";
            }
            cout << endl << endl;
        }
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


    }break;
    
  
    default:
        break;
    }
    return 0;
}