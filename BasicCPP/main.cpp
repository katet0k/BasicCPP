#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;


void n1(int* x, int* y)
{

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (*x > *y) {

		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		cout << " > ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << * y << endl;
	}
	if (*x < *y) {
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		cout << " < ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << *y << endl;
	}
	if (*x == *y) {
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		cout << " = ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << *y << endl;
	
	}
}
void n2(int* x)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	if (*x > 0) {

		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		cout << " > ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << 0 << endl;
	}
	if (*x < 0) {

		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		cout << " < ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << 0 << endl;

	}
	if (*x == 0) {

		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		cout << " = ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << 0 << endl;
	}
}
void n3(int* x, int* y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
	cout << "  " << *y;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 6));
	cout << " " << *x << endl;
}
void n4(double* x, double* y, char* q)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	switch (* q)
	{
	case '1': {

		SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
		cout << " + ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
		cout << *y;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
		cout << " = ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << *x + *y << endl;

	}break;
	case '2': {

		SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
		cout << " - ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
		cout << *y;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
		cout << " = ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << *x - *y << endl;

	}break;
	case '3': {

		SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
		cout << " * ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
		cout << *y;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
		cout << " = ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << *x * *y << endl;

	}break;
	case '4': {

		SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
		cout << "  " << *x;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
		cout << " / ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
		cout << *y;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
		cout << " = ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
		cout << *x / *y << endl;

	}break;

	default: {
		cout << "Error" << endl;
		break;

	}break;
	}
	

}
void n5(int arr[], int size, int sum) {

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << "  ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "\t";
		sum += arr[i];
	}
	cout << endl;

	cout << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
	cout << " ------------------------" << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << endl;
	cout << "  Sum = ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 1));
	cout << sum << endl;
}
int main()
{
	setlocale(LC_ALL, "ru");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	char switch_on;
	do
	{
		system("cls");
		cout << "  #============================================#" << endl;
		cout << "   |                                          |" << endl;
		cout << "   |  1 - определяет большее из двух чисел.   |" << endl;
		cout << "   |                                          |" << endl;
		cout << "   |  2 - определяет символ числа, введенного |" << endl;
		cout << "   |    с клавиатуры.                         |" << endl;
		cout << "   |                                          |" << endl;
		cout << "   |  3 - меняет местами значение двух        |" << endl;
		cout << "   |    переменных.                           |" << endl;
		cout << "   |                                          |" << endl;
		cout << "   |  4 - калькулятор.                        |" << endl;
		cout << "   |                                          |" << endl;
		cout << "   |  5 - сумма елементов массива.            |" << endl;
		cout << "   |                                          |" << endl;
		cout << "  #============================================#" << endl;
		cout << " --> ";
	
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
			int* x = new int{};
			int* y = new int{};

			cout << endl;
			cout << "  --> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> *x;

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "  --> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> *y;

			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " ------------------------" << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			n1(x, y);

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

			delete x, y;

		}break;
		case '2':
		{
			int* x = new int{};
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "  --> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> *x;

			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " ------------------------" << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			n2(x);

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

			delete x;
		}break;

		case '3':
		{
			int* x = new int{};
			int* y = new int{};

			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "  --> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 6));
			cin >> *x;

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "  --> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> *y;

			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " ------------------------" << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			n3(x, y);

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

			delete x, y;
		}break;
		case '4':
		{
			
			double* x = new double{};
			double* y = new double{};
			char* q = new char{};

			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "  --> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> *x;
			cin.ignore();
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "  --> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 3));
			cin >> *y;
			cin.ignore();

			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "  #================#" << endl;
			cout << "  |  1 ---> "; 
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << "+ ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "     |" << endl;
			cout << "  |  2 ---> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << "- ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "     |" << endl;
			cout << "  |  3 ---> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << "* ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "     |" << endl;
			cout << "  |  4 ---> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << "/ ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << "     |" << endl;
			cout << "  #================#" << endl;

			do
			{
				SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
				cout << "  --> ";
				SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
				cin >> *q;
				if (isdigit(*q))
				{
					break;
				}

			} while (true);


			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " ------------------------" << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			n4(x, y, q);

			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

			delete x, y, q;

		}break;
		case '5':
		{
			
			int size = 10 ;
			int* arr = new int [size];
			int sum = 0;

			n5(arr, size, sum);


			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			delete[] arr, sum;

		}break;

		default:
			break;
		}

	} while (switch_on != '0');
	return 0;
}