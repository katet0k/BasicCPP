#include <iostream>
#include <Windows.h>
#include <conio.h>


using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    char switch_on;

    setlocale(LC_ALL, "ru");
    do
    {
        int i = 0;
        int temp = 0;
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        int color;



        cout << endl;
        cout << "#===================MENU===================#" << endl;
        cout << " |    1 - проверяет входит ли введеное    |" << endl;
        cout << " |      число в введеный диапазон         |" << endl;
        cout << " |    2 - имитация кассового аппарата     |" << endl;
        cout << " |    3 - проверяет вас на знание         |" << endl;
        cout << " |     таблицы умножения                  |" << endl;
        cout << " |    4 - выводит роб из звездочек        |" << endl;
        cout << "#==========================================#" << endl;
        cout << " |    0 - Exit                            |" << endl;
        cout << "#==========================================#" << endl;
        switch_on = _getch();

        system("cls");

        switch (switch_on)

        {

        case '0':
        {
            cout << "   ну пока " << endl;

        }break;


        case '1':
        {
            int a, b, c;

            cout << "    ведите границу диапазона ";
            cin >> a;
            cout << "    ведите границу диапазона ";
            cin >> b;

            cout << "    введите число ";
            cin >> c;

            do
            {
                if (a > b)
                {
                    int temp = a;
                    a = b;
                    b = temp;
                }


                for (int i = a; i <= b; i++)
                {

                    if (c >= a && c <= b) {

                        cout << "    число входит в диапазон " << endl;
                        break;
                    }

                    for (c < a; c > b || c < b; ) {


                        cout << "    число не входит в диапазон, попробуйте снова  " << endl;
                        cout << "    введите число ";
                        cin >> c;

                        if (c >= a && c <= b) {

                            break;
                        }


                    }

                }

            } while (c < a && c > b);
            break;


        }break;

        case '2':
        {

            cout << endl;
            cout << "   #===========================================#" << endl;
            cout << "    | 1 |    гирлянда            |   100 грн  | " << endl;
            cout << "    | 2 |    новогодний шар      |   160 грн  | " << endl;
            cout << "    | 3 |    искусственная ёлка  |   1000 грн | " << endl;
            cout << "    | 4 |    новогдие носки      |   80 грн   | " << endl;
            cout << "    | 5 |    новогодняя чашка    |   200 грн  | " << endl;
            cout << "   #===========================================#" << endl;
            cout << "    | 0 |    вся сумма покупки                | " << endl;
            cout << "   #===========================================#" << endl;
            cout << endl;

            double numbr;
            int dd;
            int skid;

            cout << "   #================#" << endl;
            cout << "    | 1 |    10%   | " << endl;
            cout << "    | 2 |    20%   | " << endl;
            cout << "    | 3 |    30%   | " << endl;
            cout << "   #================#" << endl;

            cout << "    выберите скидку ";
            cin >> skid;

            for (int i = 0; i > skid || i < skid; i++) {

                if (skid > 5 || skid < 0) {

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                    cout << "     такой скидки нету" << endl;

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                    cout << "    выберите скидку ";
                    cin >> skid;

                }

            }

            float a = 0;
            float g = 0, g1 = 0;


            for (int i = 0;; i++) {

                cout << "   выберите товар ";
                cin >> numbr;

                if (numbr == 0) {

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                    cout << "   вся сумма покупки = " << g << endl;

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                    g = 0;
                    cout << "   нажмите любую цыфру или 0 для завершения робочего дня ";
                    cin >> dd;
                    if (dd == 0)
                    {
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    вся выручка за день = " << g1 << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        break;
                    }
                    else {

                        cout << "   выберите скидку";
                        cin >> skid;

                        for (int i = 0; i > skid || i < skid; i++) {

                            if (skid > 5 || skid < 0) {

                                SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                                cout << "    такой скидки нету" << endl;

                                SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                                cout << "    выберите скидку ";
                                cin >> skid;

                            }
                        }
                        cout << "   выберите товар ";
                        cin >> numbr;
                    }

                }

                for (int i = 0; i > numbr || i < numbr; i++) {

                    if (numbr > 5) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "   такого товара нету" << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "   выберите товар ";
                        cin >> numbr;

                    }

                    if (numbr < 0) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "   такого товара нету" << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "   выберите товар ";
                        cin >> numbr;
                    }



                }

                cout << "   выберите количество товара ";
                cin >> a;

                for (int i = 0; i > a || i < a; i++) {

                    if (a > 100) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "   такого количества товара нету" << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "   выберите количество товара меньше ";
                        cin >> a;

                    }

                    if (a < 0) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "   такого количества товара нету" << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "   выберите количество товара больше ";
                        cin >> a;

                    }


                }

                if (numbr == 1)
                {
                    if (skid == 1) {
                        float Q = (100 * a) - (((100 * a) / 10) * 1);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    гирлянда " << Q << " грн " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += Q;
                        g1 += Q;
                    }
                    if (skid == 2) {
                        float Q = (100 * a) - (((100 * a) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    гирлянда " << Q << " грн " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += Q;
                        g1 += Q;
                    }
                    if (skid == 3) {
                        float Q = (100 * a) - (((100 * a) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    гирлянда " << Q << " грн " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += Q;
                        g1 += Q;
                    }
                }

                if (numbr == 2)
                {
                    if (skid == 1) {

                        float W = (160 * a) - (((160 * a) / 10) * 1);
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    новогодний шар " << W << " грн " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += W;

                        g1 += W;
                    }
                    if (skid == 2) {

                        float W = (160 * a) - (((160 * a) / 10) * 2);
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    новогодний шар " << W << " грн " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += W;

                        g1 += W;
                    }
                    if (skid == 3) {

                        float W = (160 * a) - (((160 * a) / 10) * 3);
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "   новогодний шар " << W << " грн " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += W;

                        g1 += W;

                    }
                }


                if (numbr == 3)
                {
                    if (skid == 1) {

                        float E = (1000 * a) - (((1000 * a) / 10) * 1);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    искусственная ёлка " << E << " грн " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += E;

                        g1 += E;
                    }
                    if (skid == 2) {

                        float E = (1000 * a) - (((1000 * a) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    искусственная ёлка " << E << " грн " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += E;

                        g1 += E;
                    }

                    if (skid == 3) {

                        float E = (1000 * a) - (((1000 * a) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    искусственная ёлка " << E << " грн " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += E;

                        g1 += E;
                    }


                }
                if (numbr == 4)
                {
                    if (skid == 1) {
                        float R = (80 * a) - (((80 * a) / 10) * 1);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    новогдие носки " << R << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += R;
                        g1 += R;
                    }
                    if (skid == 2) {
                        float R = (80 * a) - (((80 * a) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    новогдие носки " << R << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += R;
                        g1 += R;
                    }
                    if (skid == 3) {
                        float R = (80 * a) - (((80 * a) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    новогдие носки " << R << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += R;
                        g1 += R;
                    }
                }
                if (numbr == 5)
                {
                    if (skid == 1) {
                        float T = (200 * a) - (((200 * a) / 10) * 1);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    новогодняя чашка " << T << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += T;
                        g1 += T;
                    }

                    if (skid == 2) {
                        float T = (200 * a) - (((200 * a) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "     новогодняя чашка " << T << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += T;
                        g1 += T;
                    }

                    if (skid == 3) {
                        float T = (200 * a) - (((200 * a) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    новогодняя чашка " << T << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += T;
                        g1 += T;
                    }
                }




            }




        }break;


        case '3':
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


        case '4':
        {
            int i, j, N = 9;
            int center = N / 2;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (i <= center)
                    {
                        if (j >= center - i && j <= center + i)
                            cout << "* ";
                        else
                            cout << "  ";
                    }
                    else
                    {
                        if (j >= center + i - N + 1 && j <= center - i + N - 1)
                            cout << "* ";
                        else
                            cout << "  ";
                    }
                }
                cout << endl;
            }
        }break;

        }


    } while (switch_on != '0');

    return 0;
}
