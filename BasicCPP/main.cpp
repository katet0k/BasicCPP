#include <iostream>
#include <conio.h>
#include <math.h>
#include <Windows.h>
using namespace std;

int main()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
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
            int bal = 0;
            int bal1 = 0;
            int bal2 = 0;
            int d;
            int c;


            cout << "........Уровень 1........" << endl; {
                cout << "" << endl;

                for (int i = 0; i < 5; i++) {

                    srand(time(0));
                    int a = rand() % 10;
                    int b = rand() % 10;
                    int AB = a * b;

                    cout << "    " << a << " * " << b << " = ";
                    cin >> c;


                    if (a * b != c) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "    не правильно, правильный ответ: " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "         " << a << " * " << b << " = " << AB << endl;

                    }

                    else if (a * b == c) {
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    правильно " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                        bal++;
                    }


                }

                if (bal <= 0)
                {
                    cout << "    вы набрали 0 балов( " << endl;
                }
                else if (bal >= 2 && bal < 5) {
                    cout << "    вы набрали " << bal << " бала " << endl;
                }
                else if (bal == 1) {
                    cout << "    вы набрали " << bal << " бал " << endl;
                }
                else if (bal >= 5) {
                    cout << "    вы набрали " << bal << " балов " << endl;
                }
            }
            cout << "    желаете продолжить?" << endl;
            cout << "    любое число - продолжить  " << endl;
            cout << "    0 - завершить  ";

            cin >> d;

            system("cls");

            if (d != 0) {

                cout << "........Уровень 2........" << endl; {

                    for (int i = 0; i < 7; i++) {

                        srand(time(0));
                        int a = rand() % 10;
                        int b = rand() % 10;
                        int AB = a * b;

                        cout << "    " << a << " * " << b << " = ";
                        cin >> c;


                        if (a * b != c) {

                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                            cout << "    не правильно, правильный ответ: " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                            cout << "         " << a << " * " << b << " = " << AB << endl;

                        }

                        else if (a * b == c) {
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                            cout << "    правильно " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                            bal1++;
                        }


                    }

                    if (bal1 <= 0)
                    {
                        cout << "   вы набрали 0 балов( " << endl;
                    }
                    else if (bal1 >= 2 && bal < 5) {
                        cout << "   вы набрали " << bal1 << " бала " << endl;
                    }
                    else if (bal1 == 1) {
                        cout << "   вы набрали " << bal1 << " бал " << endl;
                    }
                    else if (bal1 >= 5) {
                        cout << "   вы набрали " << bal1 << " балов " << endl;
                    }
                }

            }
            else {
                if (bal <= 0)
                {
                    cout << "    за 1 уровень вы набрали 0 балов( " << endl;
                }
                else if (bal >= 2 && bal < 5) {
                    cout << "    за 1 уровень вы набрали " << bal << " бала " << endl;
                }
                else if (bal == 1) {
                    cout << "    за 1 уровень вы набрали " << bal << " бал " << endl;
                }
                else if (bal >= 5) {
                    cout << "    за 1 уровень вы набрали " << bal << " балов " << endl;
                }
                break;
            }

            cout << "    желаете продолжить?" << endl;
            cout << "    любое число - продолжить  " << endl;
            cout << "    0 - завершить  ";

            cin >> d;

            system("cls");

            if (d != 0) {

                cout << "........Уровень 3........" << endl; {
                    for (int i = 0; i < 10; i++) {
                        srand(time(0));
                        int a = rand() % 10;
                        int b = rand() % 10;
                        int AB = a * b;

                        cout << "    " << a << " * " << b << " = ";
                        cin >> c;


                        if (a * b != c) {

                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                            cout << "    не правильно, правильный ответ: " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                            cout << "         " << a << " * " << b << " = " << AB << endl;

                        }

                        else if (a * b == c) {
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                            cout << "    правильно " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                            bal2++;
                        }


                    }

                    if (bal2 <= 0)
                    {
                        cout << "вы набрали 0 балов( " << endl;
                    }
                    else if (bal2 >= 2 && bal2 < 5) {
                        cout << "вы набрали " << bal2 << " бала " << endl;
                    }
                    else if (bal2 == 1) {
                        cout << "вы набрали " << bal2 << " бал " << endl;
                    }
                    else if (bal2 >= 5) {
                        cout << "вы набрали " << bal2 << " балов " << endl;
                    }

                }
                system("cls");
            }

            else {
                if (bal <= 0)
                {
                    cout << "    за 1 уровень вы набрали 0 балов( " << endl;
                }
                else if (bal >= 2 && bal < 5) {
                    cout << "    за 1 уровень вы набрали " << bal << " бала " << endl;
                }
                else if (bal == 1) {
                    cout << "    за 1 уровень вы набрали " << bal << " бал " << endl;
                }
                else if (bal >= 5) {
                    cout << "    за 1 уровень вы набрали " << bal << " балов " << endl;
                }

                if (bal1 <= 0)
                {
                    cout << "    за 2 уровень вы набрали 0 балов( " << endl;
                }
                else if (bal1 >= 2 && bal1 < 5) {
                    cout << "    за 2 уровень вы набрали " << bal1 << " бала " << endl;
                }
                else if (bal1 == 1) {
                    cout << "    за 2 уровень вы набрали " << bal1 << " бал " << endl;
                }
                else if (bal1 >= 5) {
                    cout << "    за 2 уровень вы набрали " << bal1 << " балов " << endl;
                }
                break;
            }
            //бал
            {
                if (bal <= 0)
                {
                    cout << "    за 1 уровень вы набрали 0 балов( " << endl;
                }
                else if (bal >= 2 && bal < 5) {
                    cout << "    за 1 уровень вы набрали " << bal << " бала " << endl;
                }
                else if (bal == 1) {
                    cout << "    за 1 уровень вы набрали " << bal << " бал " << endl;
                }
                else if (bal >= 5) {
                    cout << "    за 1 уровень вы набрали " << bal << " балов " << endl;
                }
                ///////////////////////////////////////////////////////////////////
                if (bal1 <= 0)
                {
                    cout << "    за 2 уровень вы набрали 0 балов( " << endl;
                }
                else if (bal1 >= 2 && bal1 < 5) {
                    cout << "    за 2 уровень вы набрали " << bal1 << " бала " << endl;
                }
                else if (bal1 == 1) {
                    cout << "    за 2 уровень вы набрали " << bal1 << " бал " << endl;
                }
                else if (bal1 >= 5) {
                    cout << "    за 2 уровень вы набрали " << bal1 << " балов " << endl;
                }
                ///////////////////////////////////////////////////////////////////
                if (bal2 <= 0)
                {
                    cout << "    за 3 уровень вы набрали 0 балов( " << endl;
                }
                else if (bal1 >= 2 && bal2 < 5) {
                    cout << "    за 3 уровень вы набрали " << bal2 << " бала " << endl;
                }
                else if (bal2 == 1) {
                    cout << "    за 3 уровень вы набрали " << bal2 << " бал " << endl;
                }
                else if (bal2 >= 5) {
                    cout << "    за 3 уровень вы набрали " << bal2 << " балов " << endl;
                }
            }



        }break;
        case '2':
        {
            int a;
           
            int bal = 0;
            do
            {

                cout << "" << endl;

                for (int i = 0; i < 5; i++) {

                    srand(time(0));
                    int x = rand() % 1000 + (-1000);
                    int y = rand() % 1000 + (-1000);
                    int AB = x + y;

                    cout << "    " << x << " + " << y << " = ";
                    cin >> a;
                    if (x + y != a) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "    Не правильно, правильный ответ: " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "         " << x << " + " << y << " = " << AB << endl;

                    }

                    else if (x + y == a) {
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Правильно!! " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                        bal++;
                    }
                } 
            } while (true);

        }break;

        case '3':
        {
            int a;
            int bal = 0;
            do
            {

                cout << " " << endl;

                for (int i = 0; i < 5; i++) {

                    srand(time(0));
                    int x = rand() % 1000 + (-1000);
                    int y = rand() % 1000 + (-1000);
                    int AB = x - y;

                    cout << "    " << x << " - " << y << " = ";
                    cin >> a;
                    if (x - y != a) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "    Не правильно, правильный ответ: " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "         " << x << " - " << y << " = " << AB << endl;

                    }

                    else if (x - y == a) {
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Правильно!! " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                        bal++;
                    }
                }
            } while (true);

        }break;

        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}
