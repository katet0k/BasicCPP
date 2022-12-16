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
            FILE* file1;
            FILE* file2;
            char str1[256];
            char str2[256];
            char path[] = "file1.txt";
            char path[] = "file2.txt";

            string text, _mode;
            if ((file1 = fopen(path, _mode.c_str())) == NULL)
            {
                perror("Error occured while opening.txt");
            }
            while (fgetc(file1)) {
                


            }


        }break;

        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}