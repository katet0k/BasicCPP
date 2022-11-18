#include <iostream> 
#include <conio.h> 
#include <cmath> 
#include <Windows.h> 
using namespace std;

int Sum(int x, int y)
{
    return x + y;
}
int Minus(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}

template <typename T>
T* in(uint32_t size) {
    T* arr = new T[size];

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;
    }
    return arr;
}
template <typename T>
void Print(T* arr, uint32_t size) {
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
template <typename T>
T* CC(T* A, T* B, T* C, uint32_t size) {

    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    int sumA = 0;
    int sumB = 0;
    cout << " Sum A --> ";
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
    for (size_t i = 0; i < size; i++)
    {
        sumA += A[i];
        cout << sumA << "\t";
        
    }
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    cout << " Sum B --> ";
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
    for (size_t i = 0; i < size; i++)
    {
        sumB += B[i];
        cout << sumB << "\t";
    }
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    cout << " Sum A and B --> ";
    for (size_t i = 0; i < size; i++)
    {
        C[i] = sumA + sumB;
    }
    return C;
}

int main()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

    setlocale(LC_ALL, "ru");
    char switch_on;
    do
    {
        system("cls");
        cout << "    #=====================MENU====================#" << endl;
        cout << "     |                                           | " << endl;
        cout << "     |  1 - калькулятор.                         | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |  2 - суммы элементов массивов А и В.      | " << endl;
        cout << "     |                                           | " << endl;
        cout << "    #=============================================#" << endl;
        cout << "     |   0 - Exit                                |" << endl;
        cout << "    #=============================================#" << endl;

        cout << "\n --> ";
        switch_on = _getch();
        system("cls");
        cout << endl;

        switch (switch_on)
        {
        case '0': {
            break;
        }break;
        case '1':
        {

            int x, y;
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            cout << " first number -->  ";
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 3));
            cin >> x;
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            cout << " second number --> ";
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 3));
            cin >> y;
            cout << endl;

            int (*sum_ptr[4])(int, int) = { Sum, Minus, Mul, Div };
            for (size_t i = 0; i < 4; i++)
            {
                SetConsoleTextAttribute(handle, WORD(0 << 4 | 8));
                if (i == 0) {
                    cout << " " << x << " + " << y << " = ";
                }
                if (i == 1) {
                    cout << " " << x << " - " << y << " = ";
                }
                if (i == 2) {
                    cout << " " << x << " * " << y << " = ";
                }
                if (i == 3) {
                    cout << " " << x << " / " << y << " = ";
                }

                SetConsoleTextAttribute(handle, WORD(0 << 4 | 3));
                cout << sum_ptr[i](x,y) << endl;
            }

            SetConsoleTextAttribute(handle, WORD(0 << 4 | 8));
            cout << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

        }break;

        case'2':
        {
            int size = 10;
            int sizeA = 10;
            int sizeB = 10;

            cout << endl;

            int* A = in<int>(sizeA);
            cout << " A --> ";
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
            Print(A, sizeA);
            int* B = in<int>(sizeA);
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            cout << " B --> ";
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
            Print(B, sizeB);
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

            int* C = new int{ size };
            cout << endl;
            CC<int>(A, B,C, size);
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
            Print(C, size);
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));

            cout << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        }break;


        default:
            break;
        }
    
    } while (switch_on != '0');

	return 0;
}
