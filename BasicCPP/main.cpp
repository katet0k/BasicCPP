#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int num;
    cin >> num;

    switch (num)
    {

    case '1':
    {
        const int size = 5;
        int arr[size][size][size][size];
        for (size_t i = 0; i < size; i++)
        {
            for (size_t j = 0; j < size; j++)
            {
                for (size_t k = 0; k < size; k++)
                {
                    for (size_t x = 0; x < size; x++)
                    {
                        arr[i][j][k][x] = rand() % 10;
                    }
                }
            }
        }
        for (size_t i = 0; i < size; i++)
        {
            for (size_t j = 0; j < size; j++)
            {
                for (size_t k = 0; k < size; k++)
                {
                    for (size_t x = 0; x < size; x++)
                    {
                        cout << arr[i][j][k][x] << " ";
                    }
                    cout << "\t";
                }
                cout << endl;
            }
            cout << endl << endl;
        }
    }break;

    case '2':
    {

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
        int main()
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
        }

    }break;


    default:
        break;
    }
    
    return 0;
}