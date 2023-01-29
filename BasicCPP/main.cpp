#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

uint64_t global_id = 0;
struct Surname {

    bool is_empty_entity = true;
    string surname;

    void Input()
    {
        cout << " Surname --> "; cin >> surname;
        is_empty_entity = false;
    }
    void Output()
    {
        if (is_empty_entity == false)
        {

            cout << " Surname --> " << surname;
        }
        else {
            cout << "Empty entity!" << endl;
        }
    }
};

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
        cout << "     |                                           | " << endl;
        cout << "    #=============================================#" << endl;
        cout << "     |   0 - Exit                                |" << endl;
        cout << "    #=============================================#" << endl;

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
            uint32_t size = 5;
            string* surname = new string[size];

            for (size_t i = 0; i < size; i++)
            {
                cin >> surname[i];
                cout << endl;
            }
            system("pause");
            system("cls");

            sort(surname, surname + size);
            for (size_t i = 0; i < size; i++)
            {
                cout << i << " - ";
                cout << surname[i] << endl;
                cout << endl;
            }
            system("pause");

        }break;
        case '2':
        {
            int a, b;
            cin >> a;
            cin >> b;
            int** A = new int [a][b];
            for (int i = 0; i < a; i++)
            {

            }

        }break;
        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}