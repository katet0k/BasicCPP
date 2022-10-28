#include <iostream>
#include <Windows.h>
#include <ctime>
#include<conio.h>
using namespace std;


/////1
bool Year(int year)
{
	bool res = 0;

	if (year % 4 == 0) {
		res = true;
	}
	if (year % 100 == 0) {
		res = false;
	}
	if (year % 400 == 0) {
		res = true;
	}
	return res;
}
int Date(int d, int m, int y)
{

	int k = d;

	if (m == 1)
	{
		k += 31;
	}
	if (m == 2)
	{
		if (Year(y)) {
			k += 29;
		}
		else {
			k += 28;
		}
	}
	if (m == 3)
	{
		k += 31;
	}
	if (m == 4)
	{

	}
	if (m == 5)
	{
		k += 31;
	}
	if (m == 6)
	{

	}
	if (m == 7)
	{
		k += 31;
	}
	if (m == 8)
	{
		k += 31;
	}
	if (m == 9)
	{

	}
	if (m == 10)
	{
		k += 31;
	}
	if (m == 11)
	{

	}
	if (m == 12)
	{
		k += 31;
	}

	k += (y - 1) * 365 + ((y - 1) / 4);

	return k;
}
int Difference(int d1, int d2, int m1, int m2, int y1, int y2)
{
	if (d1 > d2) {
		int temp = d1;
		d1 = d2;
		d1 = temp;
	}
	if (m1 > m2) {
		int temp = m1;
		m1 = m2;
		m2 = temp;
	}
	if (y1 > y2)
	{
		int temp = y1;
		y1 = y2;
		y2 = temp;
	}

	if (d2 > d1) {
		int temp = d2;
		d2 = d1;
		d1 = temp;
	}
	if (m2 > m1) {
		int temp = m2;
		m2 = m1;
		m1 = temp;
	}
	if (y2 > y1)
	{
		int temp = y2;
		y2 = y1;
		y1 = temp;
	}
	int k = Date(d1, m1, y1) - Date(d2, m2, y2);
	return k;
}


/////2
void Arifmet( int arr[], const int size, int n = 0 ,int sum = 0)
{

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << " ";
	for (n = 0; size > n; n++)
	{
		arr[n] = rand() % 10;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
		cout << arr[n] << "\t ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		sum += arr[n] % 10;

	}
	cout << endl;
	cout << " \n Среднее арифметическое = ";

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
	cout << (double)sum / n << endl;

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

}

////3
void KolElement( int arr[], const int size, int n = 0, int c = 0) {

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	int plus = 0;
	int minys = 0;
	cout << " ";
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 + (-5);
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
		cout << arr[i] << "\t ";

		if (arr[i] > 0)
		{
			plus++;
		}
	    else if (arr[i] < 0) {
			minys++;
		}
		if (arr[i] == 0) {
			c++;
		}
		arr[i] /= 10;
	}

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << endl;
	cout << " \n Количество нулей = ";

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
	cout << c << endl;

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << " \n Количество положительных чисел = ";

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
	cout << plus << endl;

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << " \n Количество отрицательных чисел = ";

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
	cout << minys << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

}
/////4

void Arr(int arr[][5], const size_t col, const size_t row) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	for (size_t i = 0; i < col; i++)
	{
		cout << " ";
		for (size_t j = 0; j < row; j++)
		{
			arr[col][row] = arr[i][j];

			arr[i][j] = rand() % 20 + (-5);
			
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
			cout << arr[i][j] << "\t\t";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		}
		cout << endl << endl;

	}
	

	
	
}
void MinMax(int arr[][5], const int col, int row)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	long long min, max;
	max = arr[col][row];
	min = arr[col][row];

	for (size_t i = 0; i < col; i++)
	{
		for (size_t j = 0; j < row; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}

			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}

	cout << " Min = ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
	cout << min << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << " Max = ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
	cout << max << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
}

/*
void Sort(int arr[][5], const size_t col, const size_t row) {

	for (size_t i = 1; i < row; i++) {

		for (size_t j = i; j > 0; j--) {

			if (arr[j] < arr[j - 1])
			{
				arr[i][j] = arr[col][row];
				int swap = arr[i][j];
				arr[i][j] = arr[i][j - 1];
				arr[i][j - 1] = swap;

			}
		}

	}
}
*/


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
		cout << "     |   1 - вычисляет разницу в днях между      |" << endl;
		cout << "     |     введенными датами                     |" << endl;
		cout << "     |                                           |" << endl;
		cout << "     |   2 - определяет среднее арифметических   |" << endl;
		cout << "     |     элементов переданного ей массива.     |" << endl;
		cout << "     |                                           |" << endl;
		cout << "     |   3 - определяет количество положительных,|" << endl;
		cout << "     |   отрицательных и нулевых элементов       |" << endl;
		cout << "     |   переданного ей массива.                 |" << endl;
		cout << "     |                                           |" << endl;
		cout << "     |   4 - перегруженные функции (ну почти)    |" << endl;
		cout << "     |                                           |" << endl;
		cout << "     |   0 - выход                               |" << endl;
		cout << "     |                                           | " << endl;
		cout << "    #============================================#" << endl;

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

			int d1, d2, m1, m2, y1, y2;



			cout << " Введите первый день: ";

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
			cin >> d2;

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << " Введите первый месяц: ";

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
			cin >> m2;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

			for (size_t i = 0; i < m2; i++)
			{
				if (m2 > 12 || m2 < 1)
				{

					SetConsoleTextAttribute(handle, WORD(0 << 0 | 4));
					cout << " Ошибка введите число от 1 до 12" << endl;

					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Введите первый месяц: ";

					SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
					cin >> m2;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
				}
			}

			cout << " Введите первый год: ";

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
			cin >> y2;

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

			cout << " Введите второй день: ";

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
			cin >> d1;

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << " Введите второй месяц: ";

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
			cin >> m1;

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

			for (size_t i = 0; i < m1; i++)
			{
				if (m1 > 12 || m1 < 1)
				{

					SetConsoleTextAttribute(handle, WORD(0 << 0 | 4));
					cout << " Ошибка введите число от 1 до 12" << endl;


					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Введите второй месяц: ";

					SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
					cin >> m1;

					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
				}
			}

			cout << " Введите второй год: ";

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 2));
			cin >> y1;



			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

			cout << " \n Разность в днях между этими датами составляет ";

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
			cout << Difference(d1, d2, m1, m2, y1, y2) << " дней.\n";

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

		}break;

		case '2':
		{

			srand(time(0));

			int n = 0, sum = 0;
			const int size = 10;
			int arr[size];

			Arifmet(arr, size, n, sum);

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

		}break;

		case '3':
		{

			srand(time(0));

			int n = 0, sum = 0, c = 0;
			const int size = 10;
			int arr[size];

			KolElement(arr, size, n = 0, c = 0);

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

		}break;

		case '4':
		{
			srand(time(0));
			const size_t col = 5;
			const size_t row = 5;
			int arr[col][row];

			/*Sort(arr, col, row);*/
			Arr(arr,col, row);
			MinMax(arr, col, row);

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		}break;

		default:
			break;
		}

	} while (switch_on != '0');

	return 0;
}
