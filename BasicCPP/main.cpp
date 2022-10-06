#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char switch_on;
    int start, end;

    do {
        system("cls");
        cout << "#>----------<MENU>----------<#" << endl;
        cout << "|      1 - Task              |" << endl;
        cout << "|      2 - Task              |" << endl;
        cout << "|      3 - Task              |" << endl;
        cout << "#>--------------------------<#" << endl;
        cout << "|      0 - Exit              |" << endl;
        cout << "#>--------------------------<#" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)

        {
        case '0':
        {

        }break;

        case '1':
        {
            int col, row;
            cout << "h->";
            cin >> col;
            cout << "w->";
            cin >> row;
            for (size_t i = 0; i < col; i++)
            {
                for (size_t j = 0; j < row; j++)
                {
                    if (i < j)
                    {
                        cout << "  ";
                    }
                    else {
                        cout << "*  ";
                    }
                }
                cout << endl;
            }
        }break;

        case 2:
        {

            switch (switch_on)
            {
            case 'a':
            {
                int col = 22, row = 23;

                cout << "h->";
                cout << "w->";

                for (int i = 0; i < col; i++)
                {
                    for (int j = 0; j < row; j++)
                    {
                        if (i < j)
                        {
                            cout << "  ";
                        }
                        else {
                            cout << "*  ";
                        }
                    }
                    cout << endl;
                }
                /*default:
                    break;
                }
                */


            }break;


            }
        }while (false);

        return 0;
        }
    }
    
