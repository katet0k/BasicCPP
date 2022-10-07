#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char switch_on;

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
            int a, b;
            char z;
            cout << "h->";
            cin >> a;
            cout << "w->";
            cin >> b;
            cout << "*-> ";
            cin >> z;
            for (size_t i = 0; i <= a; i++)
            {
                for (size_t j = 0; j <= b; j++)
                {
                    cout << z << " ";
                }
                cout << endl;
            }
            system("pause");
        }break;

        case '2':
        {
            int a, b;
            cout << "h->";
            cin >> a;
            cout << "w->";
            cin >> b;
            for (size_t i = 0; i < b; i++)
            {
                if (i == 0 || i == b - 1)
                {
                    for (size_t j = 0; j < a; j++)
                    {
                        if (i == 0)
                        {
                            if (j == 0) {
                                cout << "* ";
                            }
                            else {
                                cout << " ";
                            };
                        }
                        if (i == b - 1)
                        {
                            if (j == 0) {
                                cout << "* ";
                            }
                            else {
                                cout << " ";
                            }
                        }
                    }
                }
                else {
                    for (size_t j = 0; j < b; j++)
                    {
                        if (j == 0 || j == a - 1)
                        {
                            cout << "*  ";
                        }
                        else {
                            cout << "  ";
                        }
                    }
                }
                cout << endl;

                system("pause");
                
              
            }

        case '3':
        {
            int a, b;
            char s;
            cout << "Define A (only integer)" << endl;
            cin >> a;
            cout << "Define B (only integer)" << endl;
            cin >> b;
            cout << "Choose a symbol to draw a rectangle with" << endl;
            cin >> s;
            system("cls");

            for (int k = 1; k < 3; k++) {

                for (int j = 1; j < 8; j++) {
                    cout << s;

                }
                cout << endl;

                cout << endl;
            }
            for (int i = 1; i < 5; i++) {
                cout << s;
                cout << "\t" << s << endl;

            }


            cout << endl;



            system("pause");
        }

        }break;


        default:
        {
            break;
        }
        }
        return 0;
    } while (true);
    
}