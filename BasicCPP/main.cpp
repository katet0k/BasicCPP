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
T* Initialize1(const uint32_t size)
{
    T* new_arr = new T[size];
    for (uint32_t i = 0; i < size; i++)
    {
        new_arr[i] = rand() % 20;
    }
    return new_arr;
}
template<typename T>
void Print1(T* new_arr, const uint32_t size)
{
    for (uint32_t i = 0; i < size; i++)
    {
        cout << new_arr[i] << "\t";
    }
    cout << endl;
}

template<typename T>
void Insertions(T* a,T* b,T* arr) {

    if (a == 0) {
        cout << b;

    }
   
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
            cout << "Array A-> ";
            printArray<int>(A, M);
            cout << "Array B-> ";
            printArray<int>(B, N);
            int sizeC = 0;
            int* C = initializeArrayC<int>(A, B, M, N, sizeC);
            cout << "Array C with copy-> ";
            printArray<int>(C, sizeC);
            int* res = resloveCopy<int>(C, sizeC);
            cout << "Array C-> ";
            printArray<int>(res, sizeC);

            A = deletArray<int>(A, M);
            B = deletArray<int>(B, N);
            C = deletArray<int>(C, sizeC);

            cout << endl;
            cout << " ";
            system("pause");

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
            Print(A, M);
            Print(B, N);
            int* res = ExcludeArray<int>(A, M, B, N, C);
            Print(res, C);

            cout << endl;
            cout << " ";
            system("pause");


        }break;

        case '3':
        {
            uint32_t size, C = 0;
            int a, b;
            cout << "Enter M ->";
            cin >> size;

            int* arr = Initialize1<int>(size);
            Print1(arr, size);

            cout << "Enter a ->";
            cin >> a;
            cout << "Enter b ->";
            cin >> b;
            
            Insertions<int>(a, b,arr);
            Print1(arr,size);

            cout << endl;
            cout << " ";
            system("pause");

        }break;

        default:
            break;
        }

    } while (switch_on != '0');
    
    return 0;
}