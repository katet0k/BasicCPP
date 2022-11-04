#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

template <typename T>
void stypid(T arr[], T a, const uint32_t size)
{
	a = 0;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a;
		a++;

		cout << a << " ";
	}
	cout << endl << endl;
	cout << " Sum all clients : " << a << " " << endl;
}

template <typename T>
void stypid1(T arr[], T a, const uint32_t size)
{
	a = 0;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a;
		a++;

		cout << a << " ";
	}
	cout << endl << endl;
}

template <typename T>
void packege(T arrA[], const uint32_t size)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int c = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	int c0 = 0;
	int p = 0;
	int m = 0;

	for (size_t i = 0; i < size; i++) {

		p ++;
		if (p > 9) {

			cout << " | ";

		}
		else {

			cout << "| ";
		}

	}
	cout << endl<< endl;
	cout << " ";
	for (size_t i = 0; i < size; i++)
	{
		arrA[i] = rand() % 5;
		c += 1;


		if (arrA[i] == 0) {

			c0++;
			m += 300;
		}
		if (arrA[i] == 1) {

			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
			c1++; 
			m += 100;
		}
		if (arrA[i] == 2) {

			c2++;
			m += 130;
		}
		if (arrA[i] == 3) {

			c3++;
			m += 178;
		}
		if (arrA[i] == 4) {

			c4++;
			m += 230;
		}

		if (c > 9) {


			cout << " " << arrA[i] << " ";
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
		}
		else {

			cout << arrA[i] << " ";
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
		}
	}

	cout << endl << endl;

	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
	if (c0 > c1 && c0 > c2 && c0 > c3 && c0 > c4) {

		cout << " most popular package ";
		cout << "0 - ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c0;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << " clients use it" << endl;
	}
	if (c1 > c0 && c1 > c2 && c1 > c3 && c1 > c4) {
		cout << " most popular package ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "1 ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << "--> ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c1;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << " clients use it" << endl;
	}
	if (c2 > c0 && c2 > c1 && c2 > c3 && c2 > c4) {
		cout << " most popular package ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "2 ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << "--> ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c2;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << " clients use it" << endl;
	}
	if (c3 > c0 && c3 > c1 && c3 > c2 && c3 > c4) {
		cout << " most popular package ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "3 ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << "--> ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c3;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << " clients use it" << endl;
	}
	if (c4 > c0 && c4 > c1 && c4 > c2 && c4 > c3) {
		cout << " most popular package ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "4 ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << "--> ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << c4;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << " clients use it" << endl;
	}

	cout << endl;
	cout << " all profit per month from 50 clients --> ";
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
	cout << m << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

}

template <typename T>
void prub(T a)
{

}

int main() {
	
	int a = 0;
	int q, w, e, r, t;
	const uint32_t size = 50;
	int arr[size];
	int arrA[size];
	char switch_on;
	do
	{
		cout << endl << endl;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
		cout << "                                   --";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "--";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
		cout << "--";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << " This is the greatest project of ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
		cout << "Dari";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
		cout << " and ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "Katya ";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
		cout << "--";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
		cout << "--";
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
		cout << "--" << endl;
		SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

		cout << endl << endl;
		cout << "    [-----------------------------]" << endl;
		cout << "     |   1 --> all clients       |" << endl;
		cout << "     |                           |" << endl;
		cout << "     |   2 --> clients and their |" << endl;
		cout << "     |      packages             |" << endl;
		cout << "     |                           |" << endl;
		cout << "    [-----------------------------]" << endl << endl;
		switch_on = _getch();

		switch (switch_on)
		{
		case '1':
		{
			cout << endl << endl;
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
			cout << " all clients :" << endl << endl;
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
			cout << " ";
			stypid(arr, a, size);
			cout << endl;
			system("pause");
			system("cls");
			
		}break;

		case '2':
		{
			cout << "  #-";
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
			cout << "package prices";
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
			cout << "-#" << endl;
			cout << "   |  1 - 100 grn | " << endl;
			cout << "   |  2 - 130 grn | " << endl;
			cout << "   |  3 - 178 grn | " << endl;
			cout << "   |  4 - 230 grn | " << endl;
			cout << "   |  0 - 300 grn | " << endl;
			cout << "  #----------------#" << endl << endl;

			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
			cout << "clients and their packages :" << endl << endl;
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
			cout << " ";
			stypid1(arr, a, size);
			cout << " ";
			packege(arrA, size);
			SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
			system("pause");
			system("cls");

		}break;
		default:
			break;
		}

	} while (switch_on != 0);
	
	
	
	return 0;
}