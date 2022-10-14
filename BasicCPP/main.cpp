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
        cout << "  |   1 - ¬ыводит на экран пр€моугольник с   |" << endl;
        cout << "  |     заданными сторонами и заданным       |" << endl;
        cout << "  |     символом.                            |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   2 - ¬ыводит на экран пустой            |" << endl;
        cout << "  |     пр€моугольник с заданными размерами  |" << endl;
        cout << "  |     заданным символом заданного цвета.   |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   3 -вычисл€ет прибыль компании за       |" << endl;
        cout << "  |     6 мес€цев.                           |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   4 - выводит одномерный массив в        |" << endl;
        cout << "  |     обратном пор€дке.                    |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   5 - вычисл€ет периметр п€тиугольника.  |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   6 - определ€ет мес€ц, в котором        |" << endl;
        cout << "  |     прибыль была максимальной, и мес€ц,  |" << endl;
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
                    cout << "введите прибыль за первый мес€ц  ";
                }
                if (i == 2) {
                    cout << "введите прибыль за второй мес€ц  ";
                }
                if (i == 3) {
                    cout << "введите прибыль за третий мес€ц  ";
                }
                if (i == 4) {
                    cout << "введите прибыль за четвертый мес€ц  ";
                }
                if (i == 5) {
                    cout << "введите прибыль за п€тый мес€ц  ";
                }
                if (i == 6) {
                    cout << "введите прибыль за шестой мес€ц  ";
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
                cout << " введите длину стороны п€тиугольника ";
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
                    cout << " введите прибыль за €нварь мес€ц  ";
                }
                if (i == 1) {
                    cout << " введите прибыль за февраль мес€ц  ";
                }
                if (i == 2) {
                    cout << " введите прибыль за март мес€ц  ";
                }
                if (i == 3) {
                    cout << " введите прибыль за апрель мес€ц  ";
                }
                if (i == 4) {
                    cout << " введите прибыль за май мес€ц  ";
                }
                if (i == 5) {
                    cout << " введите прибыль за июнь мес€ц  ";
                }
                if (i == 6) {
                    cout << " введите прибыль за июль мес€ц  ";
                }
                if (i == 7) {
                    cout << " введите прибыль за август мес€ц  ";
                }
                if (i == 8) {
                    cout << " введите прибыль за сент€брь мес€ц  ";
                }
                if (i == 9) {
                    cout << " введите прибыль за окт€брь мес€ц  ";
                }
                if (i == 10) {
                    cout << " введите прибыль за но€брь мес€ц  ";
                }
                if (i == 11) {
                    cout << " введите прибыль за декабрь мес€ц  ";
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

            cout << " самый убыточный мес€ц " << min << endl;
            cout << " самый прибыльный мес€ц " << max << endl;
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