#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");

    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
   

    do
    {
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        /*
        
        
        
        */
        system("pause");
        system("cls");
        cout << "    #==================MENU==================#" << endl;
        cout << "     |   1 - ������� �� ����� �����         |" << endl;
        cout << "     |      �������� ��������.              |" << endl;
        cout << "     |                                      |" << endl;
        cout << "     |   2 - ���� �������.                 |" << endl;
        cout << "     |                                      |" << endl;
        cout << "     |   3 - ���������� ����������� �       |" << endl;
        cout << "     |      ������������ ��������.          |" << endl;
        cout << "     |                                      |" << endl;
        cout << "     |   4 - ���������� �����, � �������    |" << endl;
        cout << "     |    ������� ���� ������������,        |" << endl;
        cout << "     |    � �����, � ������� �������        |" << endl;
        cout << "     |    ���� �����������.                 |" << endl;
        cout << "     |                                      |" << endl;
        cout << "     |   5 - ��� ��� ���������)             |" << endl;
        cout << "     |                                      |" << endl;
        cout << "    #========================================#" << endl;

        char switch_on;

        switch_on = _getch();
        switch (switch_on)
        {
        case '1':
        {
            int line, a;
            char s, speed;


            cout << "  ������� ������ : ";
            cin >> s;
            cout << "  ������� ����� ����� : ";
            cin >> line;
            cout << "\n 1 - �������������� \n 2 - ������������ ����� \n\n �������� ������� : ";
            cin >> a;
            for (int i = 0; i < a; i++)
            {
                if (a > 2 || a < 1)
                {
                    cout << " ����� ����� ���� \n ������� ���� �� ����������� ";
                    cin >> a;
                }
            }
            cout << "\n q - ������� \n w - ���������� \n e - ��������� \n\n �������� ������� : ";
            cin >> speed;

            switch (a)
            {
            case 1:
            {
                for (int i = 0; i < line; i++)
                {
                    if (speed == 'q')
                    {
                        Sleep(10);
                        cout << s;
                    }

                    else if (speed == 'w')
                    {
                        Sleep(200);
                        cout << s;
                    }

                    else if (speed == 'e')
                    {
                        Sleep(800);
                        cout << s;
                    }

                    for (int i = 0; i < line; i++) {

                        if (speed != 'q' && speed != 'w' && speed != 'e') {

                            cout << "  ����� �������� ���� \n ������� ���� �� ����������� ";
                            cin >> speed;

                        }

                    }
                }
                cout << endl;
               
            }break;

            case 2:
            {
                for (int j = 0; j < line; j++)
                {
                    if (speed == 'q')
                    {
                        Sleep(10);
                        cout << "  " << s;
                    }

                    else if (speed == 'w')
                    {
                        Sleep(200);
                        cout << "  " << s;
                    }

                    else if (speed == 'e')
                    {
                        Sleep(800);
                        cout << "  " << s;
                    }
                    for (int j = 0; j < line; j++) {

                        if (speed != 'q' && speed != 'w' && speed != 'e') {

                            cout << "  ����� �������� ���� \n ������� ���� �� ����������� ";
                            cin >> speed;

                        }

                    } 
                    
                    cout << endl;
                }

            }break;

            }
            cout << endl;



        }break;

        case '2':
        {

            int a = 0, b = 0;



            for (int i = 0; i < 3; i++)
            {


                int q = rand() % 6;
                srand(time(0));

                int w = rand() % 6;
                srand(time(0));

                int d;
                cout << "������� ����� ����� ";
                cin >> d;

                if (q == 0) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 1) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 2) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 3) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *      |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|      *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 4) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 5) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (q == 6) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }

                if (w == 0) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 1) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 2) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 3) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *      |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|      *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 4) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 5) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|    *    |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }
                if (w == 6) {
                    cout << "===========" << endl;
                    cout << "|         |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|  *   *  |" << endl;
                    cout << "|         |" << endl;
                    cout << "===========" << endl;
                }

                if (q > w)
                {
                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 6));
                    cout << "  ������� � " << endl;
                    a += 1;

                }

                else if (q < w)
                {
                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 6));
                    cout << " �������� ��" << endl;
                    b += 1;
                }
                else if (q = w) {

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 6));

                    cout << "  ����� " << endl;
                    a += 1;
                    b += 1;
                }
                SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

            }

            if (a > b) {

                SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));

                cout << "  ������ �� ���� " << endl;
                break;
            }

            if (a < b) {
                SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                cout << "  ������ �� ���� " << endl;
                break;
            }
            if (a = b) {
                SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                cout << "  �������� ������)) " << endl;
                break;
            }
            system("pause");
            system("cls");

        }break;

        case '3':
        {

            srand(time(0));
            const uint32_t size = 25;
            long long arr[size];

            for (int i = 0; i < size; i++)
            {
                arr[i] = -5 + rand() % 50;
            }
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << "  ";
            }
            cout << endl;

            long long max, min;
            max = min = arr[0];

            for (size_t i = 0; i < size; i++)
            {
                if (min > arr[i])
                {
                    min = arr[i];
                }
                if (max < arr[i])
                {
                    max = arr[i];
                }
            }
            cout << "Min = " << min << endl;
            cout << "Max = " << max << endl;

        }break;

        case '4':
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

            int r1, r2;

            cout << " ��������" << endl;
            cin >> r1;
            cin >> r2;
            for (int i = 0; i < r1; i++)
            {
                if (r1 < 1) {

                    cout << " ���� ������ ������ \n ������� ����� > 0 � < 12" << endl;
                    cin >> r1;
                    cin >> r2;
                }
                if (r1 > 12) {

                    cout << " ���� ������ ������ \n ������� ����� > 0 � < 12" << endl;
                    cin >> r1;
                    cin >> r2;
                }
            }
            for (int i = 0; i < r2; i++) {

                if (r2 > 12)
                {
                    cout << " ���� ������ ������ \n ������� ����� > 0 � < 12" << endl;
                    cin >> r1;
                    cin >> r2;
                }
                if (r2 < 1)
                {
                    cout << " ���� ������ ������ \n ������� ����� > 0 � < 12" << endl;
                    cin >> r1;
                    cin >> r2;
                }
            }
            if (r1 > r2)
            {
                int temp = r1;
                r1 = r2;
                r2 = temp;
            }

            int max = arrA[r1 - 1];
            int min = arrA[r1 - 1];

            for (int j = r1 - 1; j <= r2 - 1; j++)

            {
                if (min > arrA[j])
                {
                    min = arrA[j];
                }

                if (max < arrA[j]) {

                    max = arrA[j];
                }

            }

            cout << "Min: " << min << endl;
            cout << "Max: " << max << endl;



        }break;

        case '5': {
            const uint32_t a = 10;
            long long arr[a];
            for (int i = 0; i < a; i++) {

                arr[i] = rand() % 10 - 5;
            }
            for (int i = 0; i < a; i++) {

                cout << arr[i] << " ";

            }
            float sumneg = 0;

            for (int i = 0; i < a; i++) {

                if (arr[i] < 0) {

                    sumneg += arr[i];
                }
            }
            cout << " \n����� �������� ��������� = " << sumneg << endl;

            int max = 0, min = 0, p = 1;

            for (int i = 1; i < a; i++) {

                if (arr[i] < arr[min])

                    min = i;

                if (arr[i] > arr[max])

                    max = i;

            }
            for (int i = max + 1; i < min; i++) {

                p *= arr[i];


            }cout << " \n����� ��������� ����� min � max = " << p << endl;
            int sump = arr[1];

            for (int i = 1; i < a; i++) {

                if (i % 2 != 0) {

                    sump *= arr[i];
                }
            }

            cout << " \n������������ ��������� � ������� �������� = " << sump << endl;
            int sum = 0, acc = 0;

            bool started = false;

            for (int i = 0; i < a; i++) {

                if (arr[i] < 0) {

                    if (!started) {

                        acc = 0;

                        started = true;

                    }

                    else {

                        sum += acc;

                        acc = arr[i];

                    }

                }

                else

                    acc += arr[i];

            }
            cout << " \n����� ���������, ������������� ����� ������ � ��������� �������������� ���������� = " << sum << endl;

        }break;

        default:

            break;
        }

    } while (true);
    return 0;
}