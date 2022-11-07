#include <iostream>
#include <conio.h>
#include <ctime>
#include <Windows.h>

using namespace std;

double stepen(double X, int N)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
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
        cout << endl << endl;
        return 0;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }
    else
    {

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << " * ";
        return Zir(X - 1);

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << endl;
    }
}
///3
int Sum(int X, int N)
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (X > N) {
        int temp = X;
        X = N;
        N = temp;
    }

    cout << " ";
    if (N == X) {

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << X;

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " = ";

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 1));
        return 1;

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    }
    else {

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << X;

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << " +";
        return X + Sum(X += 1, N);
    }
     
}

///4
int Arr(int arr[], const int size, int k = 0) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    arr[k] = rand() % 20;
    int min, max;
    int b = 10;
    int q = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9];
    int q1 = arr[10] + arr[11] + arr[12] + arr[13] + arr[14] + arr[15] + arr[16] + arr[17] + arr[18] + arr[19];
    int q2 = arr[20] + arr[21] + arr[22] + arr[23] + arr[24] + arr[25] + arr[26] + arr[27] + arr[28] + arr[29];
    int q3 = arr[30] + arr[31] + arr[32] + arr[33] + arr[34] + arr[35] + arr[36] + arr[37] + arr[38] + arr[39];
    int q4 = arr[40] + arr[41] + arr[42] + arr[43] + arr[44] + arr[45] + arr[46] + arr[47] + arr[48] + arr[49];
    int q5 = arr[50] + arr[51] + arr[52] + arr[53] + arr[54] + arr[55] + arr[56] + arr[57] + arr[58] + arr[59];
    int q6 = arr[60] + arr[61] + arr[62] + arr[63] + arr[64] + arr[65] + arr[66] + arr[67] + arr[68] + arr[69];
    int q7 = arr[70] + arr[71] + arr[72] + arr[73] + arr[74] + arr[75] + arr[76] + arr[77] + arr[78] + arr[79];
    int q8 = arr[80] + arr[81] + arr[82] + arr[83] + arr[84] + arr[85] + arr[86] + arr[87] + arr[88] + arr[89];
    int q9 = arr[90] + arr[91] + arr[92] + arr[93] + arr[94] + arr[95] + arr[96] + arr[97] + arr[98];

    int arrB = {  };

    if (k == size) {

        cout << endl << endl;

        cout << " Sum 1 - 10 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

        cout << " Sum 10 - 20 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q1 << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                                
        cout << " Sum 20 - 30 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q2 << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                                
        cout << " Sum 30 - 40 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q3 << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                                
        cout << " Sum 40 - 50 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q4 << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                                
        cout << " Sum 50 - 60 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q5 << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                                
        cout << " Sum 60 - 70 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q6 << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

        cout << " Sum 70 - 80 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q7 << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                                
        cout << " Sum 80 - 90 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q8 << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                                
        cout << " Sum 90 - 100 = ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << q9 << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
       
        cout << endl << endl;
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << "min sum ";
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << "--> ";
        if (q < q1 && q < q2 && q < q3 && q < q4 && q < q5 && q < q6 && q < q7 && q < q8 && q < q9) {
            cout << " Sum 1 - 10 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }
        if (q1 < q && q1 < q2 && q1 < q3 && q1 < q4 && q1 < q5 && q1 < q6 && q1 < q7 && q1 < q8 && q1 < q9) {
            cout << " Sum 10 - 20 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q1;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }
        if (q2 < q && q2 < q1 && q2 < q3 && q2 < q4 && q2 < q5 && q2 < q6 && q2 < q7 && q2 < q8 && q2 < q9) {
            cout << " Sum 20 - 30 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q2;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }
        if (q3 < q && q3 < q1 && q3 < q2 && q3 < q4 && q3 < q5 && q3 < q6 && q3 < q7 && q3 < q8 && q3 < q9) {
            cout << " Sum 30 - 40 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q3;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }
        if (q4 < q && q4 < q1 && q4 < q2 && q4 < q3 && q4 < q5 && q4 < q6 && q4 < q7 && q4 < q8 && q4 < q9) {
            cout << " Sum 40 - 50 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q4;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        
        }
        if (q5 < q && q5 < q1 && q5 < q2 && q5 < q3 && q5 < q4 && q5 < q6 && q5 < q7 && q5 < q8 && q5 < q9) {
            cout << " Sum 50 - 60 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q5;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        
        }
        if (q6 < q && q6 < q1 && q6 < q2 && q6 < q3 && q6 < q4 && q6 < q5 && q6 < q7 && q6 < q8 && q6 < q9) {
            cout << " Sum 60 - 70 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q6;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }
        if (q7 < q && q7 < q1 && q7 < q2 && q7 < q3 && q7 < q4 && q7 < q5 && q7 < q6 && q7 < q8 && q7 < q9) {
            cout << " Sum 70 - 80 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q7;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }
        if (q8 < q && q8 < q1 && q8 < q2 && q8 < q3 && q8 < q4 && q8 < q5 && q8 < q6 && q8 < q7 && q8 < q9) {
            cout << " Sum 80 - 90 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q8;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }
        if (q9 < q && q9 < q1 && q9 < q2 && q9 < q3 && q9 < q4 && q9 < q5 && q9 < q6 && q9 < q7 && q9 < q8) {
            cout << " Sum 90 - 100 = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            return q9;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        }
    }
    else {

        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
        cout << arr[k] << "\t";
        return Arr(arr, size, k + 1);
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        
    }
   
        
    
}
////5
template <typename T>
T Arr1(T arr[], const T size)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << endl;
    for (size_t i = 0; i < size; i++)
    {

        SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
        arr[i] = rand() % 10;
        cout << " " << arr[i] << "\t";

        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    }
    cout << endl << endl;

    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    long long max;
    max = arr[0];

    for (size_t i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
    cout << " ------------------------" << endl << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    cout << " max element = ";
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
    cout << max << endl << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    return 0;
}

template <typename T>
T Arr2(T arr[][5], const size_t col, const size_t row)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << endl;
    for (size_t i = 0; i < col; i++)
    {
        cout << " ";
        for (size_t j = 0; j < row; j++)
        {
            arr[col][row] = arr[i][j];

            arr[i][j] = rand() % 20 + (-5);

            SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
            cout << arr[i][j] << "\t\t";
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        }
        cout << endl << endl;
    }
    long long max;
    max = arr[0][0];
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
    cout << " ------------------------" << endl << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    cout << " max element = ";
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
    cout << max << endl << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    return 0;
}

template <typename T>
T Arr3(T arr[][5][3], const size_t col, const size_t row, const size_t Q)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << endl;
    for (size_t i = 0; i < col; i++)
    {
        cout << " ";
        for (size_t j = 0; j < row; j++)
        {
            for (size_t x = 0; x < Q; x++)
            {
                SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));

                arr[col][row][Q] = arr[i][j][x];
                arr[i][j][x] = rand() % 30 + (-5);

                cout << arr[i][j][x] << "\t ";
                SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            }
        }
        cout << endl << endl;
    }

    long long max;
    max = arr[0][0][0];
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            for (size_t x = 0; x < Q; x++)
            {
                if (max < arr[i][j][x])
                {
                    max = arr[i][j][x];
                }
            }
        }
    }
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
    cout << " ------------------------" << endl << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    cout << " max element = ";
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
    cout << max << endl << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    return 0;
}

/// 6
template <typename T>
T Max(T a, T b)
{
    if (a > b)
        return a;
    return b;
}
template <typename T>
T Max(T a, T b, T c)
{
    T max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    return max;
}


int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    setlocale(LC_ALL, "ru");
    char switch_on;
    do
    {
        system("cls");
        cout << "    #=====================MENU====================#" << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   1 - нахождение степени числа.           | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   2 - выводит N звезд в ряд.              | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   3 - вычисляет сумму всех чисел в        | " << endl;
        cout << "     |      диапазоне.                           | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   4 - находит позицию, с которой          | " << endl;
        cout << "     |      начинается последовательность из 10  | " << endl;
        cout << "     |      чисел, сумма которых минимальна.     | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   5 - там все описанно)                   | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |   6 - там все описанно)                   | " << endl;
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
        case '0':
        {
            break;
        }break;

        case '1':
        {
            double X;
            int N;
            cout << " Введите число --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cin >> X;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

            cout << " Введите степень --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cin >> N;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

            cout << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cout << " " << X;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << "^";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cout << N;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " = ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 1));
            cout << stepen(X, N) << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

            cout << endl;
            cout << " ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));


        }break;

        case '2':
        {
            int X;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " Введите число --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cin >> X;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << endl << endl;
            cout << Zir(X) << endl;
            cout << endl;
            cout << " ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

        }break;

        case '3':
        {
            int X;
            int N;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " Введите число --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cin >> X;

            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " Введите число --> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cin >> N;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

            cout << endl;
            cout << Sum(X, N) << endl;

            cout << endl;
            cout << " ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

        }break;

        case '4':
        {
            const int size = 98;
            int arr[size];

            cout << Arr(arr, size) << endl;

            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << endl;
            cout << " ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

        }break;

        case '5':
        {
            char switch_on1;
            do
            {
                system("cls");
                cout << "        #================MENU================#" << endl;
                cout << "         |                                  |" << endl;
                cout << "         |   1 -максимальное значение в     |" << endl;
                cout << "         |     одномерном массиве           |" << endl;
                cout << "         |                                  |" << endl;
                cout << "         |   2 - максимальное значение в    |" << endl;
                cout << "         |     двумерном массиве            |" << endl;
                cout << "         |                                  |" << endl;
                cout << "         |   3 - максимальное значение в    |" << endl;
                cout << "         |     трехмерном массиве           |" << endl;
                cout << "         |                                  |" << endl;
                cout << "        #====================================#" << endl;
                cout << "         |   0 - Вернутся в главное меню    |" << endl;
                cout << "        #====================================#" << endl;

                cout << "\n Введите число - > ";
                switch_on1 = _getch();
                system("cls");
                switch (switch_on1)
                {

                case '0':
                {
                    break;
                }break;

                case '1':
                {
                    srand(time(0));
                    const  uint32_t size = 10;
                    int arr[size];
                    Arr1<int>(arr, size);

                    cout << endl;
                    cout << " ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

                }break;

                case '2':
                {
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
                    srand(time(0));
                    const size_t col = 5;
                    const size_t row = 5;
                    int arr[col][row];
                    Arr2<int>(arr, col, row);

                    cout << endl;
                    cout << " ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

                }break;

                case '3':
                {
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
                    srand(time(0));
                    const size_t col = 5;
                    const size_t row = 5;
                    const size_t Q = 3;
                    int arr[col][row][Q];
                    Arr3<int>(arr, col, row, Q);

                    cout << endl;
                    cout << " ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

                }break;
                default:
                    break;
                }

            } while (switch_on1 != '0');

        }break;
        case '6':
        {
            char switch_on2;
            do
            {
                system("cls");
                cout << "        #================MENU================#" << endl;
                cout << "         |                                  |" << endl;
                cout << "         |   1 - Нахождение максимального   |" << endl;
                cout << "         |     значения двух целых.         |" << endl;
                cout << "         |                                  |" << endl;
                cout << "         |   2 - Нахождение максимального   |" << endl;
                cout << "         |     значения трех целых.         |" << endl;
                cout << "         |                                  |" << endl;
                cout << "        #====================================#" << endl;
                cout << "         |   0 - Вернутся в главное меню    |" << endl;
                cout << "        #====================================#" << endl;
                switch_on2 = _getch();
                system("cls");
                switch (switch_on2)
                {
                case '0':
                {
                    break;
                }break;

                case '1':
                {
                    float a, b, c;
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " Введите число : ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cin >> a;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " Введите число : ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cin >> b;

                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " ------------------------" << endl << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

                    cout << " Максимальное число : ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 1));
                    cout << Max(a, b) << endl << endl;

                    cout << endl;
                    cout << " ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                }break;

                case '2':
                {
                    float a, b, c, d;
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " Введите число : ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cin >> a;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " Введите число : ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cin >> b;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " Введите число : ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cin >> c;
                    cout << endl;

                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << " ------------------------" << endl << endl;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

                    cout << " Максимальное число : ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 1));
                    cout << Max(a, b, c) << endl << endl;

                    cout << endl;
                    cout << " ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                }break;

                }

            } while (switch_on2 != '0');
        default:
            break;
        }
        }

    } while (switch_on != '0');

    return 0;
}
