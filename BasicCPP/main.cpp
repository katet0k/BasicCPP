#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
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
char* mystrcat(char* str1, const char* str2) {

    int size1 = mystrlen(str1);
    int size2 = mystrlen(str2);
    char* buf = new char[size1 + size2 + 1];
    int k = 0;
    for (size_t i = 0; i < size1; i++,k++)
    {
        buf[k] = str1[i];
    }
    for (size_t i = 0; i < size2; i++,k++)
    {
        buf[k] = str2[i];

    }

    buf [size1 + size2] = '\0';
    str1 = buf;
    return str1;
}
char* mystrchr(char* str, char s) {
    int size = mystrlen(str);
    for (size_t i = 0; i < size; i++)
    {
        if (str[i] == s) {
            return (str + i);
        }
    }
    return 0;
}
char* mystrstr(char* str1, char* str2) {
    uint32_t index;
    int size1 = mystrlen(str1);
    int size2 = mystrlen(str2);
    for (size_t i = 0, j = 0; i < strlen(str1); i++)
    {
        if (str1[i] == str2[j])
        {
            index = i;
            for (; j < strlen(str2); j++)
            {
                if (str1[index] != str2[j])
                {
                    break;
                }
                else {
                    cout << str2 << " " << str1 << endl;

                }
                index++;
            }
        }
        else {
            cout << "0" << endl;
            return 0;
            break;
        }
       
    }
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

        }break;
        case '3':
        {
            char str1[] = "Hello!";
            char str2[] = "World!";
            cout << "str1 --> " << str1 << endl;
            cout << "str2 --> " << str2 << endl;
            cout << "str1 --> " << mystrcat(str1, str2) << endl;
            system("pause");
        }break;
        case '4':
        {
            char* str = new char[7] {"Hello"};
            char s;
            cin >> s;
            char* sign = mystrchr(str, s);

            for (size_t i = 0; i < mystrlen(str); i++)
            {
                cout << *(str + i) << " --> " << (long long)(str + i) << endl;
            }

            cout << (long long)sign << endl;
            system("pause");

        }break;

        case '5':
        {
            char* str1 = new char[17] {"ho "};
            char* str2 = new char[17] {"Hello world"};
            cout << "str1 --> " << str1 << endl;
            cout << "str2 --> " << str2 << endl;
            mystrstr(str1, str2);
            system("pause");
        }break;
        default:
            break;
        }

    } while (switch_on != '0');

    return 0;
}