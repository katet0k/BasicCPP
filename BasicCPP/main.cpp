#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    setlocale(LC_ALL, "ru");

    do {

        system("pause");
        system("cls");

        cout << "#>----------<MENU>----------<#" << endl;
        cout << "|      1 - Task              |" << endl;
        cout << "|      2 - Task              |" << endl;
        cout << "|      3 - Task              |" << endl;
        cout << "#>--------------------------<#" << endl;
        cout << "|      0 - Exit              |" << endl;
        cout << "#>--------------------------<#" << endl;

        int numbr;
        cin >> numbr;
        cout << "" << endl;

        system("cls");

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

        }break;

        case 2:
        {

            const int col = 3;
            const int row = 4;

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
            int sum, k = 0;


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

            for (size_t i = 0; i < row; i++)
            {
                sum = 0;

                for (size_t j = 0; j < col; j++)
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
            cout << endl;


        }break;


        case 3:
        {
            const int col = 5;
            const int row = 10;

            const int col1 = 5;
            const int row1 = 5;

            int arr[col][row];

            int arr1[col1][row1];

            int c;
            
            for (size_t i = 0; i < col; i++)
            {
                for (size_t j = 0; j < row; j++)
                {
                    arr[i][j] = rand() % 50;

                    cout << arr[i][j] << "\t";
                }
                cout << endl << endl;
            }

            cout << endl;
            for (size_t i = 0; i < col1; i++)
            {
                for (size_t j = 0; j < row1; j++)
                {
                    c = 0;

                        arr1[0][0] = arr[0][0] + arr[0][1];
                        arr1[0][1] = arr[0][2] + arr[0][3];
                        arr1[0][2] = arr[0][4] + arr[0][5];
                        arr1[0][3] = arr[0][6] + arr[0][7];
                        arr1[0][4] = arr[0][8] + arr[0][9];

                        arr1[1][0] = arr[1][0] + arr[1][1];
                        arr1[1][1] = arr[1][2] + arr[1][3];
                        arr1[1][2] = arr[1][4] + arr[1][5];
                        arr1[1][3] = arr[1][6] + arr[1][7];
                        arr1[1][4] = arr[1][8] + arr[1][9];

                        arr1[2][0] = arr[2][0] + arr[2][1];
                        arr1[2][1] = arr[2][2] + arr[2][3];
                        arr1[2][2] = arr[2][4] + arr[2][5];
                        arr1[2][3] = arr[2][6] + arr[2][7];
                        arr1[2][4] = arr[2][8] + arr[2][9];

                        arr1[3][0] = arr[3][0] + arr[3][1];
                        arr1[3][1] = arr[3][2] + arr[3][3];
                        arr1[3][2] = arr[3][4] + arr[3][5];
                        arr1[3][3] = arr[3][6] + arr[3][7];
                        arr1[3][4] = arr[3][8] + arr[3][9];

                        arr1[4][0] = arr[4][0] + arr[4][1];
                        arr1[4][1] = arr[4][2] + arr[4][3];
                        arr1[4][2] = arr[4][4] + arr[4][5];
                        arr1[4][3] = arr[4][6] + arr[4][7];
                        arr1[4][4] = arr[4][8] + arr[4][9];
                                         
                    
                    
                    cout << arr1[i][j] << "\t";

                }
                cout << endl << endl;


            }
            cout << endl;




        }break;



        default: {
            break;
        }
        }
    } while (true);

    return 0;
}