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
        cout << "  |   1 - ������� �� ����� ������������� �   |" << endl;
        cout << "  |     ��������� ��������� � ��������       |" << endl;
        cout << "  |     ��������.                            |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   2 - ������� �� ����� ������            |" << endl;
        cout << "  |     ������������� � ��������� ���������  |" << endl;
        cout << "  |     �������� �������� ��������� �����.   |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   3 -��������� ������� �������� ��       |" << endl;
        cout << "  |     6 �������.                           |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   4 - ������� ���������� ������ �        |" << endl;
        cout << "  |     �������� �������.                    |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   5 - ��������� �������� �������������.  |" << endl;
        cout << "  |                                          |" << endl;
        cout << "  |   6 - ���������� �����, � �������        |" << endl;
        cout << "  |     ������� ���� ������������, � �����,  |" << endl;
        cout << "  |     � ������� ������� ���� �����������.  |" << endl;
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
            cout << " ������� ����� ";
            cin >> a;
            cout << " ������� ����� ";
            cin >> b;
            cout << " ������� ���� ";
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
            cout << " ������� ����� ";
            cin >> a;
            cout << " ������� ����� ";
            cin >> b;
            cout << " ������� ���� ";
            cin >> z;
            cout << " ������� ����� ���� ";
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
                    cout << "������� ������� �� ������ �����  ";
                }
                if (i == 2) {
                    cout << "������� ������� �� ������ �����  ";
                }
                if (i == 3) {
                    cout << "������� ������� �� ������ �����  ";
                }
                if (i == 4) {
                    cout << "������� ������� �� ��������� �����  ";
                }
                if (i == 5) {
                    cout << "������� ������� �� ����� �����  ";
                }
                if (i == 6) {
                    cout << "������� ������� �� ������ �����  ";
                }
                cin >> b;
                sum += b;

            }
            cout << " ������� ����� = " << sum << endl;

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
                cout << " ������� ����� ������� ������������� ";
                cin >> b;
                arrA[i] = b;
                sum += b;
            }
            cout << " ����� ���� ������ = " << sum << endl;
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
                    cout << " ������� ������� �� ������ �����  ";
                }
                if (i == 1) {
                    cout << " ������� ������� �� ������� �����  ";
                }
                if (i == 2) {
                    cout << " ������� ������� �� ���� �����  ";
                }
                if (i == 3) {
                    cout << " ������� ������� �� ������ �����  ";
                }
                if (i == 4) {
                    cout << " ������� ������� �� ��� �����  ";
                }
                if (i == 5) {
                    cout << " ������� ������� �� ���� �����  ";
                }
                if (i == 6) {
                    cout << " ������� ������� �� ���� �����  ";
                }
                if (i == 7) {
                    cout << " ������� ������� �� ������ �����  ";
                }
                if (i == 8) {
                    cout << " ������� ������� �� �������� �����  ";
                }
                if (i == 9) {
                    cout << " ������� ������� �� ������� �����  ";
                }
                if (i == 10) {
                    cout << " ������� ������� �� ������ �����  ";
                }
                if (i == 11) {
                    cout << " ������� ������� �� ������� �����  ";
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

            cout << " ����� ��������� ����� " << min << endl;
            cout << " ����� ���������� ����� " << max << endl;
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