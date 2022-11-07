#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <ctime>
using namespace std;


void ArrCopi(int* arr, int* arr1, int a, int b) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    arr1 = arr;
    for (size_t i = 0; i < a; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        arr[i] = i;
        cout << arr[i] << "\t";
    }
    cout << endl;

    for (size_t i = 0; i < b; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        cout << arr1[i] << "\t";
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
}

void Rra(int* arr, int a, int b) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    for (int i = 1; i <= a; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        arr[i] = i;
        cout << arr[i] << "\t";

    }
    cout << endl;
    for (int i = 0; i < a; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        arr[i] = b;
        cout << arr[i] << "\t";
        b--;
    }
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << endl;
}
void RraCopi(int* arr, int* arr1, int a, int b) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    arr1 = arr;
    int q = a;
    for (size_t i = 1; i <= a; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        arr[i] = i;
        cout << arr[i] << "\t";
    }
    cout << endl;

    for (size_t i = 0; i < b; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
        arr1[i] = q;
        cout << arr1[i] << "\t";
        q--;
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
}
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    setlocale(LC_ALL, "ru");
    char switch_on;
    do
    {
       
        system("cls");
        cout << "    #=====================MENU====================#" << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   1 - копирует один массив в другой.      | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   2 -изменяет порядок элементов массива   | " << endl;
        cout << "     |     на противоположный.                   | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   3 -  копирует один массив в другой так, | " << endl;
        cout << "     |     чтобы во втором массиве элементы      | " << endl;
        cout << "     |     находились в обратном порядка.        | " << endl;
        cout << "     |                                           | " << endl;
        cout << "    #==============================================#" << endl;
        cout << "     |   0 - Exit                                |" << endl;
        cout << "    #==============================================#" << endl;

        cout << "\n --> ";
        switch_on = _getch();
        system("cls");
        cout << endl;

        switch (switch_on)
        {
        case '0': {
            break;
        }break;

        case '1':
        {
            int a;
            cout << " --> ";
            cin >> a;
            int b = a;
            int* arr = new int [a];
            int* arr1 = new int[b];

            ArrCopi(arr1, arr, a,b);


            cout << endl;
            system("pause");

        }break;
        case '2':
        {
            int a = 10;
            int b = a;
            int* arr = new int[a];

            cout << endl;
            Rra( arr, a, b);


            cout << endl;
            system("pause");

        }break;
        case '3':
        {
            int a;
            cout << " --> ";
            cin >> a;
            int b = a;
            int* arr = new int[a];
            int* arr1 = new int[b];

            RraCopi(arr1, arr, a, b);


            cout << endl;
            system("pause");

        }break;
        default:
            break;
        }

    } while (switch_on != '0');

    return 0;
}