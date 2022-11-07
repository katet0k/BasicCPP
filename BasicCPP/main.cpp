#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>

using namespace std;

int NOD(int a, int b)
{
    while (a > 0 && b > 0)

        if (a > b) {
            a %= b;
        }
        else {
            b %= a;
        }

    return a + b;
}
void GetRandomNumber(char* num)
{
    char digits[10] = "123456789";
    srand((unsigned)time(0));
    for (unsigned i = 0, rmax = 9; i < 4; i++) {
        unsigned r = rand() % rmax--;
        num[i] = digits[r];
        digits[r] = digits[rmax];
    }
}

template <int row, int col>
bool CheckAnswer(char(&arr)[row][col], unsigned& bull, unsigned& cow)
{
    cow = 0; bull = 0;
    unsigned i1, i2;
    for (i1 = 0; i1 < col - 1; i1++) {
        for (i2 = 0; i2 < col - 1; i2++) {
            if (arr[0][i1] == arr[1][i2]) {
                if (i1 == i2) cow++;
                else bull++;
            }
        }
    }
    return cow == col - 1;
}


int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    setlocale(LC_ALL, "ru");
    char switch_on;
    do
    {
        system("cls");
        cout << "    #=====================MENU====================#" << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   1 - нахождение наибольшего общего       | " << endl;
        cout << "     |     делителя двух целых чисел.            | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   2 - игра «быки и коровы»                | " << endl;
        cout << "     |                                           | " << endl;
        cout << "    #==============================================#" << endl;
        cout << "     |   0 - Выход                               |" << endl;
        cout << "    #==============================================#" << endl;

        cout << "\n Введите число - > ";
        switch_on = _getch();
        system("cls");
        cout << endl;

        switch (switch_on)
        {
        case '0': {
            break;
        }break;

        case '1': {

            int a, b;
            cout << " Введите число --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cin >> a;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " Введите число --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cin >> b;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << endl;
            cout << " Самый общий делитель двух введенных чисел --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cout << NOD(a, b) << endl;

            cout << endl << endl;
            cout << " ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

        }break;
        case '2':
        {
            char numbers[2][5];
            unsigned bulls(0), cows(0);
            int a = 1;
            memset(numbers[0], '\0', 5);
            GetRandomNumber(numbers[0]);

            while (true) {
                cout << "  Какое число я загадал? : ";
                memset(numbers[1], '\0', 5);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                cin >> numbers[1];
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
               
                if (CheckAnswer(numbers, bulls, cows)) {
                    cout << endl;
                    cout << " Все правильно, Вы угадали за : ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 1));
                    cout << a; 
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " попыток " << endl;

                    cout << endl << endl;
                    cout << " ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    break;
                }
                else {
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cout << " " << bulls;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " быки ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
                    cout << cows;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " коровы" << endl;
                    a++;
                    
                }
            }

        }break;

        default:
            break;
        }

    } while (switch_on != '0');
    
	return 0;
}
