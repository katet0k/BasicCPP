#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char switch_on;
    int start, end;

    do {
        system("cls");
        cout << "#================MENU================#" << endl;
        cout << " |  1 - Выводит на экран фигуры,    |" << endl;
        cout << " |    заполненные звездочками.      |" << endl;
        cout << " |                                  |" << endl;
        cout << " |  2 - Определяет количество       |"<< endl;
        cout << " |    цифр в этом числе, считает    |" << endl;
        cout << " |    их сумму и среднее            |" << endl;
        cout << " |    арифметическое.Определяет     | " << endl;
        cout << " |    количество нулей в том числе  |" << endl;
        cout << " |                                  |" << endl;
        cout << " |  3 - выводит на екран шахматную  |" << endl;
        cout << " |    доску                         |" << endl;
        cout << " |                                  |" << endl;
        cout << "#====================================#" << endl;
        cout << " |  0 - Exit                        |" << endl;
        cout << "#>===================================#" << endl;

        switch_on = _getch();
        system("cls");
        switch (switch_on)

        {
        case '0':
        {

        }break;

        case '1': {


            do {

                int a = 0, b = 0, c = 0, d = 0, e = 0, f = 11;

                int number;
                cout << " введите число ";
                cin >> number;
                if (number == 0)
                {
                    cout << "" << endl;
                    break;
                }

                switch (number)
                {
                    
                 

                case 1: 
                {

                    for (int i = 10; i >= 0; i--) {
                        for (int l = 0; l <= b * 2; l++) {
                            cout << " ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        b++;
                    }
                } break;

                case 2:
                {

                    for (int i = 1; i <= 10; i++) {
                        for (int j = 1; j < i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }

                }break;

                case 3:
                {
                    for (int i = 10; i >= 0; i--) {
                        for (int k = 0; k <= b; k++) {
                            cout << " ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        b++;
                    }
                }break;

                case 4:
                {
                    for (int i = 10; i >= 0; i--) {

                        for (int j = 0; j <= i; j++) {
                            cout << " ";
                        }
                        for (int k = 0; k <= a; k++) {
                            cout << "* ";
                        }
                        cout << endl;
                        a++;
                    }
                }break;

                case 5:
                {
                    for (int i = 10; i >= 0; i--) {
                        for (int k = 0; k <= b; k++) {
                            cout << " ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << " *";
                        }
                        for (int k = 0; k <= b; k++) {
                            cout << " ";
                        }
                        cout << endl;
                        b++;
                    }

                    for (int i = 10; i >= 0; i--) {

                        for (int j = 0; j <= i; j++) {
                            cout << " ";
                        }
                        for (int k = 0; k <= e; k++) {
                            cout << " *";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << " ";
                        }
                        cout << endl;
                        e++;
                    }
                    
                }break;

                case 6:
                {
                    for (int i = 10; i >= 0; i--) {
                        for (int k = 0; k <= b; k++) {
                            cout << " *";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << "    ";
                        }
                        for (int k = 0; k <= b; k++) {
                            cout << " *";
                        }
                        cout << endl;
                        b++;
                    }

                    for (int i = 10; i >= 0; i--) {

                        for (int j = 0; j <= i; j++) {
                            cout << " *";
                        }
                        for (int k = 0; k <= e; k++) {
                            cout << "    ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << " *";
                        }
                        cout << endl;
                        e++;
                    }
                   
                }break;

                case 7:
                {
                    for (int i = 1; i <= 10; i++) {
                        for (int j = 1; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    for (int i = 10; i >= 1; i--) {
                        for (int j = 1; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                }break;

                case 8:
                {
                    for (int i = 1; i <= 11; i++) {
                        for (int k = 0; k <= f * 2; k++) {
                            cout << " ";
                        }
                        for (int j = 1; j < i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        f--;
                    }
                    for (int i = 10; i >= 0; i--) {
                        for (int l = 0; l <= b * 2; l++) {
                            cout << " ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        b++;
                    }
                }break;

                case 9:
                {
                    for (int i = 10; i >= 1; i--) {
                        for (int j = 1; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                }break;

                case 10: 
                {
                    for (int i = 1; i <= 10; i++) {
                        for (int k = 0; k <= f * 2; k++) {
                            cout << " ";
                        }
                        for (int j = 1; j < i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        f--;
                    }
                }break;


                default:
                {
                    if (number < 0 || number > 10) {
                        cout << "ноу ноу ноу мистер фиш" << endl;
                    }

                }break;
                }
            } while (true);


        }break;

        case '2': {

            int a, cp, n = 0, sum = 0, c = 0;

            cout << " введите число ";
            cin >> a;
            cp = a;

            while (a)
            {
                if (a % 10 == 0)
                    c++;
                a /= 10;
            }
            cout << " количество нулей = " << c << endl;

            for (n = 0; cp > 0; n++)
            {
                sum += cp % 10;
                cp /= 10;
            }
            cout << " количество цифр = " << n << endl;
            cout << " сумма = " << sum << endl; 
            cout << " среднее арифметическое = " << (double)sum / n << endl;



        }break;

        case '3':
        {
            int h, a = 3, w;

            cout << " введите высоту шахматной доски";
            cin >> h;
            cout << " введите ширину шахматной доски";
            cin >> w;

            int i, jj, j, ii;
            for (i = 0; i < h; i++)
            {
                for (jj = 0; jj < a; jj++)
                {
                    for (j = 0; j < w; j++)
                    {
                        for (ii = 0; ii < a; ii++)
                        {
                            (~(i + j) & 1) ? (cout << '-') : (cout << 'x');
                        }
                    }
                    cout << endl;
                }
            }
            cout << endl;
        }break;


        }
    }
    while (switch_on == '0');

    return 0;
}
    
    
