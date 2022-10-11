#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numbr;
    cin >> numbr;
    cout << "" << endl;
    switch (numbr)
    {
    case 1:
    {
        const int col = 5;
        const int row = 5;
        int arr_2[col][row];

        int sum = 0;
        double a = 0;
        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                arr_2[i][j] = rand() % 10;

                cout << arr_2[i][j] << "\t";
            }
            cout << endl << endl;
        }

        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                sum += arr_2[i][j];
            }
        }
        cout << "Sum = " << sum << endl;


        for (size_t i = 0; i < col; i++)
        {

            for (size_t j = 0; j < row; j++)
            {
                a = sum;
            }

        }
        cout << "avg = " << a / 25 << endl;

        int min, max;
        min = max = arr_2[0][0];

        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                if (min > arr_2[i][j])
                {
                    min = arr_2[i][j];

                }
                if (max < arr_2[i][j])
                {
                    max = arr_2[i][j];

                }
            }



        }
        cout << "min " << min << endl;
        cout << "max " << max << endl;

        cout << endl;
        return 0;

    }break;

    case 2:
    {
        const int col = 5;
        const int row = 5;
        int arr_2[col][row];

        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                arr_2[i][j] = rand() % 10;
            }
        }
        int sumH[col];
        int sumV[row];
        int sum,k=0;

        for (size_t i = 0; i < col; i++)
        {
            sum = 0;
            for (size_t j = 0; j < row; j++)
            {
                sum += arr_2[i][j];
            }
            sumH[k] = sum;
            k++;
        }
        k = 0;
        for (size_t i = 0; i < col; i++)
        {
            sum = 0;

            for (size_t j = 0; j < row; j++)
            {
                sum += arr_2[j][i];
            }
            sumV[k] = sum;
            k++;
        }


        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                cout << arr_2[i][j] << "\t";
            }
            cout << "| " << sumH[i];
            cout << endl << endl;
        }
        for (size_t i = 0; i < row; i++)
        {
            cout << "---------";
        }
        cout << endl;

        for (size_t i = 0; i < row; i++)
        {
            cout << sumV[i] << "\t";
        }

        

    }break;


    case 3:
    {

    }break;



    default:
        break;
    }
    return 0;
}