#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
int mystrlen(const char* str)
{
    int size = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}
char* mystrcpy(char* str1, const char* str2)
{
    int size = mystrlen(str2);
    str1 = new char[size + 1];
    for (size_t i = 0; i < size; i++)
    {
        str1[i] = str2[i];
    }
    str1[size] = '\0';
    return str1;
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
            char str[] = "Hello";
            cout << str << endl;
            cout << "str = " << mystrlen(str) << endl;
            system("pause");

        }break;
        case '2':
        {
            char str1[] = "Hello!";
            char str2[] = "World!";
            cout << "str1 --> " << str1 << endl;
            cout << "str2 --> " << str2 << endl;
            cout << "str1 --> " << mystrcpy(str1, str2) << endl;
            cout << "str2 --> " << str2 << endl;
            system("pause");

        }


        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}