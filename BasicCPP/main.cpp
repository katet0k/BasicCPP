#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>

using namespace std;


void PrintRectangle(int N, int K)
{
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < K; j++)
        {
            cout << " * ";

        }
        cout << endl;
    }
}

void TrueFalse(int N)
{
    if (N > 0)
    {
        cout << " True ";
    }
    if (N < 0)
    {
        cout << " False ";
    }
}

void cube(int N)
{
    int copy = N;
    for (int i = 1; i < 3; i++)
    {
        N *= copy;
    }
    cout << N;
}

bool arrsimple(int arr[], const int size, int N, int A)
{
    uint32_t counter = 0;
    N = 0;
    A = 0;
    for (size_t i = 1; i < size; i++)
    {
        arr[i] = rand() % 20;
        cout << " " << arr[i] << "\t";
        if (arr[i] % i == 0)
        {
            counter++;
            N++;
        }
        else
        {
            A++;
        }
    }
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
    cout << endl << endl;

    cout << " ���������� ������� �����: " << N << endl;
    cout << " ���������� �� ������� �����: " << A << endl;

    if (counter >= 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void numers(int N, int V)
{

    if (N < V)
    {
        int temp = N;
        N = V;
        V = temp;
    }
    if (N > V)
    {
        cout << " ����� " << N << " ������ " << endl;
    }
    if (V > N)
    {
        cout << " ����� " << V << " ������ " << endl;
    }
    if (N == V)
    {
        cout << " ����� ����� " << endl;
    }

}

void Array(int arr[], const int size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;
        cout << " " << arr[i] << "\t";
    }
    cout << endl << endl;
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
    cout << " Min = " << min << endl;
    cout << " Max = " << max << endl << endl;
}

void Arrayskip(int arr[], const int size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;
        cout << " " << arr[i] << "\t";
    }
    cout << endl << endl;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
    for (int i = size; i > 0; i--)
    {
        cout << " " << arr[i - 1] << "\t";
    }
    cout << endl << endl;
}

bool SimpleNumber(int number)
{
    uint32_t counter = 0;

    for (size_t i = 1; i < number; i++)
    {
        if (number % i == 0) {

            counter++;
        }
        if (counter >= 2) {

            return false;
        }
    }

    return true;

}

size_t Factorial(size_t number, int a)
{
    size_t mul = 1;
    cout << " " << number << endl;

    a = number;

    for (size_t i = 0; i < a; i++)
    {

        mul *= number;

        if (number == 1)
        {
            cout << number << " = ";
        }
        else
        {
            cout << number << " * ";
        }

        number--;
    }


    return mul;
}

int main()
{
    setlocale(LC_ALL, "ru");
    char switch_on;
    do
    {

        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        system("cls");

        cout << "#===================MENU====================#" << endl;
        cout << " |   1 -  ������� �� ����� �������������   |" << endl;
        cout << " |     � ������� N � ������� K.            |" << endl;
        cout << " |                                         |" << endl;
        cout << " |   2 - ��������� ��������� �����������   |" << endl;
        cout << " |     �� �����.                           |" << endl;
        cout << " |                                         |" << endl;
        cout << " |   3 - ���������, �������� �� ���������� |" << endl;
        cout << " |      �� ����� �������.                  |" << endl;
        cout << " |                                         |" << endl;
        cout << " |   4 - ���������� ��� �����.             |" << endl;
        cout << " |                                         |" << endl;
        cout << " |   5 - ���������� ����������� �� ����    |" << endl;
        cout << " |     �����.                              |" << endl;
        cout << " |                                         |" << endl;
        cout << " |   6 - ���������� ������, ����           |" << endl;
        cout << " |     ���������� �������� ������������� � |" << endl;
        cout << " |     ����, ���� �������������.           |" << endl;
        cout << " |                                         |" << endl;
        cout << " |   7 - ��� ���������� ������� � �������� |" << endl;
        cout << " |     (�������� � �����) ���������        |" << endl;
        cout << " |     ����������� ��  �������.            |" << endl;
        cout << " |                                         |" << endl;
        cout << " |   8 - ������ ������� ���������          |" << endl;
        cout << " |     ����������� �� ������� ��           |" << endl;
        cout << " |     ���������������.                    |" << endl;
        cout << " |                                         |" << endl;
        cout << " |   9 - ���������� ���������� �������     |" << endl;
        cout << " |    ����� � ���������� ��� �������.      |" << endl;
        cout << " |                                         |" << endl;
        cout << "#===========================================#" << endl;
        cout << " |         0 - Exit                        |" << endl;
        cout << "#===========================================#" << endl;

        switch_on = _getch();
        system("cls");

        switch (switch_on)
        {
        case '0':
        {

            break;

        }break;
        case '1':
        {
            int N, K;
            cout << " ������� ������ N -> ";
            cin >> N;
            cout << " ������� ������ K -> ";
            cin >> K;
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
            PrintRectangle(N, K);
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");

        }break;
        case '2':
        {
            int number;
            cout << " ������� ����� -> ";
            cin >> number;

            int a = number;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
            cout << Factorial(number, a) << endl;

            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");
        }break;
        case '3':
        {
            int N;
            cout << " ������� ����� -> ";
            cin >> N;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));

            if (SimpleNumber(N))
                cout << " ��� ����� �������" << endl;

            else
                cout << " ��� ����� �� ������� " << endl;

            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");

        }break;

        case '4':
        {
            int N;
            cout << " ������� ����� -> ";
            cin >> N;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
            cout << " " << N << "^3 " << " = ";
            cube(N);

            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");
        }break;
        case '5':
        {
            int N, V;
            cout << " ������� ����� -> ";
            cin >> N;
            cout << " ������� ����� -> ";
            cin >> V;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
            numers(N, V);

            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");

        }break;
        case '6':
        {
            int N;
            cout << " ������� ����� -> ";
            cin >> N;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
            TrueFalse(N);

            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");

        }break;
        case '7':
        {
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
            srand(time(0));
            const  int size = 10;
            int arr[size];
            int a = 10;
            cout << endl;
            Array(arr, size);

            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");

        }break;
        case '8':
        {
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
            srand(time(0));

            const  int size = 10;
            int arr[size];
            int a = 10;

            cout << endl;
            Arrayskip(arr, size);

            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");

        }break;

        case '9':
        {
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));

            srand(time(0));

            int N = 0;
            int A = 0;
            const  int size = 10;
            int arr[size];
            int a = 10;

            cout << endl;

            arrsimple(arr, size, N, A);

            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");

        }break;
        }
    } while (switch_on != '0');

    return 0;
}