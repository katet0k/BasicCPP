#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <sstream>
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
int StringToNumber(char* str) {
    cout << (int)str;
    return 0;
}

char NumberToString(string str) {
    cout << "I am a string " << str << endl;

    int num = stoi(str);
    cout << "I am an int " << num << endl;
    return 0;
}
char* Uppercase(char* str1) {
    char A = 65;
    char a = 97;
    for (size_t i = 0; i < 25; i++)
    {
        for (size_t i = 0; i < str1[i]; i++)
        {
            if (str1[i] == a) {
                str1[i] = A;
            }
        }
        a++;
        A++;
    }
    cout << "ÑÒĞÎÊÀ Ó ÂÅĞÕÍÜÎÌÓ ĞÅÃ²ÑÒĞ² --> ";
    return str1;
}
char* Lowercase(char* str1) {
    char A = 65;
    char a = 97;
    for (size_t i = 0; i < 25; i++)
    {
        for (size_t i = 0; i < str1[i]; i++)
        {
            if (str1[i] == A) {
                str1[i] = a;
            }
        }
        a++;
        A++;
    }
    cout << "ñòğîêà ó íèæíüîìó ğåã³ñòğ³ --> ";
    return str1;
}
char* mystrrev(char* str) {

    for (int i = 4; i != -1; i--)
    {
        cout << str[i];
    }

    cout << endl;
    return str;
}
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

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

        case '1': {
            char str1[256];
            cout << "Ââåä³òü ñòğîêó --> ";
            cin.getline(str1, 256);
            char str2[256];
            cout << "Ââåä³òü ñòğîêó --> ";
            cin.getline(str2, 256);
            cout << "str1 --> " << str1 << endl;
            cout << "str2 --> " << str2 << endl;
            cout << "str1 --> " << mystrlen(str1) << endl;
            cout << "str2 --> " << mystrlen(str2) << endl;
            if (mystrlen(str1) > mystrlen(str2)) {
                cout << "str1" << " > " << "str2" << endl;
            }
            else if (mystrlen(str1) < mystrlen(str2)) {
                cout << "str1" << " < " << "str2" << endl;
            }
            else if (mystrlen(str1) == mystrlen(str2)) {
                cout << "str1" << " = " << "str2" << endl;
            }
            system("pause");
        }break;
        case '2': {
            char str1[256];
            cout << "Ââåä³òü ñòğîêó --> ";
            cin.getline(str1, 256);
            cout << StringToNumber(str1) << endl;
            system("pause");
        }break;
        case '3':
        {
            string str = "4";
            cout << NumberToString(str) << endl;
            system("pause");
        }break;
        case '4':
        {
            char str1[256];
            cout << "Ââåä³òü ñòğîêó --> ";
            cin.getline(str1, 256);
            cout << Uppercase(str1) << endl;

            system("pause");
        }break;
        case '5':
        {
            char str1[256];
            cout << "Ââåä³òü ñòğîêó --> ";
            cin.getline(str1, 256);
            cout << Lowercase(str1) << endl;

            system("pause");
        }break;
        case '6': {
            char str[] = {"Hello"};
            cout << mystrrev(str) << endl;
            system("pause");
        }break;
        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}