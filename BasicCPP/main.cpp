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
        cout << "    #=====================MENU====================#" << endl;
        cout << "     |                                           | " << endl;
        cout << "     |    1 - Переписує всі слова, які           | " << endl;
        cout << "     |      складаються не менше ніж із семи     | " << endl;
        cout << "     |      літер у інший файл.                  | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |    2 - Переписатує рядки в інший файл.    | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |    3 - Переписує рядки в інший файл.      | " << endl;
        cout << "     |      Порядок рядків у іншому файлі        | " << endl;
        cout << "     |      зворотній.                           | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |    4 - Додає в інший файйл рядок із       | " << endl;
        cout << "     |      дванадцяти рисок(------------).      | " << endl;
        cout << "     |                                           | " << endl;
        cout << "    #=============================================#" << endl;
        cout << "     |    0 - Exit                               |" << endl;
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
            string path1 = "File1.txt";
            string path2 = "File2.txt";
            fstream File1;
            fstream File2;
            File1.open(path1,ios::out);
            File2.open(path2,ios::out);
            char str[25] = "Hello";
            char str1[25] = "Avocado";
            char str2[25] = "Tangerine";
            char str3[25] = "Bye";
            char A = 65;
            char b = 97;
            int q = 0;
            int q1 = 0;
            int q2 = 0;
            int q3 = 0;
            if (!File1.is_open()) {
                cout << " Error " << endl;
            }
            else {
                File1 << str << endl;
                File1 << str1 << endl;
                File1 << str2 << endl;
                File1 << str3 << endl;
            }

            if (!File2.is_open()) {
                cout << " Error " << endl;
            }
            else {
                for (size_t i = 0; i < 25; i++)
                {
                    for (size_t i = 0; i < strlen(str); i++)
                    {
                        if (str[i] == A || str[i] == b) {
                            q++;
                        }
                       
                    } 
                    for (size_t i = 0; i < strlen(str1); i++)
                    {
                        if (str1[i] == A || str1[i] == b) {
                            q1++;
                        }

                    }
                    for (size_t i = 0; i < strlen(str2); i++)
                    {
                        if (str2[i] == A || str2[i] == b) {
                            q2++;
                        }

                    }
                    for (size_t i = 0; i < strlen(str3); i++)
                    {
                        if (str3[i] == A || str3[i] == b) {
                            q3++;
                        }

                    }
                    A++;
                    b++;
                }
                if (q >= 7) {
                    File2 << str << endl;
                }
                if (q1 >= 7) {
                    File2 << str1 << endl;
                }
                if (q2 >= 7) {
                    File2 << str2 << endl;
                }
                if (q3 >= 7) {
                    File2 << str3 << endl;
                }
            }
            cout << "Все готово ;)" << endl;
            
            File1.close();
            File2.close();

            system("pause");
        }break;

        case '2':
        {

            string path1 = "File1.txt";
            string path2 = "File2.txt";
            fstream File1;
            fstream File2;
            File1.open(path1, ios::out);
            File2.open(path2, ios::out);
            char str[25] = "Hello";
            char str1[25] = "Avocado";
            char str2[25] = "Tangerine";
            char str3[25] = "Bye";
            char A = 65;
            char b = 97;
            int q = 0;
            int q1 = 0;
            int q2 = 0;
            int q3 = 0;
            if (!File1.is_open()) {
                cout << " Error " << endl;
            }
            else {
                File1 << str << endl;
                File1 << str1 << endl;
                File1 << str2 << endl;
                File1 << str3 << endl;
            }

            if (!File2.is_open()) {
                cout << " Error " << endl;
            }
            else {

                ifstream input("File1.txt");
                ofstream output("File2.txt");
                
                output << str << endl << str1 << endl << str2 << endl << str3 << endl;
                
            }
            cout << "Все готово ;)" << endl;

            File1.close();
            File2.close();

            system("pause");
        }break;

        case '3':
        {
            string path1 = "File1.txt";
            string path2 = "File2.txt";
            fstream File1;
            fstream File2;
            File1.open(path1, ios::out);
            File2.open(path2, ios::out);
            char str[25] = "Hello";
            char str1[25] = "Avocado";
            char str2[25] = "Tangerine";
            char str3[25] = "Bye";
            char A = 65;
            char b = 97;
            int q = 0;
            int q1 = 0;
            int q2 = 0;
            int q3 = 0;
            if (!File1.is_open()) {
                cout << " Error " << endl;
            }
            else {
                File1 << str << endl;
                File1 << str1 << endl;
                File1 << str2 << endl;
                File1 << str3 << endl;
            }

            if (!File2.is_open()) {
                cout << " Error " << endl;
            }
            else {

                ifstream input("File1.txt");
                ofstream output("File2.txt");

                output << str3 << endl << str2 << endl << str1 << endl << str << endl;

            }
            cout << "Все готово ;)" << endl;

            File1.close();
            File2.close();

            system("pause");
        }break;
        case '4':
        {

            string path1 = "File1.txt";
            string path2 = "File2.txt";
            fstream File1;
            fstream File2;
            File1.open(path1, ios::out);
            File2.open(path2, ios::out);
            char str[25] = "Hello";
            char str1[25] = "Avocado";
            char str2[25] = "Tangerine";
            char str3[25] = "Bye";
            char str4[25] = "--------------------";
            char A = 65;
            char b = 97;
            int q = 0;
            int q1 = 0;
            int q2 = 0;
            int q3 = 0;
            if (!File1.is_open()) {
                cout << " Error " << endl;
            }
            else {
                File1 << str << endl;
                File1 << str1 << endl;
                File1 << str2 << endl;
                File1 << str3 << endl;
            }

            if (!File2.is_open()) {
                cout << " Error " << endl;
            }
            else {

                ifstream input("File1.txt");
                ofstream output("File2.txt");

                output << str << endl << str1 << endl << str2 << endl << str3 << endl << str4 << endl;

            }
            cout << "Все готово ;)" << endl;

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
