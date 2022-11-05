#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

double stepen(double X, int N)
{
    if (N == 0)
        return 1;
    else if (N < 0)
        return 1 / stepen(X, -N);
    else
        return X * stepen(X, N - 1);
}
int Zir(int X) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    if (X == 0)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << endl;
        return 0;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }
    else
    {
        cout << " * ";
        return Zir(X - 1);
        cout << endl;
    }
}
int Sum(int X, int N)
{
    cout << " ";
    if (N == X) {
        cout << X << " = ";
        return 1;
    }
    else {

        cout << X << " +";
        return X + Sum(X += 1, N);
    }
     
}
int main()
{
    setlocale(LC_ALL, "ru");
    char switch_on;
    do
    {
        cout << endl;
        cout << "[-----------------------]" << endl;
        cout << " |                     |" << endl;
        cout << " |                     |" << endl;
        cout << " |                     |" << endl;
        cout << " |                     |" << endl;
        cout << " |                     |" << endl;
        cout << "[-----------------------]" << endl;
        cout << endl;
        switch_on = _getch();

        switch (switch_on)
        {
        case '0':
        {
            break;
        }break;

        case '1':
        {
            double X;
            int N;
            cout << " ¬ведите число --> ";
            cin >> X;

            cout << " ¬ведите степень --> ";
            cin >> N;

            cout << stepen(X, N) << endl;
            system("pause");
            system("cls");



        }break;

        case '2':
        {
            int X;
            cout << " ¬ведите число --> ";
            cin >> X;
            cout << Zir(X) << endl;
            system("pause");
            system("cls");

        }break;

        case '3':
        {
            int X;
            int N;
            cout << " ¬ведите число --> ";
            cin >> X;

            cout << " ¬ведите число --> ";
            cin >> N;
            cout << endl;
            cout << Sum(X, N) << endl;
            cout << endl;
            system("pause");
            system("cls");

        }break;

        default:
            break;
        }
    } while (switch_on != 0);

	return 0;
}