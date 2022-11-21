#include <iostream>
#include <conio.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

template<typename T>
char AA(char A) {
    for (size_t i = 0; i < 25; i++)
    {
        cout << A;
        A++;
    }
    return A;
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
        cout << "     |   1 - Меняет все пробелы на табуляцию.    | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   2 - Определяет количество букв, чисел,  | " << endl;
        cout << "     |     и других знаков в строке.             | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   3 - Подсчитывает количество слов в      | " << endl;
        cout << "     |     строке.                               | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   4 - Определяет является ли строка       | " << endl;
        cout << "     |     палиндромом.                          | " << endl;
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
            cout << " Enter text --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 3));
            gets_s(str);
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
            for (size_t i = 0; i < strlen(str); i++)
            {
                if (str[i] == ' ') {
                    str[i] = '\t';
                }
            }
            cout << " Modificate --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 1));
            cout << str << endl;

            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 8));
            cout << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
        }break;

        case '2':
        {
            char str[25];
            cout << " Enter text --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 3));
            gets_s(str);
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
            char A =  65 ;
            char a = 97;
            char N = 48;

            int b = 0;
            int b1 = 0;
            int n = 0;
            int other = 0;
            for (size_t i = 0; i < 25; i++)
            {
                for (size_t i = 0; i < strlen(str); i++)
                {
                    if (str[i] == A) {
                        b++;
                    }
                    if (str[i] == a) {
                        b1++;
                    }
                }
                A++;
                a++;
            }
            for (size_t i = 0; i < 9; i++)
            {
                for (size_t i = 0; i < strlen(str); i++)
                {
                    if (str[i] == N) {
                        n++;
                    }
                }
                N++;

            }
            for (size_t i = 0; i < strlen(str); i++)
            {
                if (str[i] != A && str[i] != N && str[i] != a) {

                    other++;
                }
            }

            cout << endl;
            cout << " letters --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 11));
            cout << b + b1 << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
            cout << " numbers --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 3));
            cout << n << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
            cout << " other --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 1));
            cout << other - b - b1 - n << endl;

            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 8));
            cout << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));

        }break;

        case '3':
        {
            char str[25];
            
            char A = 65;
            char a = 97;
            char P = 32;
            int c = 0;
            cout << endl;
            cout << " Enter text --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 11));
            gets_s(str);
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
            for (size_t i = 0; i <= strlen(str); i++)
            {
                if (i == strlen(str)) {
                   
                    if (str[i] != P) {
                        c++;
                    }
                    else {
                        c--;
                    }
                }
                if (str[i] == P) {
                    c++;
                }
            }

            cout << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
            cout << " word count --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 3));
            cout << c << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 8));
            cout << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));

        }break;

        case '4':
        {
            size_t a, b;
            char str[25];
            cout << endl;
            cout << " Enter text --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 3));
            gets_s(str);
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
            a = strlen(str);
            b = true;
            for (size_t i = 0; i < a / 2; i++)
            {
                if (str[i] != str[a - i - 1]) {
                    b = false;
                }
                if (b)
                {
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 11));
                    cout << " This text is palindrom " << endl << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
                    break;
                }
                else
                {
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 1));
                    cout << " This text isn`t palindrom " << endl << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));
                    break;
                }
            }
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 8));
            cout << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 4 | 7));

        }break;

        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}
