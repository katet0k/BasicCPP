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
        cout << " |    1 - ��������� ������ �� ��������    |" << endl;
        cout << " |      ����� � �������� ��������         |" << endl;
        cout << " |    2 - �������� ��������� ��������     |" << endl;
        cout << " |    3 - ��������� ��� �� ������         |" << endl;
        cout << " |     ������� ���������                  |" << endl;
        cout << " |    4 - ������� ��� �� ���������        |" << endl;
        cout << "#==========================================#" << endl;
        cout << " |    0 - Exit                            |" << endl;
        cout << "#==========================================#" << endl;
        switch_on = _getch();

        system("cls");

        switch (switch_on)

        {

        case '0':
        {
            cout << "   �� ���� " << endl;

        }break;


        case '1':
        {
            int a, b, c;

            cout << "    ������ ������� ��������� ";
            cin >> a;
            cout << "    ������ ������� ��������� ";
            cin >> b;

            cout << "    ������� ����� ";
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

                        cout << "    ����� ������ � �������� " << endl;
                        break;
                    }

                    for (c < a; c > b || c < b; ) {


                        cout << "    ����� �� ������ � ��������, ���������� �����  " << endl;
                        cout << "    ������� ����� ";
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
            cout << "    | 1 |    ��������            |   100 ���  | " << endl;
            cout << "    | 2 |    ���������� ���      |   160 ���  | " << endl;
            cout << "    | 3 |    ������������� ����  |   1000 ��� | " << endl;
            cout << "    | 4 |    �������� �����      |   80 ���   | " << endl;
            cout << "    | 5 |    ���������� �����    |   200 ���  | " << endl;
            cout << "   #===========================================#" << endl;
            cout << "    | 0 |    ��� ����� �������                | " << endl;
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

            cout << "    �������� ������ ";
            cin >> skid;

            for (int i = 0; i > skid || i < skid; i++) {

                if (skid > 5 || skid < 0) {

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                    cout << "     ����� ������ ����" << endl;

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                    cout << "    �������� ������ ";
                    cin >> skid;

                }

            }

            float a = 0;
            float g = 0, g1 = 0;


            for (int i = 0;; i++) {

                cout << "   �������� ����� ";
                cin >> numbr;

                if (numbr == 0) {

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                    cout << "   ��� ����� ������� = " << g << endl;

                    SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                    g = 0;
                    cout << "   ������� ����� ����� ��� 0 ��� ���������� �������� ��� ";
                    cin >> dd;
                    if (dd == 0)
                    {
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    ��� ������� �� ���� = " << g1 << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        break;
                    }
                    else {

                        cout << "   �������� ������";
                        cin >> skid;

                        for (int i = 0; i > skid || i < skid; i++) {

                            if (skid > 5 || skid < 0) {

                                SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                                cout << "    ����� ������ ����" << endl;

                                SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                                cout << "    �������� ������ ";
                                cin >> skid;

                            }
                        }
                        cout << "   �������� ����� ";
                        cin >> numbr;
                    }

                }

                for (int i = 0; i > numbr || i < numbr; i++) {

                    if (numbr > 5) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "   ������ ������ ����" << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "   �������� ����� ";
                        cin >> numbr;

                    }

                    if (numbr < 0) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "   ������ ������ ����" << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "   �������� ����� ";
                        cin >> numbr;
                    }



                }

                cout << "   �������� ���������� ������ ";
                cin >> a;

                for (int i = 0; i > a || i < a; i++) {

                    if (a > 100) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "   ������ ���������� ������ ����" << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "   �������� ���������� ������ ������ ";
                        cin >> a;

                    }

                    if (a < 0) {

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "   ������ ���������� ������ ����" << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "   �������� ���������� ������ ������ ";
                        cin >> a;

                    }


                }

                if (numbr == 1)
                {
                    if (skid == 1) {
                        float Q = (100 * a) - (((100 * a) / 10) * 1);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    �������� " << Q << " ��� " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += Q;
                        g1 += Q;
                    }
                    if (skid == 2) {
                        float Q = (100 * a) - (((100 * a) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    �������� " << Q << " ��� " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += Q;
                        g1 += Q;
                    }
                    if (skid == 3) {
                        float Q = (100 * a) - (((100 * a) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    �������� " << Q << " ��� " << endl;

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
                        cout << "    ���������� ��� " << W << " ��� " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += W;

                        g1 += W;
                    }
                    if (skid == 2) {

                        float W = (160 * a) - (((160 * a) / 10) * 2);
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    ���������� ��� " << W << " ��� " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += W;

                        g1 += W;
                    }
                    if (skid == 3) {

                        float W = (160 * a) - (((160 * a) / 10) * 3);
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "   ���������� ��� " << W << " ��� " << endl;

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
                        cout << "    ������������� ���� " << E << " ��� " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += E;

                        g1 += E;
                    }
                    if (skid == 2) {

                        float E = (1000 * a) - (((1000 * a) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    ������������� ���� " << E << " ��� " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        g += E;

                        g1 += E;
                    }

                    if (skid == 3) {

                        float E = (1000 * a) - (((1000 * a) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    ������������� ���� " << E << " ��� " << endl;

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
                        cout << "    �������� ����� " << R << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += R;
                        g1 += R;
                    }
                    if (skid == 2) {
                        float R = (80 * a) - (((80 * a) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    �������� ����� " << R << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += R;
                        g1 += R;
                    }
                    if (skid == 3) {
                        float R = (80 * a) - (((80 * a) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    �������� ����� " << R << " grn " << endl;

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
                        cout << "    ���������� ����� " << T << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += T;
                        g1 += T;
                    }

                    if (skid == 2) {
                        float T = (200 * a) - (((200 * a) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "     ���������� ����� " << T << " grn " << endl;

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));


                        g += T;
                        g1 += T;
                    }

                    if (skid == 3) {
                        float T = (200 * a) - (((200 * a) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    ���������� ����� " << T << " grn " << endl;

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


            cout << "........������� 1........" << endl; {
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
                        cout << "    �� ���������, ���������� �����: " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << "         " << a << " * " << b << " = " << AB << endl;

                    }

                    else if (a * b == c) {
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    ��������� " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                        bal++;
                    }


                }

                if (bal <= 0)
                {
                    cout << "    �� ������� 0 �����( " << endl;
                }
                else if (bal >= 2 && bal < 5) {
                    cout << "    �� ������� " << bal << " ���� " << endl;
                }
                else if (bal == 1) {
                    cout << "    �� ������� " << bal << " ��� " << endl;
                }
                else if (bal >= 5) {
                    cout << "    �� ������� " << bal << " ����� " << endl;
                }
            }
            cout << "    ������� ����������?" << endl;
            cout << "    ����� ����� - ����������  " << endl;
            cout << "    0 - ���������  ";

            cin >> d;

            system("cls");

            if (d != 0) {

                cout << "........������� 2........" << endl; {

                    for (int i = 0; i < 7; i++) {

                        srand(time(0));
                        int a = rand() % 10;
                        int b = rand() % 10;
                        int AB = a * b;

                        cout << "    " << a << " * " << b << " = ";
                        cin >> c;


                        if (a * b != c) {

                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                            cout << "    �� ���������, ���������� �����: " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                            cout << "         " << a << " * " << b << " = " << AB << endl;

                        }

                        else if (a * b == c) {
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                            cout << "    ��������� " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                            bal1++;
                        }


                    }

                    if (bal1 <= 0)
                    {
                        cout << "   �� ������� 0 �����( " << endl;
                    }
                    else if (bal1 >= 2 && bal < 5) {
                        cout << "   �� ������� " << bal1 << " ���� " << endl;
                    }
                    else if (bal1 == 1) {
                        cout << "   �� ������� " << bal1 << " ��� " << endl;
                    }
                    else if (bal1 >= 5) {
                        cout << "   �� ������� " << bal1 << " ����� " << endl;
                    }
                }

            }
            else {
                if (bal <= 0)
                {
                    cout << "    �� 1 ������� �� ������� 0 �����( " << endl;
                }
                else if (bal >= 2 && bal < 5) {
                    cout << "    �� 1 ������� �� ������� " << bal << " ���� " << endl;
                }
                else if (bal == 1) {
                    cout << "    �� 1 ������� �� ������� " << bal << " ��� " << endl;
                }
                else if (bal >= 5) {
                    cout << "    �� 1 ������� �� ������� " << bal << " ����� " << endl;
                }
                break;
            }

            cout << "    ������� ����������?" << endl;
            cout << "    ����� ����� - ����������  " << endl;
            cout << "    0 - ���������  ";

            cin >> d;

            system("cls");

            if (d != 0) {

                cout << "........������� 3........" << endl; {
                    for (int i = 0; i < 10; i++) {
                        srand(time(0));
                        int a = rand() % 10;
                        int b = rand() % 10;
                        int AB = a * b;

                        cout << "    " << a << " * " << b << " = ";
                        cin >> c;


                        if (a * b != c) {

                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                            cout << "    �� ���������, ���������� �����: " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                            cout << "         " << a << " * " << b << " = " << AB << endl;

                        }

                        else if (a * b == c) {
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                            cout << "    ��������� " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                            bal2++;
                        }


                    }

                    if (bal2 <= 0)
                    {
                        cout << "�� ������� 0 �����( " << endl;
                    }
                    else if (bal2 >= 2 && bal2 < 5) {
                        cout << "�� ������� " << bal2 << " ���� " << endl;
                    }
                    else if (bal2 == 1) {
                        cout << "�� ������� " << bal2 << " ��� " << endl;
                    }
                    else if (bal2 >= 5) {
                        cout << "�� ������� " << bal2 << " ����� " << endl;
                    }

                }
                system("cls");
            }

            else {
                if (bal <= 0)
                {
                    cout << "    �� 1 ������� �� ������� 0 �����( " << endl;
                }
                else if (bal >= 2 && bal < 5) {
                    cout << "    �� 1 ������� �� ������� " << bal << " ���� " << endl;
                }
                else if (bal == 1) {
                    cout << "    �� 1 ������� �� ������� " << bal << " ��� " << endl;
                }
                else if (bal >= 5) {
                    cout << "    �� 1 ������� �� ������� " << bal << " ����� " << endl;
                }

                if (bal1 <= 0)
                {
                    cout << "    �� 2 ������� �� ������� 0 �����( " << endl;
                }
                else if (bal1 >= 2 && bal1 < 5) {
                    cout << "    �� 2 ������� �� ������� " << bal1 << " ���� " << endl;
                }
                else if (bal1 == 1) {
                    cout << "    �� 2 ������� �� ������� " << bal1 << " ��� " << endl;
                }
                else if (bal1 >= 5) {
                    cout << "    �� 2 ������� �� ������� " << bal1 << " ����� " << endl;
                }
                break;
            }
            //���
            {
                if (bal <= 0)
                {
                    cout << "    �� 1 ������� �� ������� 0 �����( " << endl;
                }
                else if (bal >= 2 && bal < 5) {
                    cout << "    �� 1 ������� �� ������� " << bal << " ���� " << endl;
                }
                else if (bal == 1) {
                    cout << "    �� 1 ������� �� ������� " << bal << " ��� " << endl;
                }
                else if (bal >= 5) {
                    cout << "    �� 1 ������� �� ������� " << bal << " ����� " << endl;
                }
                ///////////////////////////////////////////////////////////////////
                if (bal1 <= 0)
                {
                    cout << "    �� 2 ������� �� ������� 0 �����( " << endl;
                }
                else if (bal1 >= 2 && bal1 < 5) {
                    cout << "    �� 2 ������� �� ������� " << bal1 << " ���� " << endl;
                }
                else if (bal1 == 1) {
                    cout << "    �� 2 ������� �� ������� " << bal1 << " ��� " << endl;
                }
                else if (bal1 >= 5) {
                    cout << "    �� 2 ������� �� ������� " << bal1 << " ����� " << endl;
                }
                ///////////////////////////////////////////////////////////////////
                if (bal2 <= 0)
                {
                    cout << "    �� 3 ������� �� ������� 0 �����( " << endl;
                }
                else if (bal1 >= 2 && bal2 < 5) {
                    cout << "    �� 3 ������� �� ������� " << bal2 << " ���� " << endl;
                }
                else if (bal2 == 1) {
                    cout << "    �� 3 ������� �� ������� " << bal2 << " ��� " << endl;
                }
                else if (bal2 >= 5) {
                    cout << "    �� 3 ������� �� ������� " << bal2 << " ����� " << endl;
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
