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
            fstream file;
            fstream file2;
            char a[256] = "Hello";
            char a1[256] = "World";
            char a2[256] = "avocado";
            char A = 65;
            char b = 97;
            int q = 0;
            int w = 0;

            file.open("file.txt", ios::out);
            if (file.is_open())
            {
                file << a << endl;
                file << a1 << endl;
                file << a2 << endl;
                file.close();
            }
            else
            {
                cout << " Error. file not found!! " << endl;
            }
            for (uint32_t i = 0; i < 26; i++)
            {
                a[i] = a[256];
                if (a[i] = A) {
                    q++;
                    ifstream input("file.txt");
                    string string;
                    ofstream output("file2.txt");
                    while (getline(input, string))
                    {
                        output << string << endl;
                    }
                }
                if (a[i] = b) {
                    q++;
                    ifstream input("file.txt");
                    string string;
                    ofstream output("file2.txt");
                    while (getline(input, string))
                    {
                        output << string << endl;
                    }
                }
                A++;
                b++;
            }
            
            system("pause");

        }break;

        case '2':
        {
            fstream file;
            fstream file2;
            
            file.open("file.txt", ios::out);
            if (file.is_open())
            {
                file << " Hello " << endl;
                file << " World " << endl;
                file << " homeeeeee " << endl;
                file << " hiiiiii " << endl;
                file << " qqwerty " << endl;
                file << " qawsedrf " << endl;
                file << " my " << endl;
                file << " rixoxxx" << endl;
                file << " www " << endl;
                file << " 12342 " << endl;
                file.close();
            }
            else
            {
                cout << " Error. file not found!! " << endl;
            }

            ifstream input("file.txt");
            string string;
            ofstream output("file2.txt");
            while (getline(input, string))
            {
                output << string << endl;
            }




            system("pause");
        }break;


        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}