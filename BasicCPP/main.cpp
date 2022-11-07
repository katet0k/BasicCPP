#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

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
        cout << "    #==============================================#" << endl;
        cout << "     |   0 - Выход                               |" << endl;
        cout << "    #==============================================#" << endl;

        cout << "\n Введите число - > ";
        switch_on = _getch();
        system("cls");
        cout << endl;

        switch (switch_on)
        {
        case '0': {
            break;
        }break;


        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}