#include <iostream>
#include <Windows.h>
#include <ctime>
#include <conio.h>
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    char switch_on;

    do {
        system("cls");
        /* 
           
        
        
        */
        cout << " #====================MENU====================#" << endl;
        cout << "  |   1 - Выводит на экран прямоугольник с   |" << endl;
        cout << "  |     заданными сторонами и заданным       |" << endl;
        cout << "  |     символом.                            |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   2 - Выводит на экран пустой            |" << endl;
        cout << "  |     прямоугольник с заданными размерами  |" << endl;
        cout << "  |     заданным символом заданного цвета.   |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   3 -вычисляет прибыль компании за       |" << endl;
        cout << "  |     6 месяцев.                           |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   4 - выводит одномерный массив в        |" << endl;
        cout << "  |     обратном порядке.                    |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   5 - вычисляет периметр пятиугольника.  |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   6 - определяет месяц, в котором        |" << endl;
        cout << "  |     прибыль была максимальной, и месяц,  |" << endl;
        cout << "  |     в котором прибыль была минимальной.  |" << endl;
        cout << "  |                                          |" << endl;
        cout << " #============================================#" << endl;
        cout << "  |   0 - Exit                               |" << endl;
        cout << " #============================================#" << endl;
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
            cout << " введите число ";
            cin >> a;
            cout << " введите число ";
            cin >> b;
            cout << " введите знак ";
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
            int color;
            char z;
            cout << " введите число ";
            cin >> a;
            cout << " введите число ";
            cin >> b;
            cout << " введите знак ";
            cin >> z;
            cout << " введите число цвет ";
            cin >> color;

            for (size_t i = 0; i < b; i++)
            {
                SetConsoleTextAttribute(handle, WORD(0 << 4 | color));
                if (i == 0 || i == b - 1)
                {
                    for (size_t j = 0; j < a; j++)
                    {
                        if (i == 0)
                        {
                            if (j == 0) {
                                cout << z << " ";
                            }
                            else if (j == b - 1) {
                                cout << z << " ";
                            }
                            else {
                                cout << z << " ";
                            }
                        }
                        if (i == b - 1)
                        {
                            if (j == 0) {
                                cout << z << " ";
                            }
                            else if (j == b - 1) {
                                cout << z << " ";
                            }
                            else {
                                cout << z << " ";
                            }
                        }
                    }
                }
                else {
                    for (size_t j = 0; j < b; j++)
                    {
                        if (j == 0 || j == a - 1)
                        {
                            cout << z << " ";
                        }
                        else {
                            cout << "  ";
                        }
                    }
                }
                cout << endl;
            }

            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

            system("pause");

        }break;

        case '3':
        {
            const int a = 7;
            int b;


            int arr_2[a];
            int sum;
            sum = 0;
            for (size_t i = 1; i < a; i++)
            {
                if (i == 1) {
                    cout << "введите прибыль за первый месяц  ";
                }
                if (i == 2) {
                    cout << "введите прибыль за второй месяц  ";
                }
                if (i == 3) {
                    cout << "введите прибыль за третий месяц  ";
                }
                if (i == 4) {
                    cout << "введите прибыль за четвертый месяц  ";
                }
                if (i == 5) {
                    cout << "введите прибыль за пятый месяц  ";
                }
                if (i == 6) {
                    cout << "введите прибыль за шестой месяц  ";
                }
                cin >> b;
                sum += b;

            }
            cout << " прибыль фирмы = " << sum << endl;

            system("pause");

        } break;

        case '4':
        {
            const int a = 11;
            int arrA[a];

            int b = a;
            for (int i = 0; i < a; i++)
            {
                b--;
                arrA[i] = b;
                cout << arrA[i] << endl;
            }

            system("pause");

        }break;

        case '5':
        {
            const int a = 5;
            int arrA[a];
            int sum = 0;
            int b;

            for (size_t i = 0; i < a; i++)
            {
                cout << " введите длину стороны пятиугольника ";
                cin >> b;
                arrA[i] = b;
                sum += b;
            }
            cout << " сумма всех сторон = " << sum << endl;
            system("pause");

        }break;

        case '6':
        {
            const uint32_t a = 12;
            int b;
            long long arrA[a];

            for (int i = 0; i < a; i++)
            {
                if (i == 0) {
                    cout << " введите прибыль за январь месяц  ";
                }
                if (i == 1) {
                    cout << " введите прибыль за февраль месяц  ";
                }
                if (i == 2) {
                    cout << " введите прибыль за март месяц  ";
                }
                if (i == 3) {
                    cout << " введите прибыль за апрель месяц  ";
                }
                if (i == 4) {
                    cout << " введите прибыль за май месяц  ";
                }
                if (i == 5) {
                    cout << " введите прибыль за июнь месяц  ";
                }
                if (i == 6) {
                    cout << " введите прибыль за июль месяц  ";
                }
                if (i == 7) {
                    cout << " введите прибыль за август месяц  ";
                }
                if (i == 8) {
                    cout << " введите прибыль за сентябрь месяц  ";
                }
                if (i == 9) {
                    cout << " введите прибыль за октябрь месяц  ";
                }
                if (i == 10) {
                    cout << " введите прибыль за ноябрь месяц  ";
                }
                if (i == 11) {
                    cout << " введите прибыль за декабрь месяц  ";
                }

                cin >> b;
                arrA[i] = b;
            }

            cout << endl;
            long long max, min;
            max = min = arrA[0];

            for (size_t i = 0; i < a; i++)
            {
                if (min > arrA[i])
                {
                    min = arrA[i];
                }
                if (max < arrA[i])
                {
                    max = arrA[i];
                }
            }

            cout << " самый убыточный месяц " << min << endl;
            cout << " самый прибыльный месяц " << max << endl;
            return 0;

            system("pause");

        } break;


        default:
        {
            break;
        }break;


        }


    } while (switch_on != '0');
    return 0;
}
