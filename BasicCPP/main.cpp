#include <iostream>
#include <ctime>

using namespace std;

void RandKub(int N, int K)
{
    for (size_t i = 0; i <= N; i++)
    {
        for (size_t j = 0; j <= K; j++)
        {
            cout << " * " << " ";
        }
        cout << endl;
    }
}
void RandMatrix(int arr[][5], const int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
}
void PrintMatrix(int arr[][5], const int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
void RandArray(int arr[], const int size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}
void Print(int arr[], const int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

bool Prost(int N)
{
    uint32_t counter = 0;
    for (size_t i = 1; i <= N; i++)
    {
        if (N % i == 0)
            counter++;
        if (counter >= 3)
            return false;
    }
    return true;
}

void kub(int N)
{
    int copy = N;
    for (int i = 1; i < 3; i++)
    {
        N *= copy;

    }

    cout << N;
}


int main() {


    setlocale(LC_ALL, "ru");

    int num;
    cin >> num;

    switch (num)
    {
    case 1:
    {
        int N, K;
        cout << " введите число ";
        cin >> N;
        cout << " введите число ";
        cin >> K;

        RandKub(N, K);

        system("pause");

    }break;

    case 2:
    {


        srand(time(0));
        const int size = 5;


        /*int arr[size];
        int arr_2[size];
        RandArray(arr, size);
        Print(arr, size);
        RandArray(arr_2, size);
        Print(arr_2, size);*/


        int arr[size][size];
        RandMatrix(arr, size);
        PrintMatrix(arr, size);
        return 0;


    }break;

    case 3:
    {
        int N;
        int c;
        cin >> N;
        if (Prost(N)) {
            cout << "This number is simple!" << endl;
        }
        else
        {
            cout << "This number is not simple!" << endl;
        }

    }break;

    case 4:
    {
        int N = 4;
        cin >> N;

        kub(N);

    }break;

    default:
        break;
    }
    
	return 0;

}