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
void packege(T arrA[], const uint32_t size, T c)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
	c = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	int c5 = 0;

	int k = 4;
	for (size_t i = 0; i < size; i++)
	{
		arrA[i] = rand() % 5;
		c += 1;

		if (arrA[i] == 4) {
			c4 += 1;
		}
		if (arrA[i] == 3) {
			c3 += 1;
		}
		if (arrA[i] == 2) {
			c2 += 1;
		}
		if (arrA[i] == 1) {
			c1 += 1;
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

}

template <typename T>
void prub(T a)
{

}

int main() {

	int a = 0;
	int q, w, e, r, t;
	int c = 0;
	const uint32_t size = 50;
	int arr[size];
	int arrA[size];


	cout << endl << endl;
	stypid(arr, a, size);
	cout << "#-----------#" << endl;
	cout << " | 1 - 100 | " << endl;
	cout << " | 2 - 130 | " << endl;
	cout << " | 3 - 178 | " << endl;
	cout << " | 4 - 230 | " << endl;
	cout << " | 5 - 300 | " << endl;
	cout << "#-----------#" << endl;
	stypid1(arr, a, size);

	packege(arrA, size, c);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
}