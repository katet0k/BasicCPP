#define _CRT_SECURE_NO_WARNINGS
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
            char str[25];
            cout << "Enter text: ";
            gets_s(str);
            cout << "Origen: " << str << endl;
            for (size_t i = 0; i < strlen(str); i++)
            {
                if (str[i] == ' ') {
                    str[i] = '\t';
                }
            }
            cout << "Modificate: " << str << endl;

        }break;
        case '2':
        {
            try
            {
                char* prefix = new char[10] {"Text is: "};
                char str_1[25];
                cout << "Enter text: ";
                gets_s(str_1);
                strcat(str_1, "\0");
                strcat(prefix, str_1);
                cout << prefix << endl;
            }
            catch (std::exception ex)
            {
                cout << ex.what() << endl;
            }


        } break;



        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}