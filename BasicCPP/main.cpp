#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <string>
using namespace std;

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
        cout << "    #=====================MENU=====================#" << endl;
        cout << "     |                                            | " << endl;
        cout << "     |  1 - З'ясувує, чи збігаються рядки файлів. | " << endl;
        cout << "     |    Якщо ні, то виводить рядок, який не     | " << endl;
        cout << "     |    збігається, з кожного файлу.            | " << endl;
        cout << "     |                                            | " << endl;
        cout << "     |  2 - Записує в другий файл статистику      | " << endl;
        cout << "     |      першого.                              | " << endl;
        cout << "     |                                            | " << endl;
        cout << "     |  3 - Шифрування Цезаря.                    | " << endl;
        cout << "     |                                            | " << endl;
        cout << "     |                                            | " << endl;
        cout << "    #==============================================#" << endl;
        cout << "     |   0 - Exit                                 |" << endl;
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
        case '1': {

            string path1 = "File1.txt";
            string path2 = "File2.txt";
            fstream File1;
            fstream File2;
            File1.open(path1, ios::out);
            File2.open(path2, ios::out);
            char str[35] = {
                "Hello world\n"
                "It is a normal string\n"
            };
            char str1[37] = {
                "Goodbye world\n"
                "It is a normal string\n"
            };
            char str0[5];
            char A = 65;
            char b = 97;
            int q = 0;
            if (!File1.is_open()) {
                cout << " Error " << endl;
            }
            else {
                File1 << str << endl;
            }

            if (!File2.is_open()) {
                cout << " Error " << endl;
            }
            else {
                File2 << str1 << endl;
            }
            for (size_t i = 0; i < strlen(str); i++)
            {
                if (str[i] == str1[i]) {
                    
                }
                else {
                    str0[i] = str1[i];
                }
            }
            

            cout << str0 << endl;
            File1.close();
            File2.close();

            system("pause");
        
        }break;

        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}