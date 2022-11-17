#include <iostream>
#include <ctime>
#include <Windows.h>
#include <conio.h>

using namespace std;
//////////////////////////////1
template <typename T>
T* initializeArray(const uint32_t size)
{
    return new T[size];
}
template <typename T>
void randArray(T* arr, const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 15;
    }
}
template <typename T>
void printArray(T* arr, const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}
template <typename T>
T* deletArray(T* arr, const uint32_t size)
{
    delete[] arr;
    return nullptr;
}
template<typename T>
T* resloveCopy(T* arr, int& size)
{
    int size_copy = 0;
    bool flag = false;
    int k = 0;
    T* arr_copy = new T[size];
    for (size_t i = 0; i < size; i++)
    {
        arr_copy[i] = -1;
    }
    for (size_t i = 0; i < size; i++)
    {
        flag = false;
        for (size_t j = 0; j < size; j++)
        {
            if (arr[i] == arr_copy[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            arr_copy[k] = arr[i];
            k++;
        }
    }
    for (size_t i = 0; i < size; i++)
    {
        if (arr_copy[i] != -1)
        {
            size_copy++;
        }
        else
        {
            break;
        }
    }
    T* res = new T[size_copy];
    for (size_t i = 0; i < size_copy; i++)
    {
        res[i] = arr_copy[i];
    }
    delete[]arr_copy;
    size = size_copy;
    return res;
}
template <typename T>
T* initializeArrayC(T* A, T* B, const uint32_t M, const uint32_t N, int& counter)
{
    bool flag = false;
    if (counter == 0)
    {
        for (size_t i = 0; i < M; i++)
        {
            flag = false;
            for (size_t j = 0; j < N; j++)
            {
                if (A[i] == B[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                counter++;
            }
        }
        return initializeArrayC<T>(A, B, M, N, counter);
    }
    else
    {
        T* arr = new T[counter];
        int k = 0;
        for (size_t i = 0; i < M; i++)
        {
            flag = false;
            for (size_t j = 0; j < N; j++)
            {
                if (A[i] == B[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                arr[k] = A[i];
                k++;
            }
        }
        return arr;
    }
}

////////////////////////////////////2

template<typename T>
T* Initialize(const uint32_t size)
{
    T* new_arr = new T[size];
    for (uint32_t i = 0; i < size; i++)
    {
        new_arr[i] = -5 + rand() % 10;
    }
    return new_arr;
}
template<typename T>
void Print(T* new_arr, const uint32_t size)
{
    for (uint32_t i = 0; i < size; i++)
    {
        cout << new_arr[i] << "\t";
    }
    cout << endl;
}
template<typename T>
T* DeleteRepeatElements(T* arr, const uint32_t all_size, uint32_t& fact_size)
{
    bool trigger = false;
    uint32_t step = 0;
    T* res = new T[all_size];
    for (size_t i = 0; i < all_size; i++)
    {
        trigger = false;
        for (size_t j = 0; j <= step; j++)
        {
            if (arr[i] == res[j])
            {
                trigger = true;
                break;
            }
        }
        if (!trigger)
        {
            res[step] = arr[i];
            step++;
        }
    }
    fact_size = step;
    T* fact_res = new T[fact_size];
    for (size_t i = 0; i < fact_size; i++)
    {
        fact_res[i] = res[i];
    }
    delete[] res;
    return fact_res;
}
template<typename T>
T* ExcludeArray(T* A, const uint32_t M, T* B, const uint32_t N, uint32_t& main_size, T* result = nullptr, uint32_t step_result = 0, uint32_t iter = 0)
{
    bool trigger = false;
    uint32_t minimal_size, maximal_size;
    T* first = nullptr; T* second = nullptr;
    if (step_result == 0)
    {
        result = new T[M + N];
        if (M <= N)
        {
            minimal_size = M;
            maximal_size = N;
            first = A;
            second = B;
        }
        if (M >= N)
        {
            minimal_size = N;
            maximal_size = M;
            first = B;
            second = A;
        }
    }
    else {
        if (M <= N)
        {
            minimal_size = N;
            maximal_size = M;
            first = B;
            second = A;
        }
        if (M >= N)
        {
            minimal_size = M;
            maximal_size = N;
            first = A;
            second = B;
        }
    }
    for (size_t i = 0; i < minimal_size; i++)
    {
        trigger = false;
        for (size_t j = 0; j < maximal_size; j++)
        {
            if (first[i] == second[j])
            {
                trigger = true;
                break;
            }
        }
        if (!trigger)
        {
            result[step_result] = first[i];
            step_result++;
        }
    }
    if (iter == 0)
    {
        iter++;
        return ExcludeArray<T>(A, M, B, N, main_size, result, step_result, iter);
    }
    else if (iter == 1)
    {
        return DeleteRepeatElements<T>(result, M + N, main_size);
    }
}

////////////////3
template<typename T>
T* Initialize1( uint32_t size)
{
    T* new_arr = new T[size];
    for (uint32_t i = 0; i < size; i++)
    {
        new_arr[i] = rand() % 20;
    }
    return new_arr;
}
template<typename T>
void Print1(T* arr, uint32_t size)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (uint32_t i = 0; i < size; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << arr[i] << "\t";
    }
    cout << endl;
}

template<typename T>
void element(int a, int b, T* arr,T* res)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    for (size_t i = 0; i <= a; i++)
    {
        res[i] = arr[i];

        if (i == a) {
            res[i] = b;
        }
        if (i > a) {
            res[i] = arr[i + 1];
        }
    }
}
template<typename T>
void elementEnd(int b,T* arr, T * res, uint32_t size) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int a = 9;
    for (size_t i = 0; i <= a; i++)
    {
        res[i] = arr[i];

        if (i == a) {
            res[i] = b;
        }
        if (i > a) {
            res[i] = arr[i + 1];
        }


    }
    
}
void* elementDelete(int* arr, int* res, uint32_t& size, int a)
{
    char b = '_';
    for (size_t i = 0; i <= a; i++)
    {
        res[i] = arr[i];

        if (i == a) {
            res[i] = 0;
        }
        if (i > a) {
            res[i] = arr[i + 1];
        }
    }
    return 0;
}


//////////////////4
template<typename T>
void Print2(T* arr, uint32_t size)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (uint32_t i = 0; i < size; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << arr[i] << "\t";
    }
    cout << endl;

}
int* delete_simple_numbers(int* arr, int& size)
{
    int* arr2 = new int[size];
    int size2 = 0;
    for (int i = 0; i < size; i++)
    {
        int tmp = arr[i];

        for (int j = 2; j <= tmp; j++)
            if (j != tmp && tmp % j == 0)
            {
                arr2[size2++] = tmp;
                break;
            }
    }
    delete[] arr;
    size = size2;
    return arr2;
}

//////////////////////5
template<typename T>
void PrintInt(T* arr, uint32_t size)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (uint32_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 20 + (-6);
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
        cout << arr[i] << "\t";
    }
    cout << endl;
}

template<typename T>
void distributionmax(T* arr , uint32_t size) {
    T sizemax = 1;
    T* arrmax = new T [sizemax];
    int c = 0;
    for (size_t i = 0; i <= size; i++)
    {
         arrmax = arr;

        if (arr[i] > 0) {
            arrmax[i] = arr[i];
            cout << arrmax[i] << "\t";
            sizemax++;
            c++;
        }
        
        
    }
    cout << endl;
    if (c == 0) {
        cout << " there are no plus values ​​in this array" << endl;
    }
    
}

template<typename T>
void distributionmin(T* arr, uint32_t size) {
    T sizemin = 0;
    T* arrmin = new T[sizemin];
    int c = 0;
    for (size_t i = 0; i <= size; i++)
    {
        arrmin = arr;
       
        if (arr[i] < 0) {
            arrmin[i] = arr[i];
            cout << arrmin[i] << "\t";     
            sizemin++;
            c++;
        }
        
    }
    cout << endl;
    if (c == 0) {
        cout << " there are no minus values ​​in this array" << endl;
    }
   
}

template<typename T>
void distribution0(T* arr, uint32_t size) {
    T size0 = 1;
    T* arr0 = new T[size0];
    int c = 0;
    for (size_t i = 0; i <= size; i++)
    {
        arr0 = arr;
        
        if (arr[i] == 0) {
            
            arr0[i] = arr[i];
            cout << arr0[i] << "\t";
            size0++;
            c++;
            
        }
       
    }
    if (c == 0) {
        cout << "there are no null values ​​in this array" << endl;
    }
    cout << endl;
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
        cout << "     |  1 - 1                                    | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |  2 - 2                                    | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |  3 - там все описанно.                    | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |  4 - простые числа.                       | " << endl;
        cout << "     |                                           | " << endl;
        cout << "     |  5 - распределяет положительные,          | " << endl;
        cout << "     |   отрицательные и нулевые элементы.       | " << endl;
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

        case '1':
        {
            srand(time(0));
            int M, N;
            cout << "Enter M-> ";
            cin >> M;
            cout << "Enter N-> ";
            cin >> N;
            int* A = initializeArray<int>(M);
            int* B = initializeArray<int>(N);
            randArray<int>(A, M);
            randArray<int>(B, N);
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << "Array A-> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            printArray<int>(A, M);
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << "Array B-> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            printArray<int>(B, N);
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            int sizeC = 0;
            int* C = initializeArrayC<int>(A, B, M, N, sizeC);
           /* cout << "Array C with copy-> ";
            printArray<int>(C, sizeC);*/
            int* res = resloveCopy<int>(C, sizeC);
            cout << "Array C-> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            printArray<int>(res, sizeC);
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));

            A = deletArray<int>(A, M);
            B = deletArray<int>(B, N);
            C = deletArray<int>(C, sizeC);

            cout << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            system("cls");
        }break;

        case '2':
        {
            uint32_t M, N, C = 0;
            cout << "Enter M->";
            cin >> M;
            cout << "Enter N->";
            cin >> N;
            int* A = Initialize<int>(M);
            int* B = Initialize<int>(N);

            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << "Array A-> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            Print(A, M);
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << "Array B-> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            Print(B, N);

            int* res = ExcludeArray<int>(A, M, B, N, C);
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << "Array C-> ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            Print(res, C);

            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            cout << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            system("cls");

        }break;

        case '3':
        {
            char switch_on1;
            do
            {

                cout << "    #======================MENU======================#" << endl;
                cout << "     |  1 - Функция добавления элемента в конец     | " << endl;
                cout << "     |    массива.                                  | " << endl;
                cout << "     |                                              | " << endl;
                cout << "     |  2 - Функция вставки элемента по указанному  | " << endl;
                cout << "     |    индексу.                                  | " << endl;
                cout << "     |                                              | " << endl;
                cout << "     |  3 - Функция удаления элемента по указанному | " << endl;
                cout << "     |    индексу.                                  | " << endl;
                cout << "     |                                              | " << endl;
                cout << "     |     ";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                cout << "счет начинается с нуля )";
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                cout << "                 | " << endl;
                cout << "     |                                              | " << endl;
                cout << "    #================================================#" << endl;
                cout << "     |   0 - Exit                                   |" << endl;
                cout << "    #================================================#" << endl;

                cout << "\n --> ";
                switch_on1 = _getch();
                system("cls");
                cout << endl;

                switch (switch_on1)
                {
                case '0':
                {
                    break;
                }break;

                case '1':
                {
                    uint32_t size = 10;
                    int a, b;
                    /*cout << " Введите длинну масива ->";
                    cin >> size;*/

                    int* arr = Initialize1<int>(size);
                    int* res = arr;
                    Print1(arr, size);

                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " Введите число -> ";
                    cin >> b;
                    elementEnd(b, arr, res, size);
                    Print1(arr, size);

                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << endl;
                    cout << " ";
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    system("cls");

                }break;

                case '2':
                {
                    uint32_t size = 11;
                    int a, b;
                    /*cout << " Введите длинну масива ->";
                    cin >> size;*/

                    int* arr = Initialize1<int>(size);
                    int* res = arr;
                    Print1(arr, size);

                    cout << endl;
                    cout << " Введите индекс елемента -> ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cin >> a;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << endl;

                    while (a > 10 || a < 0) {

                        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
                        cout << " Ошибка, попробуйте снова" << endl;
                        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                        cout << " Введите индекс елемента -> ";
                        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                        cin >> a;
                        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

                    }
                    cout << " Введите на что заменить ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cout << a;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " елемент -> ";
                    cin >> b;

                    element(a, b, arr, res);

                    Print1(arr, size);

                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << endl;
                    cout << " ";
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    system("cls");

                }break;

                case'3':
                {
                    uint32_t size = 10;
                    int a, b;
                    /*cout << " Введите длинну масива ->";
                    cin >> size;*/

                    int* arr = Initialize1<int>(size);
                    int* res = arr;
                    Print1(arr, size);

                    cout << endl;
                    cout << " Введите индекс елемента -> ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cin >> a;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << endl;

                    while (a > 10 || a < 0) {

                        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 4));
                        cout << " Ошибка, попробуйте снова " << endl;
                        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                        cout << " Введите индекс елемента -> ";
                        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                        cin >> a;
                        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

                    }

                    elementDelete(arr, res, size, a);

                    Print1(arr, size);

                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    cout << endl;
                    cout << " ";
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    system("cls");

                }break;


                default:
                    break;
                }
            } while (switch_on1 != '0');

        }break;

        case '4':
        {
            srand(time(NULL));

            int size = 10;
            int* point = Initialize1<int>(size);

            Print(point, size);

            point = delete_simple_numbers(point, size);
            cout << " prime numbers : " << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            Print(point, size);
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            delete[] point;
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            system("cls");
        }break;

        case '5':
        {

            srand(time(0));
            uint32_t size = 10;
            int* arr = new int [size];
            PrintInt(arr, size);
            cout << endl;
            cout << " plus elements :" << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            distributionmax(arr, size);
            cout << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " minus elements :" << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            distributionmin(arr, size);
            cout << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " null elements :" << endl;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            distribution0(arr, size);
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));

            cout << endl;
            cout << " ";
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            system("cls");

        }break;


        default:
            break;
        }

    } while (switch_on != '0');

    return 0;
}