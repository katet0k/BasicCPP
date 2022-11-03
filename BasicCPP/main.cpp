#include <iostream>
#include <ctime>
using namespace std;
template <typename T>
T** initializeArray(const uint32_t col, const uint32_t row)
{
    T** arr = new T * [col];
    for (size_t i = 0; i < col; i++)
    {
        arr[i] = new T[row];
    }
    return arr;
}
template <typename T>
void randArray(T** arr, const uint32_t col, const uint32_t row)
{
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
}
template <typename T>
void printArray(T** arr, const uint32_t col, const uint32_t row)
{
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
}
template <typename T>
T** deletArray(T** arr, const uint32_t col, const uint32_t row)
{
    for (size_t i = 0; i < col; i++)
    {
        delete arr[i];
    }
    delete[] arr;
    cout << "Array was delete!" << endl;
    return nullptr;
}
int main()
{
    srand(time(0));
    int col, row;
    cout << "Enter col->";
    cin >> col;
    cout << "Enter row->";
    cin >> row;
    int** arr = initializeArray<int>(col, row);
    randArray<int>(arr, col, row);
    printArray<int>(arr, col, row);
    arr = deletArray<int>(arr, col, row);
    if (arr == nullptr)
    {
        cout << "Arr is empty!" << endl;
    }
    return 0;
}