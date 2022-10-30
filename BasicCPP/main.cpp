#include <iostream>
#include<Windows.h>
#include<ctime>
#include <iomanip>
#include<conio.h>

using namespace std;

////1
template <typename T>
void Arif(T arr[], const T size, int sum)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	
	cout << " ";
	for (size_t i = 0; i < size; i++)
	{
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
		arr[i] = rand() % 20;
		cout << arr[i] << "\t ";
		sum += arr[i];
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	}
	cout << endl << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
	cout << " ------------------------" << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << " \n Sum = ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
	cout << sum /5 << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
}
////2
template <typename T>
T rivn(T a, T b, T c)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	T D = sqrt(b * b - 4 * a * c);
	T x1 = (-b + D);
	T x11 = 2 * a;
	T x111 = x1 / x11;
	T x2 = (-b - D);
	T x22 = x2 / x11;

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
	cout << " ------------------------" << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
	cout << endl;
	cout << " " << a << "x^2 + " << b << "x + " << c << " = " << "0" << endl;

	cout << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
	cout << " ------------------------" << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

	cout << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << " Discriminant : ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
	cout << D << endl;

	cout << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
	cout << " ------------------------" << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << endl;

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << " x1 : ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
	cout << x111 << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << " x2 : ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
	cout << x22 << endl << endl;
	return 0;
}

////3
template <typename T, typename T1>
void Func(T p_d, T1 p_i) {
	cout << setprecision(p_i) << p_d;
}
////4
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
	cout << " ------------------------"<< endl << endl;
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
////5
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

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);


	setlocale(LC_ALL, "ru");

	char switch_on;

	do
	{
		system("cls");
		cout << "    #=====================MENU====================#" << endl;
		cout << "     |                                           | " << endl;
		cout << "     |   1 - поиск среднего арифметического      | " << endl;
		cout << "     |     значения массива.                     | " << endl;
		cout << "     |                                           | " << endl;
		cout << "     |   2 - нахождения корней линейного         | " << endl;
		cout << "     |    (a*x+b=0) и квадратного                | " << endl;
		cout << "     |    (a * x2 + b * x + c = 0) уравнений.    | " << endl;
		cout << "     |                                           | " << endl;
		cout << "     |   3 - округление введенного               | " << endl;
		cout << "     |    действительного числа.                 | " << endl;
		cout << "     |                                           | " << endl;
		cout << "     |   4 - там все описанно)                   | " << endl;
		cout << "     |                                           | " << endl;
		cout << "     |   5 - там все описанно)                   | " << endl;
		cout << "     |                                           | " << endl;
		cout << "    #==============================================#" << endl;
		cout << "     |   0 - Выход                               |" << endl;
		cout << "    #=============================================#"  << endl;
		cout << "\n Введите число - > ";
		switch_on = _getch();
		system("cls");
		cout << endl;

		switch (switch_on) {

		case '0':
		{
			break;


		}break;

		case '1':
		{
			const int size = 5;
			int arr[size];
			int sum = 0;

			Arif(arr, size,sum);

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));


		}break;

		case '2':
		{
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			int a; int b; int c;
			srand(time(0));
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << " Enter A -> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> a;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << " Enter B -> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> b;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << " Enter C -> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> c;
			cout << endl;
			rivn<int>(a, b, c);

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

		}break;

		case '3':
		{
			double x;
			int y;
			cout << " Введите целое число : ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> x;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << " Введите знаки после комы : ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> y;
			cout << endl;

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " ------------------------" << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << " Округление : ";

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
			Func<double, int>(x, y);

			cout << endl << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

		}break;

		case '4':
		{
			char switch_on1;

			do
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
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
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
					system("pause");
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

				}break;

				case '2':
				{
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
					srand(time(0));
					const size_t col = 5;
					const size_t row = 5;
					int arr[col][row];
					Arr2<int>(arr, col, row);

					cout << endl;
					cout << " ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
					system("pause");
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

				}break;

				case '3':
				{
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
					srand(time(0));
					const size_t col = 5;
					const size_t row = 5;
					const size_t Q = 3;
					int arr[col][row][Q];
					Arr3<int>(arr, col, row, Q);

					cout << endl;
					cout << " ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
					system("pause");
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

				}break;

				}
			} while (switch_on1 != '0');
		}break;

		case '5':
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
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Введите число : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
					cin >> a;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Введите число : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
					cin >> b;

					cout << endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
					cout << " ------------------------" << endl << endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

					cout << " Максимальное число : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
					cout << Max(a, b) << endl << endl;

					cout << endl ;
					cout << " ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
					system("pause");
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
				}break;

				case '2':
				{
					float a, b, c, d;
					cout << endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Введите число : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
					cin >> a;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Введите число : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
					cin >> b;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Введите число : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
					cin >> c;
					cout << endl;

					SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
					cout << " ------------------------" << endl << endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

					cout << " Максимальное число : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
					cout << Max(a, b, c) << endl << endl;

					cout << endl;
					cout << " ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
					system("pause");
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
				}break;

				}
			} while (switch_on2 != '0');


		}break;
		default:
			break;
		}

	} while (switch_on != '0');

	return 0;
}
