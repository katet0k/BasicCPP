#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
template <typename T>
void stypid(T arr[], T a, const uint32_t size)
{
	a = 0;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a;
		a++;

		cout << a << " ";
	}
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
	cout << " Sum all clients : " << a << " " << endl;
}
template <typename T>
void stypid1(T arr[], T a, const uint32_t size, T arrA[], T c)
{
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	a = 0;
	cout << "-----------------------------------------------------------| Packege Distribution |---------------------------------------------------------";
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a;
		a++;
		cout << a << " ";
	}
	cout << endl << endl;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	c = 0;
	cout << "| | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  ";
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	for (size_t i = 0; i < size; i++)
	{
		arrA[i] = rand() % 5;
		c += 1;
		if (c > 9)
		{
			cout << " " << arrA[i] << " ";
		}
		else {
			cout << arrA[i] << " ";
		}
	}
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------";
	cout << endl << endl;
}

template <typename T>
void packege(T arr[], T a, T arrA[], const uint32_t size)
{
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	a = 0;
	cout << "-----------------------------------------------------------| Packege Distribution |---------------------------------------------------------";
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a;
		a++;
		cout << a << " ";
	}
	cout << endl << endl;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	int c = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	int c0 = 0;
	int p = 0;
	int m = 0;
	cout << "| | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |";
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));

	for (size_t i = 0; i < size; i++)
	{
		arrA[i] = rand() % 5;
		c += 1;
		if (arrA[i] == 0)
		{
			c0++;
			m += 300;
		}
		if (arrA[i] == 1)
		{
			c1++;
			m += 100;
		}

		if (arrA[i] == 2)
		{
			c2++;
			m += 130;
		}

		if (arrA[i] == 3)
		{
			c3++;
			m += 178;
		}

		if (arrA[i] == 4)
		{
			c4++;
			m += 230;
		}
		if (c > 9)
		{
			cout << " " << arrA[i] << " ";
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
		}
		else
		{
			cout << arrA[i] << " ";
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
		}
	}
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	cout << endl << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------";
	cout << endl << endl;

	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	if (c0 > c1 && c0 > c2 && c0 > c3 && c0 > c4) {
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " The most popular package ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "0 ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << "--> ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c0;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " clients use it" << endl;
	}
	if (c1 > c0 && c1 > c2 && c1 > c3 && c1 > c4) {
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " The most popular package ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "1 ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << "--> ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c1;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " clients use it" << endl;
	}
	if (c2 > c0 && c2 > c1 && c2 > c3 && c2 > c4) {
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " The most popular package ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "2 ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << "--> ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c2;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " clients use it" << endl;
	}
	if (c3 > c0 && c3 > c1 && c3 > c2 && c3 > c4) {
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " The most popular package ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "3 ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << "--> ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c3;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " clients use it" << endl;
	}
	if (c4 > c0 && c4 > c1 && c4 > c2 && c4 > c3)
	{
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " The most popular package ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "4 ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << "--> ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c4;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
		cout << " clients use it" << endl;
	}
	cout << endl;
}
template <typename T>
void packege1(T arr[], T a, T arrA[], const uint32_t size)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	a = 0;
	cout << "-----------------------------------------------------------| Packege Distribution |---------------------------------------------------------";
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a;
		a++;
		cout << a << " ";
	}
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	int c = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	int c0 = 0;
	int p = 0;
	int m = 0;
	cout << "| | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |";
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));

	for (size_t i = 0; i < size; i++)
	{
		arrA[i] = rand() % 5;
		c += 1;
		if (arrA[i] == 0)
		{
			c0++;
			m += 300;
		}
		if (arrA[i] == 1)
		{
			c1++;
			m += 100;
		}
		if (arrA[i] == 2)
		{
			c2++;
			m += 130;
		}
		if (arrA[i] == 3)
		{
			c3++;
			m += 178;
		}
		if (arrA[i] == 4)
		{
			c4++;
			m += 230;
		}
		if (c > 9)
		{
			cout << " " << arrA[i] << " ";
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
		}
		else
		{
			cout << arrA[i] << " ";
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
		}
	}
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	cout << endl << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------";
	cout << endl << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
	cout << " The company`s monthly income : ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	cout << m << endl;
	cout << endl << endl;
}
int main()
{
	int a = 0;
	int q = 0, w = 0, e = 0, r = 0, t = 0;
	int c = 0;
	int sum = 0;
	const uint32_t size = 50;
	int arr[size];
	int arrA[size];
	char switch_on;
	do
	{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		system("cls");
		cout << "\t\t\t\t\t#>----------------------<MENU>-----------------------<#" << endl;
		cout << "\t\t\t\t\t|         1 - All clients                             |" << endl;
		cout << "\t\t\t\t\t|         2 - All clients on packages                 |" << endl;
		cout << "\t\t\t\t\t|         3 - Profit of the enterprise for the month  |" << endl;
		cout << "\t\t\t\t\t|         4 - The most popular package                |" << endl;
		cout << "\t\t\t\t\t#>---------------------------------------------------<#" << endl;
		cout << "\t\t\t\t\t|         0 - Exit                                    |" << endl;
		cout << "\t\t\t\t\t#>---------------------------------------------------<#" << endl;
		switch_on = _getch();
		system("cls");

		switch (switch_on)
		{
		case '0':
		{
			break;
		}break;

		case '1':
		{
			cout << endl;
			stypid(arr, a, size);
			cout << endl;
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
			system("pause");
			
		}break;
		case '2':
		{
			cout << endl;
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
			cout << "   #--------| Packege |-------#" << endl;
			cout << "    |                        | " << endl;
			cout << "    |       0 - 100 GRN      | " << endl;
			cout << "    |       1 - 130 GRN      | " << endl;
			cout << "    |       2 - 178 GRN      | " << endl;
			cout << "    |       3 - 230 GRN      | " << endl;
			cout << "    |       4 - 300 GRN      | " << endl;
			cout << "    |                        | " << endl;
			cout << "   #--------------------------#" << endl << endl;
			stypid1(arr, a, size, arrA, c);
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
			system("pause");
		}break;
		case '3':
		{
			cout << endl;
			packege(arr, a, arrA, size);
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
			system("pause");
		}break;
		case '4':
		{
			cout << endl;
			packege1(arr, a, arrA, size);
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
			system("pause");
		}break;
		}
	} while (switch_on != '0');

	return 0;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
}